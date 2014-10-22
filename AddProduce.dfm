object FrAddProduce: TFrAddProduce
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1087#1088#1086#1076#1091#1082#1090
  ClientHeight = 139
  ClientWidth = 388
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poMainFormCenter
  Scaled = False
  OnActivate = FormActivate
  OnKeyDown = FormKeyDown
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 113
    Width = 388
    Height = 26
    Align = alBottom
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 0
    VisualStyle = vsGradient
    object btInsRaspDetail: TRzToolButton
      Left = 1
      Top = 1
      Width = 150
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 67
      Images = FrBisniessMenedger.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      OnClick = btInsRaspDetailClick
      ExplicitTop = 2
    end
    object RzSpacer5: TRzSpacer
      Left = 151
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alLeft
      ExplicitLeft = 97
      ExplicitTop = -1
    end
    object btClose: TRzToolButton
      Left = 237
      Top = 1
      Width = 150
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 38
      Images = FrBisniessMenedger.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alRight
      Caption = #1042#1099#1093#1086#1076
      OnClick = btCloseClick
      ExplicitLeft = 159
      ExplicitHeight = 17
    end
    object RzSpacer6: TRzSpacer
      Left = 233
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alRight
      ExplicitLeft = 3
      ExplicitTop = 42
      ExplicitHeight = 1189
    end
  end
  object RzPanel6: TRzPanel
    Left = 0
    Top = 75
    Width = 388
    Height = 38
    Align = alBottom
    BorderOuter = fsNone
    Color = 15329769
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 1
    object RzGroupBox8: TRzGroupBox
      Left = 0
      Top = 0
      Width = 201
      Height = 38
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alLeft
      Caption = #1042#1080#1076' '#1087#1088#1086#1076#1091#1082#1090#1072
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 0
      Transparent = True
      Visible = False
      object cbTypeName: TRzComboBox
        Left = 2
        Top = 15
        Width = 197
        Height = 21
        Align = alClient
        Style = csDropDownList
        Ctl3D = False
        FlatButtons = True
        FrameVisible = True
        ItemHeight = 13
        ParentCtl3D = False
        TabOnEnter = True
        TabOrder = 0
      end
    end
    object RzGroupBox6: TRzGroupBox
      Left = 201
      Top = 0
      Width = 187
      Height = 38
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alClient
      Caption = #1050#1086#1076' '#1087#1088#1086#1076#1091#1082#1090#1072
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 1
      Transparent = True
      Visible = False
      object edCodeB: TRzEdit
        Left = 2
        Top = 15
        Width = 183
        Height = 21
        Align = alClient
        Color = clWhite
        FrameHotTrack = True
        FrameVisible = True
        MaxLength = 16
        TabOnEnter = True
        TabOrder = 0
      end
    end
  end
  object RzPanel4: TRzPanel
    Left = 0
    Top = -1
    Width = 388
    Height = 38
    Align = alBottom
    BorderOuter = fsNone
    Color = 15329769
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 2
    object RzGroupBox7: TRzGroupBox
      Left = 0
      Top = 0
      Width = 388
      Height = 44
      Align = alTop
      Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1087#1088#1086#1076#1091#1082#1090#1072
      GroupStyle = gsCustom
      TabOrder = 0
      Transparent = True
      object edT512Name: TRzEdit
        AlignWithMargins = True
        Left = 5
        Top = 18
        Width = 378
        Height = 21
        Align = alClient
        FrameHotTrack = True
        FrameVisible = True
        TabOrder = 0
      end
    end
  end
  object RzPanel2: TRzPanel
    Left = 0
    Top = 37
    Width = 388
    Height = 38
    Align = alBottom
    BorderOuter = fsNone
    Color = 15329769
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 3
    object RzGroupBox2: TRzGroupBox
      Left = 0
      Top = 0
      Width = 387
      Height = 38
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alLeft
      Caption = #1058#1077#1084#1072#1090#1080#1095#1077#1089#1082#1086#1077' '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 0
      Transparent = True
      object cbRazdel: TRzComboBox
        Left = 2
        Top = 15
        Width = 383
        Height = 21
        Align = alClient
        Style = csDropDownList
        Ctl3D = False
        FlatButtons = True
        FrameVisible = True
        ItemHeight = 13
        ParentCtl3D = False
        TabOnEnter = True
        TabOrder = 0
      end
    end
  end
  object TmProduce: TTimer
    Enabled = False
    Interval = 200
    Left = 16
    Top = 56
  end
  object DSProduce: TDataSource
    AutoEdit = False
    DataSet = QProduce
    Left = 48
    Top = 56
  end
  object QProduce: TADOQuery
    Connection = FrMain.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <
      item
        Name = 'D0'
        DataType = ftString
        Size = -1
        Value = Null
      end>
    Prepared = True
    SQL.Strings = (
      'DECLARE @MyStr varchar(256);'
      'SET @MyStr=:D0;'
      
        'if(exists(select * from tempdb..sysobjects where id = object_id(' +
        #39'tempdb..#WsTempTreeId'#39'))) '
      
        'TRUNCATE TABLE #WsTempTreeId;ELSE CREATE TABLE #WsTempTreeId(Idn' +
        ' int NULL);'
      'insert into #WsTempTreeId(Idn)'
      
        'exec pr_All_Get_TreeValues @NameTable='#39'dbo.all_AdvProduceClass'#39',' +
        '@idn='#39'idn'#39',@idnP='#39'idnP'#39',@fwork=1,@Usl='#39'Id512NameCatalog=9113095 ' +
        'and iType=2 and datedel is null AND B.iText LIKE '#39'%'#39'+@MyStr+'#39'%'#39' ' +
        #39';'
      'select  A.idn, A.idnP,B.iText, A.iType  '
      #9#9' '
      'from all_AdvProduceClass A'
      'LEFT JOIN spl_LbText512 B ON B.Idn=id512Name'
      'where A.idn in(select idn from #WsTempTreeId)  ')
    Left = 80
    Top = 56
    object QProduceidn: TIntegerField
      FieldName = 'idn'
      ReadOnly = True
    end
    object QProduceidnP: TIntegerField
      FieldName = 'idnP'
    end
    object QProduceiText: TStringField
      FieldName = 'iText'
      Size = 512
    end
    object QProduceiType: TIntegerField
      FieldName = 'iType'
    end
  end
  object Qw: TADOQuery
    Connection = FrMain.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      '')
    Left = 328
    Top = 64
  end
end
