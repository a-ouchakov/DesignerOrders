
unit UserUnit;
interface

function MoneyToString(S:Currency;kpk:boolean;usd:boolean;fl:boolean):string;
// если KOP:=TRUE - печать копеек цифрой, иначе прописью
// если USD:=TRUE - печать суммы в долларах
// если fl:=TRUE - печать целое число 

function Line2Win(Line: string; WinLen: byte): string;

implementation
uses SysUtils, inifiles;
const m1: array [1..9] of string
      =('один ','два ','три ','четыре ','п€ть ','шесть ','семь ','восемь ','дев€ть ');
const f1: array [1..9] of string
      =('одна ','две ','три ','четыре ','п€ть ','шесть ','семь ','восемь ','дев€ть ');
const n10: array [1..9] of string
      =('дес€ть ','двадцать ','тридцать ','сорок ','п€тьдес€т ','шестьдес€т ',
       'семьдес€т ','восемьдес€т ','дев€носто ');
const first10: array [11..19] of string
      =('одиннадцать ','двенадцать ','тринадцать ','четырнадцать ','п€тнадцать ',
        'шестнадцать ','семнадцать ','восемнадцать ','дев€тнадцать ');
const n100: array [1..9] of string
      = ('сто ','двести ','триста ', 'четыреста ','п€тьсот ','шестьсот ','семьсот ',
         'восемьсот ','дев€тьсот ');
const kop: array [1..3] of string = ('копейка','копейки','копеек');
      rub: array [1..3] of string = ('рубль ','рубл€ ','рублей ');
      tsd: array [1..3] of string = ('тыс€ча ','тыс€чи ','тыс€ч ');
      mln: array [1..3] of string = ('миллион ','миллиона ','миллионов ');
      mrd: array [1..3] of string = ('миллиapд ','миллиаpдa','миллиapдoв ');
      cnt: array [1..3] of string = ('тыс€ча ','тыс€чи ','тыс€ч ');

const cent: array [1..3] of string = ('c','c','c');
//       cent: array [1..3] of string = ('цент —Ўј','цента —Ўј','центов —Ўј');
//     doll: array [1..3] of string = ('доллар ','доллара ','долларов ');
       doll: array [1..3] of string = ('$ ','$ ','$ ');

function Triada(I,n:Integer;k:boolean;usd:boolean;fl:boolean):string;
var a,gender,sfx:integer;
begin
  Result:='';
  sfx:=3;
  if n=2 then gender:=0 else gender:=1;

  a:= I div 100;
  if (a>0)
  then begin
         Result:=Result+n100[a];
         I:=I-a*100;
       end;

  if (I>19)
  then begin
         a:= I div 10;
         if (a>0)
         then begin
                Result:=Result+n10[a];
                I:=I-a*10;
                if I>0 then
                  begin
                    if k then gender:=0;
                    if gender=1 then Result:=Result+m1[I]
                                else Result:=Result+f1[I];
                    case I of
                        1: sfx:=1;
                     2..4: sfx:=2;
                     5..9: sfx:=3;
                    end;
                  end;
              end;
       end
  else begin
         case I of
            1:begin
                if k then gender:=0;
                if gender=1 then Result:=Result+m1[I]
                            else Result:=Result+f1[I];
                sfx:=1;
              end;
         2..4:begin
                if k then gender:=0;
                if gender=1 then Result:=Result+m1[I]
                            else Result:=Result+f1[I];
                sfx:=2;
              end;
         5..9:begin
                if k then gender:=0;
                if gender=1 then Result:=Result+m1[I]
                            else Result:=Result+f1[I];
                sfx:=3;
              end;
           10:begin
                Result:=Result+n10[1];
                sfx:=3;
              end;
       11..19:begin
                Result:=Result+first10[I];
                sfx:=3;
              end;
         end;
       end;
if fl then
begin
  case n of
    1: if not k then
         if usd then
           result:=result+doll[sfx]
          else
           Result:=Result+rub[sfx]
        else
         if usd then
           result:=result+cent[sfx]
          else
           Result:=Result+kop[sfx];
    2: if not k then
         Result:=Result+tsd[sfx]
        else
         if usd then
           result:=result+cent[sfx]
          else
           Result:=Result+kop[sfx];
    3: if not k then
         Result:=Result+mln[sfx]
        else
         if usd then
           result:=result+cent[sfx]
          else
           Result:=Result+kop[sfx];
    4: if not k then
         Result:=Result+mrd[sfx]
        else
         if usd then
           result:=result+cent[sfx]
          else
           Result:=Result+kop[sfx];
  end;
end;
end;

function TriadaK(I:integer;kpk:boolean;usd:boolean;fl:boolean):string;
var sfx,H:integer;
begin
if fl then
  begin
  if kpk  then
    begin
      Result:='';
      sfx:=3;
      H:=(I mod 10);
      case H of
           1: sfx:=1;
        2..4: sfx:=2;
      end;
      if (I in [11..19]) then sfx:=3;
      if usd then
        begin
          if I<10 then Result:='0'+IntToStr(I)+' '+cent[sfx]
                  else Result:=IntToStr(I)+' '+cent[sfx];
        end
      else
        begin
          if I<10 then Result:='0'+IntToStr(I)+' '+kop[sfx]
                  else Result:=IntToStr(I)+' '+kop[sfx];
        end;
    end
  else
    begin
      if i=0 then
        if usd then
          result:='00 c'
         else
          result:='00 копеек'
       else
        result:=triada(i,1,true,usd,fl);
    end;
  end;
end;


function MoneyToString(S:Currency;kpk:boolean;usd:boolean;fl:boolean):string;
var I,H:LongInt;
    V:string;
    f,l:String;
    s1:Currency;
begin

  V:='';
  s1:=S;
  H:=1000000000;
  I:=Trunc(S/H);
  if (I>0)
  then begin
         V:=Triada(I,4,false,usd,fl);
         S:=S-Trunc(S/H)*H;
       end;

  H:=1000000;
  I:=Trunc(S/H);
  if (I>0)
  then begin
         V:=V+Triada(I,3,false,usd,fl);
         S:=S-Trunc(S/H)*H;
       end;

  H:=1000;
  I:=Trunc(S/H);
  if (I>0)
  then begin
         V:=V+Triada(I,2,false,usd,fl);
         S:=S-Trunc(S/H)*H;
       end;

  H:=1;
  I:=Trunc(S/H);
  if (I>0)
  then begin
       V:=V+Triada(I,1,false,usd,fl);
       S:=S-Trunc(S/H)*H;
       end
  else
   if usd then
    v:=v+doll[3]
   else
    V:=V+rub[3];

  I:=Trunc(S*100);
  V:=V+TriadaK(I,kpk,usd,fl); //ѕечать копеек
  if s1 < 1 then  V:='ноль '+V;
  f:=AnsiUpperCase(Copy(V,1,1));
  l:=Copy(V,2,256);
  V:=f+l;
  Result:=V;
end;

function Line2Win(Line: string; WinLen: byte): string;
Var
 LineStart, LineEnd: string;

function LastPos(SS, S: string): byte;
Var
TempPos: byte;

Begin
// TempPos:=0;
 Repeat
  TempPos:=Pos(SS, S);
  FillChar(S[TempPos], Length(SS), '_');
 Until Pos(SS, S)=0;
 LastPos:=TempPos;
End;

Begin
 If Length(Line)<=WinLen then Line2Win:=Line
 Else
  Begin
   LineStart:=Copy(Line, 1, 3);
   LineEnd:=Copy(Line, LastPos('\', Line), Length(Line)-LastPos('\', Line)+1);
   If (Length(LineStart)+Length(LineEnd)+2) >= WinLen then Line2Win:=LineStart+'..'+LineEnd
   Else
     Line2Win:=LineStart+
     Copy(Line, 4, Trunc((WinLen-(Length(LineStart)+Length(LineEnd)))/2)-1)+'..'+
     Copy(Line, LastPos('\', Line)-Trunc((WinLen-(Length(LineStart)+Length(LineEnd)))/2), Trunc((WinLen-(Length(LineStart)+
     Length(LineEnd)))/2)-1)+LineEnd;
  end;
End;

end.
