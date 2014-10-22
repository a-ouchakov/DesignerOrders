object FrEditRasp: TFrEditRasp
  Left = 88
  Top = 47
  BiDiMode = bdLeftToRight
  Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
  ClientHeight = 631
  ClientWidth = 1191
  Color = clBtnFace
  Constraints.MinHeight = 600
  Constraints.MinWidth = 800
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  ParentBiDiMode = False
  Position = poMainFormCenter
  OnActivate = FormActivate
  OnKeyDown = FormKeyDown
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 605
    Width = 1191
    Height = 26
    Align = alBottom
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 0
    VisualStyle = vsGradient
    object btInsRasp: TRzToolButton
      Left = 1
      Top = 1
      Width = 150
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 15
      Images = ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      OnClick = btInsRaspClick
      ExplicitLeft = 3
    end
    object RzSpacer4: TRzSpacer
      Left = 459
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alLeft
      Visible = False
      ExplicitLeft = 455
      ExplicitTop = 5
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
      Left = 1040
      Top = 1
      Width = 150
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 21
      Images = ImageList1
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
      Left = 1036
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alRight
      ExplicitLeft = 3
      ExplicitTop = 42
      ExplicitHeight = 1189
    end
    object btPrintRasp: TRzToolButton
      Left = 155
      Top = 1
      Width = 150
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 17
      Images = ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1055#1077#1095#1072#1090#1100
      OnClick = btPrintRaspClick
    end
    object btSheet: TRzToolButton
      Left = 309
      Top = 1
      Width = 150
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 19
      Images = ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1056#1072#1089#1089#1099#1083#1082#1072' '#1074#1077#1076#1086#1084#1086#1089#1090#1080
      Visible = False
      OnClick = btSheetClick
      ExplicitLeft = 307
    end
    object RzSpacer1: TRzSpacer
      Left = 305
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alLeft
      ExplicitLeft = 283
      ExplicitTop = 6
    end
    object btOtkaz: TRzToolButton
      Left = 463
      Top = 1
      Width = 150
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 23
      Images = ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1054#1090#1082#1083#1086#1085#1080#1090#1100
      Visible = False
      OnClick = btOtkazClick
      ExplicitLeft = 656
    end
    object RzSpacer2: TRzSpacer
      Left = 613
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alLeft
      ExplicitLeft = 621
    end
  end
  object RzPanel3: TRzPanel
    Left = 0
    Top = 0
    Width = 1191
    Height = 40
    Align = alTop
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 1
    VisualStyle = vsGradient
    object RzGroupBox2: TRzGroupBox
      Left = 1
      Top = 1
      Width = 640
      Height = 38
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alLeft
      Caption = #1058#1080#1087' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 0
      VisualStyle = vsGradient
      object cbVidRasp: TRzComboBox
        Left = 2
        Top = 15
        Width = 606
        Height = 21
        Align = alClient
        Style = csDropDownList
        Ctl3D = False
        FlatButtons = True
        FrameVisible = True
        ParentCtl3D = False
        TabOrder = 0
        TabStop = False
        OnChange = cbVidRaspChange
        OnDropDown = cbVidRaspDropDown
      end
      object btAddProduce: TRzBitBtn
        Left = 608
        Top = 15
        Width = 30
        Height = 21
        Hint = #1044#1086#1073#1072#1074#1080#1090#1100' '#1087#1088#1086#1076#1091#1082#1090
        FrameColor = 7617536
        Align = alRight
        Caption = 'Insert Record'
        Color = 15791348
        HotTrack = True
        ParentShowHint = False
        ShowHint = True
        TabOrder = 1
        Visible = False
        OnClick = btAddProduceClick
        DisabledIndex = 97
        ImageIndex = 7
        Images = ImageList1
      end
    end
    object RzGroupBox1: TRzGroupBox
      Left = 641
      Top = 1
      Width = 250
      Height = 38
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alLeft
      Caption = #1057#1086#1089#1090#1086#1103#1085#1080#1077
      Enabled = False
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 1
      Visible = False
      VisualStyle = vsGradient
      object cbNameStatus: TRzComboBox
        Left = 2
        Top = 15
        Width = 246
        Height = 21
        Align = alClient
        Ctl3D = False
        Enabled = False
        FlatButtons = True
        FrameVisible = True
        ParentCtl3D = False
        TabOrder = 0
        TabStop = False
      end
    end
    object RzGroupBox3: TRzGroupBox
      Left = 891
      Top = 1
      Width = 273
      Height = 38
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alLeft
      Caption = #1060#1048#1054' '#1073#1088#1077#1085#1076'-'#1084#1077#1085#1077#1076#1078#1077#1088#1072':'
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 2
      Visible = False
      VisualStyle = vsGradient
      object cbBMName: TRzComboBox
        Left = 2
        Top = 15
        Width = 248
        Height = 21
        Align = alClient
        Ctl3D = False
        FlatButtons = True
        FrameVisible = True
        ParentCtl3D = False
        TabOrder = 0
      end
      object btAddEmplUserBM: TRzButton
        Left = 250
        Top = 15
        Width = 21
        Height = 21
        FrameColor = 7617536
        Align = alRight
        Caption = '...'
        Color = 15791348
        HotTrack = True
        TabOrder = 1
        OnClick = btAddEmplUserBMClick
      end
    end
    object RzGroupBox6: TRzGroupBox
      Left = 1080
      Top = 1
      Width = 110
      Height = 38
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alRight
      Alignment = taCenter
      Caption = 'Id '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
      Enabled = False
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 3
      VisualStyle = vsGradient
      DesignSize = (
        110
        38)
      object Edit1: TEdit
        Left = 5
        Top = 15
        Width = 100
        Height = 21
        Anchors = [akLeft, akTop, akRight, akBottom]
        Color = clBtnFace
        ReadOnly = True
        TabOrder = 0
      end
    end
  end
  object RzPanel20: TRzPanel
    Left = 0
    Top = 40
    Width = 1191
    Height = 88
    Align = alTop
    BorderSides = []
    Color = 16579315
    TabOrder = 2
    object RzLabel1: TRzLabel
      Left = 0
      Top = 0
      Width = 1191
      Height = 14
      Align = alTop
      Caption = #1050#1086#1084#1084#1077#1085#1090#1072#1088#1080#1080
      Color = 16579315
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentColor = False
      ParentFont = False
      ExplicitWidth = 77
    end
    object reComment: TcxMemo
      AlignWithMargins = True
      Left = 1
      Top = 15
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alTop
      ParentFont = False
      Properties.Alignment = taLeftJustify
      Properties.ScrollBars = ssVertical
      Style.BorderStyle = ebsNone
      Style.Font.Charset = RUSSIAN_CHARSET
      Style.Font.Color = clWindowText
      Style.Font.Height = -15
      Style.Font.Name = 'Times New Roman'
      Style.Font.Style = []
      Style.IsFontAssigned = True
      TabOrder = 0
      OnExit = reCommentExit
      Height = 49
      Width = 1189
    end
    object RzPanel21: TRzPanel
      Left = 0
      Top = 65
      Width = 1054
      Height = 23
      Align = alClient
      BorderSides = []
      Color = 16579315
      TabOrder = 1
      object RzLabel2: TRzLabel
        Left = 0
        Top = 0
        Width = 312
        Height = 23
        Align = alLeft
        Caption = #1044#1083#1103' '#1087#1088#1086#1076#1091#1082#1090#1086#1074' '#1085#1077#1086#1073#1093#1086#1076#1080#1084#1086' '#1087#1088#1080#1082#1088#1077#1087#1080#1090#1100' '#1092#1072#1081#1083' EXCEL '
        Color = 16579315
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentColor = False
        ParentFont = False
        ExplicitHeight = 16
      end
      object edPathAddFiles: TRzEdit
        Left = 312
        Top = 0
        Width = 742
        Height = 23
        Text = ''
        Align = alClient
        Color = clWhite
        FrameHotTrack = True
        FrameVisible = True
        TabOnEnter = True
        TabOrder = 0
        Visible = False
        ExplicitHeight = 21
      end
    end
    object RzBitBtn3: TRzBitBtn
      Left = 1054
      Top = 65
      Width = 137
      Height = 23
      FrameColor = 7617536
      Align = alRight
      Caption = #1055#1088#1080#1082#1088#1077#1087#1080#1090#1100' '#1092#1072#1081#1083#1099
      Color = 15791348
      HotTrack = True
      TabOrder = 2
      OnClick = RzButton3Click
      DisabledIndex = 4
      ImageIndex = 3
      Images = ImageList1
    end
  end
  object RzPageControl1: TRzPageControl
    Left = 0
    Top = 128
    Width = 1191
    Height = 477
    Hint = ''
    ActivePage = TabSheet1
    ActivePageDefault = TabSheet1
    Align = alClient
    BackgroundColor = 16579315
    ButtonColor = 16579315
    Color = 15329769
    ParentBackgroundColor = False
    ParentColor = False
    TabIndex = 0
    TabOrder = 3
    FixedDimension = 19
    object TabSheet1: TRzTabSheet
      Color = 15329769
      Caption = #1056#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1077
      ExplicitLeft = 0
      ExplicitTop = 0
      ExplicitWidth = 0
      ExplicitHeight = 0
      object rzPanel: TRzPanel
        Left = 0
        Top = 0
        Width = 1187
        Height = 454
        Align = alClient
        BorderInner = fsFlat
        BorderOuter = fsNone
        Color = 16579315
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Times New Roman'
        Font.Style = []
        GradientColorStyle = gcsCustom
        GradientColorStart = 16579315
        GradientColorStop = 16579315
        ParentFont = False
        TabOrder = 0
        VisualStyle = vsGradient
        object RzPanel4: TRzPanel
          Left = 1
          Top = 244
          Width = 1185
          Height = 181
          Align = alClient
          BorderSides = []
          Color = 16579315
          Ctl3D = True
          ParentCtl3D = False
          TabOrder = 0
          object reContentRTF: TcxMemo
            AlignWithMargins = True
            Left = 10
            Top = 0
            Margins.Left = 10
            Margins.Top = 0
            Align = alClient
            ParentFont = False
            Properties.ScrollBars = ssVertical
            Style.BorderStyle = ebsNone
            Style.Font.Charset = RUSSIAN_CHARSET
            Style.Font.Color = clWindowText
            Style.Font.Height = -19
            Style.Font.Name = 'Times New Roman'
            Style.Font.Style = []
            Style.IsFontAssigned = True
            TabOrder = 0
            OnExit = reContentRTFExit
            Height = 178
            Width = 1151
          end
          object RzPanel7: TRzPanel
            Left = 1164
            Top = 0
            Width = 21
            Height = 181
            Align = alRight
            BorderSides = []
            Color = 16579315
            TabOrder = 1
            object RzButton2: TRzButton
              Left = 0
              Top = 0
              Width = 21
              Height = 181
              FrameColor = 7617536
              Align = alClient
              Caption = '...'
              Color = 15791348
              HotTrack = True
              TabOrder = 0
              OnClick = RzButton2Click
            end
          end
        end
        object RzPanel5: TRzPanel
          Left = 1
          Top = 425
          Width = 1185
          Height = 28
          Align = alBottom
          BorderSides = []
          Color = 16579315
          TabOrder = 1
          object cbEmplDol: TRzComboBox
            AlignWithMargins = True
            Left = 10
            Top = 0
            Width = 870
            Height = 27
            Hint = #1044#1086#1083#1078#1085#1086#1089#1090#1100
            Margins.Left = 10
            Margins.Top = 0
            Align = alClient
            Style = csDropDownList
            Ctl3D = False
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Times New Roman'
            Font.Style = [fsBold]
            FlatButtons = True
            FrameHotTrack = True
            FrameHotStyle = fsFlat
            FrameStyle = fsNone
            FrameVisible = True
            ParentCtl3D = False
            ParentFont = False
            ParentShowHint = False
            ShowHint = True
            TabOrder = 0
            OnDropDown = cbEmplDolDropDown
          end
          object cbEmplUsers: TRzComboBox
            AlignWithMargins = True
            Left = 886
            Top = 0
            Width = 275
            Height = 27
            Hint = #1060#1048#1054' '#1091#1090#1074#1077#1088#1078#1076#1072#1102#1097#1077#1075#1086' '#1083#1080#1094#1072
            Margins.Top = 0
            Align = alRight
            Style = csDropDownList
            Ctl3D = False
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -16
            Font.Name = 'Times New Roman'
            Font.Style = [fsBold]
            FlatButtons = True
            FrameHotTrack = True
            FrameHotStyle = fsFlat
            FrameStyle = fsNone
            FrameVisible = True
            ParentCtl3D = False
            ParentFont = False
            ParentShowHint = False
            ReadOnlyColor = clWindow
            ShowHint = True
            TabOrder = 1
            OnChange = cbEmplUsersChange
          end
          object RzPanel18: TRzPanel
            Left = 1164
            Top = 0
            Width = 21
            Height = 28
            Align = alRight
            BorderSides = []
            Color = 16579315
            TabOrder = 2
            object btAddEmplUser: TRzButton
              Left = 0
              Top = 0
              Width = 21
              Height = 28
              FrameColor = 7617536
              Align = alClient
              Caption = '...'
              Color = 15791348
              HotTrack = True
              TabOrder = 0
              OnClick = btAddEmplUserClick
            end
          end
        end
        object RzPanel2: TRzPanel
          Left = 1
          Top = 1
          Width = 1185
          Height = 243
          Align = alTop
          BorderSides = []
          Color = 5111121
          Ctl3D = True
          ParentCtl3D = False
          TabOrder = 2
          object RzPanel9: TRzPanel
            Left = 0
            Top = 0
            Width = 1185
            Height = 95
            Align = alTop
            BorderSides = []
            Color = 16579315
            TabOrder = 0
            object RzLabel4: TRzLabel
              Left = 255
              Top = 71
              Width = 16
              Height = 19
              Caption = #8470
              Color = 16579315
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clWindowText
              Font.Height = -16
              Font.Name = 'Times New Roman'
              Font.Style = [fsBold]
              ParentColor = False
              ParentFont = False
            end
            object edDateRasp: TRzRichEdit
              Left = 14
              Top = 64
              Width = 219
              Height = 30
              Hint = #1044#1072#1090#1072' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103' '
              Color = clWhite
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clWindowText
              Font.Height = -16
              Font.Name = 'Times New Roman'
              Font.Style = [fsBold]
              MaxLength = 23
              ParentFont = False
              ParentShowHint = False
              ReadOnly = True
              ShowHint = True
              TabOrder = 0
              Zoom = 100
              OnExit = edDateRaspExit
              FrameHotStyle = fsFlat
              FrameHotTrack = True
              FrameStyle = fsNone
              FrameVisible = True
              ReadOnlyColor = clWhite
            end
            object dtDateRasp: TRzDateTimeEdit
              Left = 234
              Top = 64
              Width = 17
              Height = 27
              Hint = #1044#1072#1090#1072' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
              CaptionTodayBtn = #1089#1077#1075#1086#1076#1085#1103
              CaptionClearBtn = #1086#1095#1080#1089#1090#1080#1090#1100
              Date = 40262.000000000000000000
              MinDate = 2.000000000000000000
              EditType = etDate
              Format = 'dddddd'
              FlatButtons = True
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clWindowText
              Font.Height = -16
              Font.Name = 'Times New Roman'
              Font.Style = [fsBold]
              FrameHotTrack = True
              FrameHotStyle = fsFlat
              FrameStyle = fsNone
              FrameVisible = True
              ParentFont = False
              ParentShowHint = False
              ShowHint = True
              TabOrder = 1
              OnCloseUp = dtDateRaspCloseUp
            end
            object edNumbRaspName: TRzRichEdit
              Left = 272
              Top = 66
              Width = 243
              Height = 30
              Hint = #1053#1086#1084#1077#1088' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103' '
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clWindowText
              Font.Height = -19
              Font.Name = 'Times New Roman'
              Font.Style = [fsBold]
              MaxLength = 24
              ParentFont = False
              ParentShowHint = False
              ShowHint = True
              TabOrder = 2
              Zoom = 100
              OnKeyPress = edNumbRaspNameKeyPress
              FrameHotStyle = fsFlat
              FrameHotTrack = True
              FrameStyle = fsNone
              FrameVisible = True
            end
            object cbCity: TRzComboBox
              Left = 272
              Top = 35
              Width = 243
              Height = 29
              Hint = #1075#1086#1088#1086#1076
              Style = csDropDownList
              Ctl3D = False
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clWindowText
              Font.Height = -19
              Font.Name = 'Times New Roman'
              Font.Style = []
              FlatButtons = True
              FrameHotTrack = True
              FrameHotStyle = fsFlat
              FrameStyle = fsNone
              FrameVisible = True
              ParentCtl3D = False
              ParentFont = False
              ParentShowHint = False
              ShowHint = True
              TabOrder = 3
              OnExit = cbTypeRaspExit
              Items.Strings = (
                #1075'.'#1084#1086#1089#1082#1074#1072
                #1075'.'#1090#1072#1075#1072#1085#1088#1086#1075)
            end
            object cbTypeRasp: TRzComboBox
              AlignWithMargins = True
              Left = 272
              Top = 3
              Width = 642
              Height = 30
              Hint = #1042#1080#1076' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
              Align = alClient
              Style = csDropDownList
              CharCase = ecUpperCase
              Ctl3D = False
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clWindowText
              Font.Height = -19
              Font.Name = 'Times New Roman'
              Font.Style = [fsBold]
              FlatButtons = True
              FrameHotStyle = fsFlat
              FrameStyle = fsNone
              FrameVisible = True
              ParentCtl3D = False
              ParentFont = False
              ParentShowHint = False
              ShowHint = True
              TabOrder = 4
              Text = #1056' '#1040' '#1057' '#1055' '#1054' '#1056' '#1071' '#1046' '#1045' '#1053' '#1048' '#1045
              OnExit = cbTypeRaspExit
              Items.Strings = (
                #1056' '#1040' '#1057' '#1055' '#1054' '#1056' '#1071' '#1046' '#1045' '#1053' '#1048' '#1045
                #1055' '#1056' '#1048' '#1050' '#1040' '#1047
                #1055' '#1056' '#1054' '#1045' '#1050' '#1058'  '#1055' '#1056' '#1048' '#1050' '#1040' '#1047' '#1040)
              ItemIndex = 0
            end
            object cxGrid1: TcxGrid
              AlignWithMargins = True
              Left = 919
              Top = 2
              Width = 264
              Height = 91
              Margins.Left = 2
              Margins.Top = 2
              Margins.Right = 2
              Margins.Bottom = 2
              Align = alRight
              BevelInner = bvNone
              BevelOuter = bvNone
              BorderStyle = cxcbsNone
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clWindowText
              Font.Height = -13
              Font.Name = 'Tahoma'
              Font.Style = []
              ParentFont = False
              TabOrder = 5
              LookAndFeel.Kind = lfStandard
              LookAndFeel.NativeStyle = False
              object TcxGridDBTableView
                Navigator.Buttons.CustomButtons = <>
                DataController.DetailKeyFieldNames = 'Idn'
                DataController.Filter.AutoDataSetFilter = True
                DataController.Summary.DefaultGroupSummaryItems = <
                  item
                    Kind = skCount
                    Position = spFooter
                  end
                  item
                    Kind = skCount
                    Position = spFooter
                  end
                  item
                    Kind = skCount
                    Position = spFooter
                  end
                  item
                    Kind = skCount
                    Position = spFooter
                  end
                  item
                    Kind = skCount
                    Position = spFooter
                  end
                  item
                    Kind = skCount
                    Position = spFooter
                  end
                  item
                    Format = '0'
                    Kind = skSum
                    Position = spFooter
                  end
                  item
                    Format = ',0.0000%;-,0.0000%'
                    Kind = skSum
                    Position = spFooter
                  end
                  item
                    Format = '0'
                    Kind = skSum
                    Position = spFooter
                    Column = cxGridDBColumn23
                  end
                  item
                    Format = ',0.0000%;-,0.0000%'
                    Kind = skSum
                    Position = spFooter
                    Column = cxGridDBColumn24
                  end>
                DataController.Summary.FooterSummaryItems = <
                  item
                    Kind = skCount
                  end
                  item
                    Kind = skCount
                  end
                  item
                    Kind = skCount
                  end
                  item
                    Kind = skCount
                  end
                  item
                    Kind = skCount
                  end
                  item
                    Kind = skCount
                  end
                  item
                    Format = '0'
                    Kind = skSum
                  end
                  item
                    Format = ',0.0000%;-,0.0000%'
                    Kind = skSum
                  end
                  item
                    Format = '0'
                    Kind = skSum
                    Column = cxGridDBColumn23
                  end
                  item
                    Format = ',0.0000%;-,0.0000%'
                    Kind = skSum
                    Column = cxGridDBColumn24
                  end>
                DataController.Summary.SummaryGroups = <>
                OptionsBehavior.AlwaysShowEditor = True
                OptionsCustomize.ColumnsQuickCustomization = True
                OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
                OptionsData.DeletingConfirmation = False
                OptionsData.Inserting = False
                OptionsView.CellEndEllipsis = True
                OptionsView.ShowEditButtons = gsebAlways
                OptionsView.CellAutoHeight = True
                OptionsView.ColumnAutoWidth = True
                OptionsView.Footer = True
                OptionsView.GroupFooters = gfAlwaysVisible
                object cxGridDBColumn17: TcxGridDBColumn
                  DataBinding.FieldName = 'idn'
                  Visible = False
                end
                object cxGridDBColumn18: TcxGridDBColumn
                  DataBinding.FieldName = 'idnp'
                  Visible = False
                end
                object cxGridDBColumn19: TcxGridDBColumn
                  DataBinding.FieldName = 'CallActionName'
                  Visible = False
                  Width = 445
                end
                object cxGridDBColumn20: TcxGridDBColumn
                  DataBinding.FieldName = 'PNameR'
                  Visible = False
                  Width = 299
                end
                object cxGridDBColumn21: TcxGridDBColumn
                  DataBinding.FieldName = 'NameR'
                  Width = 316
                end
                object cxGridDBColumn22: TcxGridDBColumn
                  DataBinding.FieldName = 'auFamIO'
                  Width = 102
                end
                object cxGridDBColumn23: TcxGridDBColumn
                  DataBinding.FieldName = 'ClCol'
                  Width = 369
                end
                object cxGridDBColumn24: TcxGridDBColumn
                  DataBinding.FieldName = 'ClPr'
                  PropertiesClassName = 'TcxCurrencyEditProperties'
                  Properties.DisplayFormat = ',0.0000%;-,0.0000%'
                  Width = 362
                end
              end
              object cxGridDBBandedTableView2: TcxGridDBBandedTableView
                Navigator.Buttons.CustomButtons = <>
                Navigator.Buttons.PriorPage.Enabled = False
                Navigator.Buttons.PriorPage.Visible = False
                Navigator.Buttons.NextPage.Enabled = False
                Navigator.Buttons.NextPage.Visible = False
                Navigator.Buttons.Refresh.Enabled = False
                Navigator.Buttons.Refresh.Visible = False
                Navigator.Buttons.SaveBookmark.Enabled = False
                Navigator.Buttons.SaveBookmark.Visible = False
                Navigator.Buttons.GotoBookmark.Enabled = False
                Navigator.Buttons.GotoBookmark.Visible = False
                Navigator.Buttons.Filter.Enabled = False
                Navigator.Buttons.Filter.Visible = False
                DataController.DataSource = DSMailPathAddFiles
                DataController.Summary.DefaultGroupSummaryItems = <>
                DataController.Summary.FooterSummaryItems = <>
                DataController.Summary.SummaryGroups = <>
                OptionsCustomize.ColumnMoving = False
                OptionsCustomize.ColumnsQuickCustomization = True
                OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
                OptionsCustomize.BandMoving = False
                OptionsView.NavigatorOffset = 30
                OptionsView.CellAutoHeight = True
                OptionsView.ColumnAutoWidth = True
                OptionsView.GroupByBox = False
                OptionsView.BandHeaders = False
                Bands = <
                  item
                    Caption = #1057#1087#1080#1089#1086#1082' '#1087#1088#1080#1082#1088#1077#1087#1083#1077#1085#1085#1099#1093' '#1092#1072#1081#1083#1086#1074
                  end>
                object cxGridDBBandedTableView2NameFile: TcxGridDBBandedColumn
                  Caption = #1055#1088#1080#1082#1088#1077#1087#1083#1077#1085#1085#1099#1077' '#1092#1072#1081#1083#1099
                  DataBinding.FieldName = 'NameFile'
                  Position.BandIndex = 0
                  Position.ColIndex = 0
                  Position.RowIndex = 0
                end
              end
              object cxGridLevel3: TcxGridLevel
                Caption = #1053#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1085#1099#1077' '#1077#1076#1077#1085#1080#1094#1099
                GridView = cxGridDBBandedTableView2
              end
            end
            object RzComboBox1: TRzComboBox
              AlignWithMargins = True
              Left = 3
              Top = 3
              Width = 263
              Height = 30
              Hint = #1075#1086#1088#1086#1076
              Align = alLeft
              Style = csDropDownList
              Ctl3D = False
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clWindowText
              Font.Height = -19
              Font.Name = 'Times New Roman'
              Font.Style = [fsBold]
              FlatButtons = True
              FrameHotTrack = True
              FrameHotStyle = fsFlat
              FrameStyle = fsNone
              FrameVisible = True
              ParentCtl3D = False
              ParentFont = False
              ParentShowHint = False
              ShowHint = True
              TabOrder = 6
              OnChange = RzComboBox1Change
              Items.Strings = (
                #1075'.'#1084#1086#1089#1082#1074#1072
                #1075'.'#1090#1072#1075#1072#1085#1088#1086#1075)
            end
          end
          object RzPanel11: TRzPanel
            Left = 0
            Top = 95
            Width = 1185
            Height = 68
            Margins.Top = 0
            Align = alTop
            BorderOuter = fsNone
            BorderSides = []
            Color = 16579315
            TabOrder = 1
            object reRaspName: TcxMemo
              AlignWithMargins = True
              Left = 10
              Top = 0
              Margins.Left = 10
              Margins.Top = 0
              Align = alClient
              ParentFont = False
              Properties.Alignment = taCenter
              Properties.ScrollBars = ssVertical
              Style.BorderStyle = ebsNone
              Style.Font.Charset = RUSSIAN_CHARSET
              Style.Font.Color = clWindowText
              Style.Font.Height = -15
              Style.Font.Name = 'Times New Roman'
              Style.Font.Style = []
              Style.IsFontAssigned = True
              TabOrder = 0
              OnExit = reRaspNameExit
              Height = 65
              Width = 1151
            end
            object RzPanel8: TRzPanel
              Left = 1164
              Top = 0
              Width = 21
              Height = 68
              Align = alRight
              BorderSides = []
              Color = 16579315
              TabOrder = 1
              object btAddTextsRTF: TRzButton
                Left = 0
                Top = 0
                Width = 21
                Height = 68
                FrameColor = 7617536
                Align = alClient
                Caption = '...'
                Color = 15791348
                HotTrack = True
                TabOrder = 0
                OnClick = btAddTextsRTFClick
              end
            end
          end
          object RzPanel13: TRzPanel
            Left = 0
            Top = 163
            Width = 1185
            Height = 49
            Align = alTop
            BorderOuter = fsNone
            BorderSides = []
            Color = 16579315
            TabOrder = 2
            object reContentTargetRTF: TcxMemo
              AlignWithMargins = True
              Left = 10
              Top = 0
              Margins.Left = 10
              Margins.Top = 0
              Margins.Bottom = 0
              Align = alClient
              ParentFont = False
              Properties.Alignment = taLeftJustify
              Properties.ScrollBars = ssVertical
              Style.BorderStyle = ebsNone
              Style.Font.Charset = RUSSIAN_CHARSET
              Style.Font.Color = clWindowText
              Style.Font.Height = -19
              Style.Font.Name = 'Times New Roman'
              Style.Font.Style = []
              Style.IsFontAssigned = True
              TabOrder = 0
              OnExit = reContentTargetRTFExit
              Height = 49
              Width = 1151
            end
            object RzPanel14: TRzPanel
              Left = 1164
              Top = 0
              Width = 21
              Height = 49
              Align = alRight
              BorderSides = []
              Color = 16579315
              TabOrder = 1
              object RzButton1: TRzButton
                Left = 0
                Top = 0
                Width = 21
                Height = 49
                FrameColor = 7617536
                Align = alClient
                Caption = '...'
                Color = 15791348
                HotTrack = True
                TabOrder = 0
                OnClick = RzButton1Click
              end
            end
          end
          object RzPanel6: TRzPanel
            Left = 0
            Top = 212
            Width = 1185
            Height = 31
            Align = alClient
            BorderOuter = fsNone
            BorderSides = []
            Color = 16579315
            TabOrder = 3
            object btNameStatuser: TRzComboBox
              AlignWithMargins = True
              Left = 10
              Top = 0
              Width = 241
              Height = 30
              Hint = #1042#1080#1076' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
              Margins.Left = 10
              Margins.Top = 0
              Align = alLeft
              Style = csDropDownList
              CharCase = ecUpperCase
              Ctl3D = False
              Font.Charset = RUSSIAN_CHARSET
              Font.Color = clWindowText
              Font.Height = -19
              Font.Name = 'Times New Roman'
              Font.Style = [fsBold]
              FlatButtons = True
              FrameHotTrack = True
              FrameHotStyle = fsFlat
              FrameStyle = fsNone
              FrameVisible = True
              ParentCtl3D = False
              ParentFont = False
              ParentShowHint = False
              ReadOnlyColor = clWhite
              ShowHint = True
              TabOrder = 0
            end
          end
        end
      end
    end
    object TabSheet2: TRzTabSheet
      Color = 15329769
      Caption = #1050#1086#1084#1084#1077#1085#1090#1072#1088#1080#1080
      ExplicitLeft = 0
      ExplicitTop = 0
      ExplicitWidth = 0
      ExplicitHeight = 0
      object RzPanel22: TRzPanel
        AlignWithMargins = True
        Left = 3
        Top = 36
        Width = 1181
        Height = 418
        Margins.Top = 0
        Margins.Bottom = 0
        Align = alClient
        Color = 15329769
        TabOrder = 0
        object RzGroupBox12: TRzGroupBox
          Left = 2
          Top = 2
          Width = 1177
          Height = 42
          Align = alTop
          Color = 15329769
          GroupStyle = gsCustom
          TabOrder = 0
          object RzGroupBox4: TRzGroupBox
            AlignWithMargins = True
            Left = 5
            Top = 2
            Width = 203
            Height = 38
            Margins.Top = 0
            Margins.Bottom = 0
            Align = alLeft
            Caption = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1099#1077' '#1072#1082#1094#1080#1080' ('#1082#1088#1072#1090#1082#1086#1089#1088#1086#1095#1085#1099#1077')'
            GradientColorStyle = gcsCustom
            GradientColorStop = clSkyBlue
            GroupStyle = gsCustom
            TabOrder = 0
            Transparent = True
            object cbNameActionDiscount: TRzComboBox
              Left = 2
              Top = 15
              Width = 169
              Height = 21
              Align = alClient
              Style = csDropDownList
              Ctl3D = False
              FlatButtons = True
              FrameVisible = True
              ParentCtl3D = False
              TabOnEnter = True
              TabOrder = 0
              OnDropDown = cbNameActionDiscountDropDown
              Items.Strings = (
                #1053#1072' '#1085#1086#1074#1099#1077' '#1080#1079#1076#1072#1085#1080#1103
                #1056#1077#1090#1088#1086#1075#1088#1072#1076#1085#1072#1103' '#1087#1086#1076#1087#1080#1089#1082#1072' '#1074' '#1090'.'#1095'. '#1086#1090#1082#1072#1079#1085#1080#1082#1080
                #1057#1087#1077#1094#1080#1072#1083#1100#1085#1099#1077' '#1075#1088#1091#1087#1087#1099' '#1082#1083#1080#1077#1085#1090#1086#1074)
            end
            object btAddNameActionDiscount: TRzBitBtn
              Left = 171
              Top = 15
              Width = 30
              Height = 21
              FrameColor = 7617536
              Align = alRight
              Caption = 'Insert Record'
              Color = 15791348
              HotTrack = True
              TabOrder = 1
              Visible = False
              OnClick = btAddNameActionDiscountClick
              Glyph.Data = {
                36060000424D3606000000000000360400002800000020000000100000000100
                08000000000000020000830B0000830B00000001000000000000000000003300
                00006600000099000000CC000000FF0000000033000033330000663300009933
                0000CC330000FF33000000660000336600006666000099660000CC660000FF66
                000000990000339900006699000099990000CC990000FF99000000CC000033CC
                000066CC000099CC0000CCCC0000FFCC000000FF000033FF000066FF000099FF
                0000CCFF0000FFFF000000003300330033006600330099003300CC003300FF00
                330000333300333333006633330099333300CC333300FF333300006633003366
                33006666330099663300CC663300FF6633000099330033993300669933009999
                3300CC993300FF99330000CC330033CC330066CC330099CC3300CCCC3300FFCC
                330000FF330033FF330066FF330099FF3300CCFF3300FFFF3300000066003300
                66006600660099006600CC006600FF0066000033660033336600663366009933
                6600CC336600FF33660000666600336666006666660099666600CC666600FF66
                660000996600339966006699660099996600CC996600FF99660000CC660033CC
                660066CC660099CC6600CCCC6600FFCC660000FF660033FF660066FF660099FF
                6600CCFF6600FFFF660000009900330099006600990099009900CC009900FF00
                990000339900333399006633990099339900CC339900FF339900006699003366
                99006666990099669900CC669900FF6699000099990033999900669999009999
                9900CC999900FF99990000CC990033CC990066CC990099CC9900CCCC9900FFCC
                990000FF990033FF990066FF990099FF9900CCFF9900FFFF99000000CC003300
                CC006600CC009900CC00CC00CC00FF00CC000033CC003333CC006633CC009933
                CC00CC33CC00FF33CC000066CC003366CC006666CC009966CC00CC66CC00FF66
                CC000099CC003399CC006699CC009999CC00CC99CC00FF99CC0000CCCC0033CC
                CC0066CCCC0099CCCC00CCCCCC00FFCCCC0000FFCC0033FFCC0066FFCC0099FF
                CC00CCFFCC00FFFFCC000000FF003300FF006600FF009900FF00CC00FF00FF00
                FF000033FF003333FF006633FF009933FF00CC33FF00FF33FF000066FF003366
                FF006666FF009966FF00CC66FF00FF66FF000099FF003399FF006699FF009999
                FF00CC99FF00FF99FF0000CCFF0033CCFF0066CCFF0099CCFF00CCCCFF00FFCC
                FF0000FFFF0033FFFF0066FFFF0099FFFF00CCFFFF00FFFFFF00000080000080
                000000808000800000008000800080800000C0C0C00080808000191919004C4C
                4C00B2B2B200E5E5E500C8AC2800E0CC6600F2EABF00B59B2400D8E9EC009933
                6600D075A300ECC6D900646F710099A8AC00E2EFF10000000000000000000000
                0000000000000000000000000000000000000000000000000000000000000000
                0000000000000000000000000000000000000000000000000000E8E8E8E8E8E8
                E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                09090909E8E8E8E8E8E8E8E8E8E8E8E881818181E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E809090909
                0910100909090909E8E8E8E88181818181ACAC8181818181E8E8E8E809101010
                1010101010101009E8E8E8E881ACACACACACACACACACAC81E8E8E8E809101010
                1010101010101009E8E8E8E881ACACACACACACACACACAC81E8E8E8E809090909
                0910100909090909E8E8E8E88181818181ACAC8181818181E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09090909E8E8E8E8E8E8E8E8E8E8E8E881818181E8E8E8E8E8E8E8E8E8E8E8E8
                E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8}
              DisabledIndex = 97
              ImageIndex = 96
              NumGlyphs = 2
            end
          end
          object RzGroupBox5: TRzGroupBox
            Left = 211
            Top = 2
            Width = 855
            Height = 38
            Margins.Left = 1
            Margins.Top = 1
            Margins.Right = 1
            Margins.Bottom = 1
            Align = alClient
            Caption = #1056#1072#1079#1084#1077#1088' '#1089#1082#1080#1076#1082#1080
            GradientColorStyle = gcsCustom
            GradientColorStop = clSkyBlue
            GroupStyle = gsCustom
            TabOrder = 1
            Transparent = True
            object cbCostDiscount: TRzComboBox
              Left = 2
              Top = 15
              Width = 851
              Height = 21
              Align = alClient
              Ctl3D = False
              FlatButtons = True
              FrameVisible = True
              ParentCtl3D = False
              TabOnEnter = True
              TabOrder = 0
              OnDropDown = cbCostDiscountDropDown
            end
          end
          object RzGroupBox14: TRzGroupBox
            AlignWithMargins = True
            Left = 1069
            Top = 2
            Width = 103
            Height = 38
            Margins.Top = 0
            Margins.Bottom = 0
            Align = alRight
            Caption = #1057#1088#1086#1082#1080' '#1088#1077#1072#1083#1080#1079#1072#1094#1080#1080
            GradientColorStyle = gcsCustom
            GradientColorStop = clSkyBlue
            GroupStyle = gsCustom
            TabOrder = 2
            Transparent = True
            object dtDateRealization: TRzDateTimeEdit
              Left = 2
              Top = 15
              Width = 99
              Height = 21
              CaptionTodayBtn = #1057#1077#1075#1086#1076#1085#1103
              CaptionClearBtn = #1054#1095#1080#1089#1090#1080#1090#1100
              EditType = etDate
              Align = alClient
              FrameHotTrack = True
              FrameVisible = True
              TabOrder = 0
            end
          end
        end
        object RzSplitter2: TRzSplitter
          Left = 2
          Top = 44
          Width = 1177
          Height = 372
          Orientation = orVertical
          Position = 210
          Percent = 57
          UsePercent = True
          HotSpotVisible = True
          SplitterWidth = 7
          Align = alClient
          TabOrder = 1
          BarSize = (
            0
            210
            1177
            217)
          UpperLeftControls = (
            RzSplitter1
            RzGroupBox11)
          LowerRightControls = (
            cxGridEmplUser
            RzPanel24)
          object RzSplitter1: TRzSplitter
            Left = 0
            Top = 0
            Width = 895
            Height = 210
            Orientation = orVertical
            Position = 201
            Percent = 97
            HotSpotVisible = True
            SplitterWidth = 7
            Align = alClient
            TabOrder = 0
            BarSize = (
              0
              201
              895
              208)
            UpperLeftControls = (
              RzGroupBox10
              RzGroupBox13)
            LowerRightControls = (
              RzGroupBox8
              RzGroupBox9)
            object RzGroupBox10: TRzGroupBox
              Left = 568
              Top = 0
              Width = 327
              Height = 201
              Margins.Left = 1
              Margins.Top = 1
              Margins.Right = 1
              Margins.Bottom = 1
              Align = alRight
              Caption = #1043#1088#1091#1087#1087#1072' '#1082#1083#1080#1077#1085#1090#1086#1074', '#1091#1095#1072#1074#1089#1090#1074#1091#1102#1097#1080#1093' '#1074' '#1072#1082#1094#1080#1080
              GradientColorStyle = gcsCustom
              GradientColorStop = clSkyBlue
              GroupStyle = gsCustom
              TabOrder = 0
              Transparent = True
              object clGroupClients: TRzCheckList
                Left = 2
                Top = 15
                Width = 293
                Height = 184
                Items.Strings = (
                  #1056#1077#1076#1072#1082#1094#1080#1086#1085#1085#1099#1077
                  #1055#1086#1095#1090#1086#1074#1099#1077
                  #1074#1089#1077' '#1082#1083#1080#1077#1085#1090#1099)
                Items.ItemEnabled = (
                  True
                  True
                  True)
                Items.ItemState = (
                  0
                  0
                  0)
                Align = alClient
                FrameHotTrack = True
                FrameVisible = True
                ItemHeight = 17
                TabOrder = 0
              end
              object btAddGroupClients: TRzBitBtn
                Left = 295
                Top = 15
                Width = 30
                Height = 184
                FrameColor = 7617536
                Align = alRight
                Caption = 'Insert Record'
                Color = 15791348
                HotTrack = True
                TabOrder = 1
                Visible = False
                OnClick = btAddGroupClientsClick
                Glyph.Data = {
                  36060000424D3606000000000000360400002800000020000000100000000100
                  08000000000000020000830B0000830B00000001000000000000000000003300
                  00006600000099000000CC000000FF0000000033000033330000663300009933
                  0000CC330000FF33000000660000336600006666000099660000CC660000FF66
                  000000990000339900006699000099990000CC990000FF99000000CC000033CC
                  000066CC000099CC0000CCCC0000FFCC000000FF000033FF000066FF000099FF
                  0000CCFF0000FFFF000000003300330033006600330099003300CC003300FF00
                  330000333300333333006633330099333300CC333300FF333300006633003366
                  33006666330099663300CC663300FF6633000099330033993300669933009999
                  3300CC993300FF99330000CC330033CC330066CC330099CC3300CCCC3300FFCC
                  330000FF330033FF330066FF330099FF3300CCFF3300FFFF3300000066003300
                  66006600660099006600CC006600FF0066000033660033336600663366009933
                  6600CC336600FF33660000666600336666006666660099666600CC666600FF66
                  660000996600339966006699660099996600CC996600FF99660000CC660033CC
                  660066CC660099CC6600CCCC6600FFCC660000FF660033FF660066FF660099FF
                  6600CCFF6600FFFF660000009900330099006600990099009900CC009900FF00
                  990000339900333399006633990099339900CC339900FF339900006699003366
                  99006666990099669900CC669900FF6699000099990033999900669999009999
                  9900CC999900FF99990000CC990033CC990066CC990099CC9900CCCC9900FFCC
                  990000FF990033FF990066FF990099FF9900CCFF9900FFFF99000000CC003300
                  CC006600CC009900CC00CC00CC00FF00CC000033CC003333CC006633CC009933
                  CC00CC33CC00FF33CC000066CC003366CC006666CC009966CC00CC66CC00FF66
                  CC000099CC003399CC006699CC009999CC00CC99CC00FF99CC0000CCCC0033CC
                  CC0066CCCC0099CCCC00CCCCCC00FFCCCC0000FFCC0033FFCC0066FFCC0099FF
                  CC00CCFFCC00FFFFCC000000FF003300FF006600FF009900FF00CC00FF00FF00
                  FF000033FF003333FF006633FF009933FF00CC33FF00FF33FF000066FF003366
                  FF006666FF009966FF00CC66FF00FF66FF000099FF003399FF006699FF009999
                  FF00CC99FF00FF99FF0000CCFF0033CCFF0066CCFF0099CCFF00CCCCFF00FFCC
                  FF0000FFFF0033FFFF0066FFFF0099FFFF00CCFFFF00FFFFFF00000080000080
                  000000808000800000008000800080800000C0C0C00080808000191919004C4C
                  4C00B2B2B200E5E5E500C8AC2800E0CC6600F2EABF00B59B2400D8E9EC009933
                  6600D075A300ECC6D900646F710099A8AC00E2EFF10000000000000000000000
                  0000000000000000000000000000000000000000000000000000000000000000
                  0000000000000000000000000000000000000000000000000000E8E8E8E8E8E8
                  E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                  E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                  09090909E8E8E8E8E8E8E8E8E8E8E8E881818181E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E809090909
                  0910100909090909E8E8E8E88181818181ACAC8181818181E8E8E8E809101010
                  1010101010101009E8E8E8E881ACACACACACACACACACAC81E8E8E8E809101010
                  1010101010101009E8E8E8E881ACACACACACACACACACAC81E8E8E8E809090909
                  0910100909090909E8E8E8E88181818181ACAC8181818181E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09090909E8E8E8E8E8E8E8E8E8E8E8E881818181E8E8E8E8E8E8E8E8E8E8E8E8
                  E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                  E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8}
                DisabledIndex = 97
                ImageIndex = 96
                NumGlyphs = 2
              end
            end
            object RzGroupBox13: TRzGroupBox
              Left = 0
              Top = 0
              Width = 568
              Height = 201
              Margins.Left = 1
              Margins.Top = 1
              Margins.Right = 1
              Margins.Bottom = 1
              Align = alClient
              Caption = #1062#1077#1083#1100' '#1072#1082#1094#1080#1080
              GradientColorStyle = gcsCustom
              GradientColorStop = clSkyBlue
              GroupStyle = gsCustom
              TabOrder = 1
              Transparent = True
              object clActionPurpose: TRzCheckList
                Left = 2
                Top = 15
                Width = 534
                Height = 184
                Items.Strings = (
                  #1055#1088#1080#1074#1083#1077#1095#1077#1085#1080#1077' '#1085#1086#1074#1086#1075#1086' '#1082#1083#1080#1077#1085#1090#1072
                  #1059#1076#1077#1088#1078#1072#1085#1080#1077' '#1085#1086#1074#1086#1075#1086' '#1082#1083#1080#1077#1085#1090#1072
                  #1056#1072#1089#1096#1080#1088#1077#1085#1080#1077' '#1087#1072#1082#1077#1090#1072' '#1090#1077#1082#1091#1097#1077#1075#1086' '#1082#1083#1080#1077#1085#1090#1072)
                Items.ItemEnabled = (
                  True
                  True
                  True)
                Items.ItemState = (
                  0
                  0
                  0)
                Align = alClient
                FrameHotTrack = True
                FrameVisible = True
                ItemHeight = 17
                TabOrder = 0
              end
              object btAddActionPurpose: TRzBitBtn
                Left = 536
                Top = 15
                Width = 30
                Height = 184
                FrameColor = 7617536
                Align = alRight
                Caption = 'Insert Record'
                Color = 15791348
                HotTrack = True
                TabOrder = 1
                Visible = False
                OnClick = btAddActionPurposeClick
                Glyph.Data = {
                  36060000424D3606000000000000360400002800000020000000100000000100
                  08000000000000020000830B0000830B00000001000000000000000000003300
                  00006600000099000000CC000000FF0000000033000033330000663300009933
                  0000CC330000FF33000000660000336600006666000099660000CC660000FF66
                  000000990000339900006699000099990000CC990000FF99000000CC000033CC
                  000066CC000099CC0000CCCC0000FFCC000000FF000033FF000066FF000099FF
                  0000CCFF0000FFFF000000003300330033006600330099003300CC003300FF00
                  330000333300333333006633330099333300CC333300FF333300006633003366
                  33006666330099663300CC663300FF6633000099330033993300669933009999
                  3300CC993300FF99330000CC330033CC330066CC330099CC3300CCCC3300FFCC
                  330000FF330033FF330066FF330099FF3300CCFF3300FFFF3300000066003300
                  66006600660099006600CC006600FF0066000033660033336600663366009933
                  6600CC336600FF33660000666600336666006666660099666600CC666600FF66
                  660000996600339966006699660099996600CC996600FF99660000CC660033CC
                  660066CC660099CC6600CCCC6600FFCC660000FF660033FF660066FF660099FF
                  6600CCFF6600FFFF660000009900330099006600990099009900CC009900FF00
                  990000339900333399006633990099339900CC339900FF339900006699003366
                  99006666990099669900CC669900FF6699000099990033999900669999009999
                  9900CC999900FF99990000CC990033CC990066CC990099CC9900CCCC9900FFCC
                  990000FF990033FF990066FF990099FF9900CCFF9900FFFF99000000CC003300
                  CC006600CC009900CC00CC00CC00FF00CC000033CC003333CC006633CC009933
                  CC00CC33CC00FF33CC000066CC003366CC006666CC009966CC00CC66CC00FF66
                  CC000099CC003399CC006699CC009999CC00CC99CC00FF99CC0000CCCC0033CC
                  CC0066CCCC0099CCCC00CCCCCC00FFCCCC0000FFCC0033FFCC0066FFCC0099FF
                  CC00CCFFCC00FFFFCC000000FF003300FF006600FF009900FF00CC00FF00FF00
                  FF000033FF003333FF006633FF009933FF00CC33FF00FF33FF000066FF003366
                  FF006666FF009966FF00CC66FF00FF66FF000099FF003399FF006699FF009999
                  FF00CC99FF00FF99FF0000CCFF0033CCFF0066CCFF0099CCFF00CCCCFF00FFCC
                  FF0000FFFF0033FFFF0066FFFF0099FFFF00CCFFFF00FFFFFF00000080000080
                  000000808000800000008000800080800000C0C0C00080808000191919004C4C
                  4C00B2B2B200E5E5E500C8AC2800E0CC6600F2EABF00B59B2400D8E9EC009933
                  6600D075A300ECC6D900646F710099A8AC00E2EFF10000000000000000000000
                  0000000000000000000000000000000000000000000000000000000000000000
                  0000000000000000000000000000000000000000000000000000E8E8E8E8E8E8
                  E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                  E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                  09090909E8E8E8E8E8E8E8E8E8E8E8E881818181E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E809090909
                  0910100909090909E8E8E8E88181818181ACAC8181818181E8E8E8E809101010
                  1010101010101009E8E8E8E881ACACACACACACACACACAC81E8E8E8E809101010
                  1010101010101009E8E8E8E881ACACACACACACACACACAC81E8E8E8E809090909
                  0910100909090909E8E8E8E88181818181ACAC8181818181E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                  09090909E8E8E8E8E8E8E8E8E8E8E8E881818181E8E8E8E8E8E8E8E8E8E8E8E8
                  E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                  E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8}
                DisabledIndex = 97
                ImageIndex = 96
                NumGlyphs = 2
              end
            end
            object RzGroupBox8: TRzGroupBox
              Left = 0
              Top = 0
              Width = 355
              Height = 2
              Margins.Left = 1
              Margins.Top = 1
              Margins.Right = 1
              Margins.Bottom = 1
              Align = alLeft
              Caption = #1055#1086#1076#1093#1086#1076' '#1082' '#1087#1088#1086#1075#1085#1086#1079#1091' '#1101#1092#1092#1077#1082#1090#1080#1074#1085#1086#1089#1090#1080
              GradientColorStyle = gcsCustom
              GradientColorStop = clSkyBlue
              GroupStyle = gsCustom
              TabOrder = 0
              Transparent = True
              object mePrognozEffects: TRzMemo
                Left = 2
                Top = 15
                Width = 321
                Height = 20
                Align = alClient
                TabOrder = 0
                FrameHotTrack = True
                FrameVisible = True
              end
              object RzButton6: TRzButton
                Left = 323
                Top = 15
                Width = 30
                Height = 20
                FrameColor = 7617536
                Align = alRight
                Caption = '...'
                Color = 15791348
                HotTrack = True
                TabOrder = 1
                Visible = False
              end
            end
            object RzGroupBox9: TRzGroupBox
              Left = 355
              Top = 0
              Width = 540
              Height = 2
              Margins.Left = 1
              Margins.Top = 1
              Margins.Right = 1
              Margins.Bottom = 1
              Align = alClient
              Caption = #1059#1089#1083#1086#1074#1080#1103' '#1087#1088#1077#1076#1086#1089#1090#1072#1074#1083#1077#1085#1080#1103' '#1089#1082#1080#1076#1082#1080
              GradientColorStyle = gcsCustom
              GradientColorStop = clSkyBlue
              GroupStyle = gsCustom
              TabOrder = 1
              Transparent = True
              object meGrantingConditions: TRzMemo
                Left = 2
                Top = 15
                Width = 506
                Height = 20
                Align = alClient
                TabOrder = 0
                FrameHotTrack = True
                FrameVisible = True
              end
              object RzButton5: TRzButton
                Left = 508
                Top = 15
                Width = 30
                Height = 20
                FrameColor = 7617536
                Align = alRight
                Caption = '...'
                Color = 15791348
                HotTrack = True
                TabOrder = 1
                Visible = False
              end
            end
          end
          object RzGroupBox11: TRzGroupBox
            Left = 895
            Top = 0
            Width = 282
            Height = 210
            Margins.Left = 1
            Margins.Top = 1
            Margins.Right = 1
            Margins.Bottom = 1
            Align = alRight
            Caption = #1050#1072#1085#1072#1083' '#1087#1088#1086#1076#1074#1080#1078#1077#1085#1080#1103
            GradientColorStyle = gcsCustom
            GradientColorStop = clSkyBlue
            GroupStyle = gsCustom
            TabOrder = 1
            Transparent = True
            object clAdvancementChannel: TRzCheckList
              Left = 2
              Top = 15
              Width = 248
              Height = 193
              Items.Strings = (
                #1044#1052
                #1069#1083'. '#1088#1072#1089#1089#1099#1083#1082#1072
                #1074' '#1078#1091#1088#1085#1072#1083#1072#1093' '#1058#1053
                #1087#1077#1088#1077#1082#1088#1077#1089#1090#1085#1086' '#1074' '#1078#1091#1088#1085#1072#1083#1072#1093' '#1048#1044
                #1087#1086#1095#1090#1086#1074#1099#1077' '#1082#1072#1090#1072#1083#1086#1075#1080
                #1050#1062
                #1092#1072#1082#1089#1086#1074#1072#1103' '#1088#1072#1089#1089#1099#1083#1082#1072
                #1048#1085#1090#1077#1088#1085#1077#1090' ('#1088#1072#1079#1084#1077#1097#1077#1085#1080#1077' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1080' '#1085#1072' '#1089#1072#1081#1090#1077')'
                #1071#1085#1076#1077#1082#1089' '#1044#1080#1088#1077#1082#1090)
              Items.ItemEnabled = (
                True
                True
                True
                True
                True
                True
                True
                True
                True)
              Items.ItemState = (
                0
                0
                0
                0
                0
                0
                0
                0
                0)
              Align = alClient
              FrameHotTrack = True
              FrameVisible = True
              ItemHeight = 17
              TabOrder = 0
            end
            object btAddAdvancementChannel: TRzBitBtn
              Left = 250
              Top = 15
              Width = 30
              Height = 193
              FrameColor = 7617536
              Align = alRight
              Caption = 'Insert Record'
              Color = 15791348
              HotTrack = True
              TabOrder = 1
              Visible = False
              OnClick = btAddAdvancementChannelClick
              Glyph.Data = {
                36060000424D3606000000000000360400002800000020000000100000000100
                08000000000000020000830B0000830B00000001000000000000000000003300
                00006600000099000000CC000000FF0000000033000033330000663300009933
                0000CC330000FF33000000660000336600006666000099660000CC660000FF66
                000000990000339900006699000099990000CC990000FF99000000CC000033CC
                000066CC000099CC0000CCCC0000FFCC000000FF000033FF000066FF000099FF
                0000CCFF0000FFFF000000003300330033006600330099003300CC003300FF00
                330000333300333333006633330099333300CC333300FF333300006633003366
                33006666330099663300CC663300FF6633000099330033993300669933009999
                3300CC993300FF99330000CC330033CC330066CC330099CC3300CCCC3300FFCC
                330000FF330033FF330066FF330099FF3300CCFF3300FFFF3300000066003300
                66006600660099006600CC006600FF0066000033660033336600663366009933
                6600CC336600FF33660000666600336666006666660099666600CC666600FF66
                660000996600339966006699660099996600CC996600FF99660000CC660033CC
                660066CC660099CC6600CCCC6600FFCC660000FF660033FF660066FF660099FF
                6600CCFF6600FFFF660000009900330099006600990099009900CC009900FF00
                990000339900333399006633990099339900CC339900FF339900006699003366
                99006666990099669900CC669900FF6699000099990033999900669999009999
                9900CC999900FF99990000CC990033CC990066CC990099CC9900CCCC9900FFCC
                990000FF990033FF990066FF990099FF9900CCFF9900FFFF99000000CC003300
                CC006600CC009900CC00CC00CC00FF00CC000033CC003333CC006633CC009933
                CC00CC33CC00FF33CC000066CC003366CC006666CC009966CC00CC66CC00FF66
                CC000099CC003399CC006699CC009999CC00CC99CC00FF99CC0000CCCC0033CC
                CC0066CCCC0099CCCC00CCCCCC00FFCCCC0000FFCC0033FFCC0066FFCC0099FF
                CC00CCFFCC00FFFFCC000000FF003300FF006600FF009900FF00CC00FF00FF00
                FF000033FF003333FF006633FF009933FF00CC33FF00FF33FF000066FF003366
                FF006666FF009966FF00CC66FF00FF66FF000099FF003399FF006699FF009999
                FF00CC99FF00FF99FF0000CCFF0033CCFF0066CCFF0099CCFF00CCCCFF00FFCC
                FF0000FFFF0033FFFF0066FFFF0099FFFF00CCFFFF00FFFFFF00000080000080
                000000808000800000008000800080800000C0C0C00080808000191919004C4C
                4C00B2B2B200E5E5E500C8AC2800E0CC6600F2EABF00B59B2400D8E9EC009933
                6600D075A300ECC6D900646F710099A8AC00E2EFF10000000000000000000000
                0000000000000000000000000000000000000000000000000000000000000000
                0000000000000000000000000000000000000000000000000000E8E8E8E8E8E8
                E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                09090909E8E8E8E8E8E8E8E8E8E8E8E881818181E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E809090909
                0910100909090909E8E8E8E88181818181ACAC8181818181E8E8E8E809101010
                1010101010101009E8E8E8E881ACACACACACACACACACAC81E8E8E8E809101010
                1010101010101009E8E8E8E881ACACACACACACACACACAC81E8E8E8E809090909
                0910100909090909E8E8E8E88181818181ACAC8181818181E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09101009E8E8E8E8E8E8E8E8E8E8E8E881ACAC81E8E8E8E8E8E8E8E8E8E8E8E8
                09090909E8E8E8E8E8E8E8E8E8E8E8E881818181E8E8E8E8E8E8E8E8E8E8E8E8
                E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8
                E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8}
              DisabledIndex = 97
              ImageIndex = 96
              NumGlyphs = 2
            end
          end
          object cxGridEmplUser: TcxGrid
            Left = 0
            Top = 0
            Width = 1177
            Height = 136
            Margins.Left = 2
            Margins.Top = 2
            Margins.Right = 2
            Margins.Bottom = 2
            Align = alClient
            BevelInner = bvNone
            BevelOuter = bvNone
            BorderStyle = cxcbsNone
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = []
            ParentFont = False
            TabOrder = 0
            Visible = False
            LookAndFeel.Kind = lfStandard
            LookAndFeel.NativeStyle = False
            object TcxGridDBTableView
              Navigator.Buttons.CustomButtons = <>
              DataController.DetailKeyFieldNames = 'Idn'
              DataController.Filter.AutoDataSetFilter = True
              DataController.Summary.DefaultGroupSummaryItems = <
                item
                  Kind = skCount
                  Position = spFooter
                end
                item
                  Kind = skCount
                  Position = spFooter
                end
                item
                  Kind = skCount
                  Position = spFooter
                end
                item
                  Kind = skCount
                  Position = spFooter
                end
                item
                  Kind = skCount
                  Position = spFooter
                end
                item
                  Kind = skCount
                  Position = spFooter
                end
                item
                  Format = '0'
                  Kind = skSum
                  Position = spFooter
                end
                item
                  Format = ',0.0000%;-,0.0000%'
                  Kind = skSum
                  Position = spFooter
                end
                item
                  Format = '0'
                  Kind = skSum
                  Position = spFooter
                  Column = cxGridDBColumn7
                end
                item
                  Format = ',0.0000%;-,0.0000%'
                  Kind = skSum
                  Position = spFooter
                  Column = cxGridDBColumn8
                end>
              DataController.Summary.FooterSummaryItems = <
                item
                  Kind = skCount
                end
                item
                  Kind = skCount
                end
                item
                  Kind = skCount
                end
                item
                  Kind = skCount
                end
                item
                  Kind = skCount
                end
                item
                  Kind = skCount
                end
                item
                  Format = '0'
                  Kind = skSum
                end
                item
                  Format = ',0.0000%;-,0.0000%'
                  Kind = skSum
                end
                item
                  Format = '0'
                  Kind = skSum
                  Column = cxGridDBColumn7
                end
                item
                  Format = ',0.0000%;-,0.0000%'
                  Kind = skSum
                  Column = cxGridDBColumn8
                end>
              DataController.Summary.SummaryGroups = <>
              OptionsBehavior.AlwaysShowEditor = True
              OptionsCustomize.ColumnsQuickCustomization = True
              OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
              OptionsData.DeletingConfirmation = False
              OptionsData.Inserting = False
              OptionsView.CellEndEllipsis = True
              OptionsView.ShowEditButtons = gsebAlways
              OptionsView.CellAutoHeight = True
              OptionsView.ColumnAutoWidth = True
              OptionsView.Footer = True
              OptionsView.GroupFooters = gfAlwaysVisible
              object cxGridDBColumn1: TcxGridDBColumn
                DataBinding.FieldName = 'idn'
                Visible = False
              end
              object cxGridDBColumn2: TcxGridDBColumn
                DataBinding.FieldName = 'idnp'
                Visible = False
              end
              object cxGridDBColumn3: TcxGridDBColumn
                DataBinding.FieldName = 'CallActionName'
                Visible = False
                Width = 445
              end
              object cxGridDBColumn4: TcxGridDBColumn
                DataBinding.FieldName = 'PNameR'
                Visible = False
                Width = 299
              end
              object cxGridDBColumn5: TcxGridDBColumn
                DataBinding.FieldName = 'NameR'
                Width = 316
              end
              object cxGridDBColumn6: TcxGridDBColumn
                DataBinding.FieldName = 'auFamIO'
                Width = 102
              end
              object cxGridDBColumn7: TcxGridDBColumn
                DataBinding.FieldName = 'ClCol'
                Width = 369
              end
              object cxGridDBColumn8: TcxGridDBColumn
                DataBinding.FieldName = 'ClPr'
                PropertiesClassName = 'TcxCurrencyEditProperties'
                Properties.DisplayFormat = ',0.0000%;-,0.0000%'
                Width = 362
              end
            end
            object cxGridTableViewEmplUser: TcxGridDBBandedTableView
              Navigator.Buttons.CustomButtons = <>
              Navigator.Buttons.PriorPage.Enabled = False
              Navigator.Buttons.PriorPage.Visible = False
              Navigator.Buttons.NextPage.Enabled = False
              Navigator.Buttons.NextPage.Visible = False
              Navigator.Buttons.Refresh.Enabled = False
              Navigator.Buttons.Refresh.Visible = False
              Navigator.Buttons.SaveBookmark.Enabled = False
              Navigator.Buttons.SaveBookmark.Visible = False
              Navigator.Buttons.GotoBookmark.Enabled = False
              Navigator.Buttons.GotoBookmark.Visible = False
              Navigator.Buttons.Filter.Enabled = False
              Navigator.Buttons.Filter.Visible = False
              OnEditKeyDown = cxGridTableViewEmplUserEditKeyDown
              DataController.DataSource = DSPZ
              DataController.DetailKeyFieldNames = 'Idn'
              DataController.Summary.DefaultGroupSummaryItems = <
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Position = spFooter
                  Column = cxGridTableViewEmplUserColumn7
                end
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Position = spFooter
                  Column = cxGridTableViewEmplUserColumn6
                end
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Position = spFooter
                  Column = cxGridTableViewEmplUserColumn5
                end
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Position = spFooter
                  Column = cxGridTableViewEmplUserColumn4
                end
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Position = spFooter
                  Column = cxGridTableViewEmplUserColumn3
                end
                item
                  Kind = skSum
                  Position = spFooter
                  Column = cxGridTableViewEmplUserColumn2
                end>
              DataController.Summary.FooterSummaryItems = <
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Column = cxGridTableViewEmplUserColumn7
                end
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Column = cxGridTableViewEmplUserColumn6
                end
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Column = cxGridTableViewEmplUserColumn5
                end
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Column = cxGridTableViewEmplUserColumn4
                end
                item
                  Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
                  Kind = skSum
                  Column = cxGridTableViewEmplUserColumn3
                end
                item
                  Kind = skSum
                  Column = cxGridTableViewEmplUserColumn2
                end>
              DataController.Summary.SummaryGroups = <>
              OptionsCustomize.ColumnMoving = False
              OptionsCustomize.ColumnsQuickCustomization = True
              OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
              OptionsCustomize.BandMoving = False
              OptionsView.NavigatorOffset = 30
              OptionsView.CellAutoHeight = True
              OptionsView.ColumnAutoWidth = True
              OptionsView.Footer = True
              OptionsView.GroupByBox = False
              OptionsView.HeaderAutoHeight = True
              Styles.Inactive = cxStyle1
              Styles.Footer = cxStyle1
              Styles.Header = cxStyle1
              Styles.BandHeader = cxStyle1
              Bands = <
                item
                  Caption = #1056#1072#1089#1095#1077#1090' '#1087#1088#1086#1075#1085#1086#1079#1080#1088#1091#1077#1084#1099#1093' '#1079#1072#1090#1088#1072#1090
                  HeaderAlignmentHorz = taLeftJustify
                  Width = 896
                end>
              object cxGridTableViewEmplUserColumn1: TcxGridDBBandedColumn
                Caption = #1055#1088#1086#1076#1091#1082#1090' ('#1091#1089#1083#1091#1075#1072')'
                DataBinding.FieldName = 'Produce'
                PropertiesClassName = 'TcxButtonEditProperties'
                Properties.Buttons = <
                  item
                    Default = True
                    Kind = bkEllipsis
                  end>
                Properties.ReadOnly = True
                Properties.OnButtonClick = cxGridTableViewEmplUserColumn1PropertiesButtonClick
                HeaderAlignmentHorz = taCenter
                Width = 198
                Position.BandIndex = 0
                Position.ColIndex = 0
                Position.RowIndex = 0
              end
              object cxGridTableViewEmplUserColumn2: TcxGridDBBandedColumn
                Caption = #1055#1088#1086#1075#1085#1079#1080#1088#1091#1077#1084#1099#1081' '#1086#1090#1082#1083#1080#1082'. '#1077#1076'.'
                DataBinding.FieldName = 'PrognozOtklik'
                HeaderAlignmentHorz = taCenter
                Width = 116
                Position.BandIndex = 0
                Position.ColIndex = 1
                Position.RowIndex = 0
              end
              object cxGridTableViewEmplUserColumn3: TcxGridDBBandedColumn
                Caption = #1055#1088#1103#1084#1099#1077' '#1079#1072#1090#1088#1072#1090#1099' '#1085#1072' '#1086#1073#1077#1089#1087#1077#1095#1077#1085#1080#1077' '#1072#1082#1094#1080#1080'. '#1088#1091#1073'.'
                DataBinding.FieldName = 'FactorCost'
                PropertiesClassName = 'TcxCurrencyEditProperties'
                HeaderAlignmentHorz = taCenter
                Width = 102
                Position.BandIndex = 0
                Position.ColIndex = 2
                Position.RowIndex = 0
              end
              object cxGridTableViewEmplUserColumn4: TcxGridDBBandedColumn
                Caption = #1053#1077#1076#1086#1087#1086#1083#1091#1095#1077#1085#1085#1072#1103' '#1087#1088#1080#1073#1099#1083#1100' '#1074' '#1089#1074#1103#1079#1080' '#1089#1086' '#1089#1082#1080#1076#1082#1086#1081'.'#1088#1091#1073'.'
                DataBinding.FieldName = 'HalfReceivedProfit'
                PropertiesClassName = 'TcxCurrencyEditProperties'
                HeaderAlignmentHorz = taCenter
                Width = 123
                Position.BandIndex = 0
                Position.ColIndex = 3
                Position.RowIndex = 0
              end
              object cxGridTableViewEmplUserColumn5: TcxGridDBBandedColumn
                Caption = #1042#1089#1077#1075#1086' '#1079#1072#1090#1088#1072#1090'. '#1088#1091#1073'.'
                DataBinding.FieldName = 'AllCost'
                PropertiesClassName = 'TcxCurrencyEditProperties'
                HeaderAlignmentHorz = taCenter
                Options.Editing = False
                Styles.Content = cxStyle2
                Width = 74
                Position.BandIndex = 0
                Position.ColIndex = 4
                Position.RowIndex = 0
              end
              object cxGridTableViewEmplUserColumn6: TcxGridDBBandedColumn
                Caption = #1055#1088#1086#1075#1085#1086#1079#1080#1088#1091#1077#1084#1072#1103' '#1074#1099#1088#1091#1095#1082#1072'. '#1088#1091#1073'.'
                DataBinding.FieldName = 'PrognozProfit'
                PropertiesClassName = 'TcxCurrencyEditProperties'
                HeaderAlignmentHorz = taCenter
                Width = 124
                Position.BandIndex = 0
                Position.ColIndex = 5
                Position.RowIndex = 0
              end
              object cxGridTableViewEmplUserColumn7: TcxGridDBBandedColumn
                Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100' '#1087#1088#1080#1074#1083#1077#1095#1077#1085#1080#1103' /'#1091#1076#1077#1088#1078#1072#1085#1080#1103' '#1086#1076#1085#1086#1075#1086' '#1082#1083#1080#1077#1085#1090#1072
                DataBinding.FieldName = 'AllProfit'
                PropertiesClassName = 'TcxCurrencyEditProperties'
                HeaderAlignmentHorz = taCenter
                Options.Editing = False
                Styles.Content = cxStyle2
                Styles.Header = cxStyle3
                Width = 98
                Position.BandIndex = 0
                Position.ColIndex = 6
                Position.RowIndex = 0
              end
              object cxGridTableViewEmplUserColumn8: TcxGridDBBandedColumn
                DataBinding.FieldName = 'idProduce'
                Visible = False
                Position.BandIndex = 0
                Position.ColIndex = 7
                Position.RowIndex = 0
              end
              object cxGridTableViewEmplUserColumn9: TcxGridDBBandedColumn
                Caption = #1050#1090#1086' '#1089#1086#1079#1076#1072#1083
                DataBinding.FieldName = 'auFamIO'
                HeaderAlignmentHorz = taCenter
                Width = 117
                Position.BandIndex = 0
                Position.ColIndex = 8
                Position.RowIndex = 0
              end
            end
            object cxGridLevel1: TcxGridLevel
              Caption = #1053#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1085#1099#1077' '#1077#1076#1077#1085#1080#1094#1099
              GridView = cxGridTableViewEmplUser
            end
          end
          object RzPanel24: TRzPanel
            Left = 0
            Top = 136
            Width = 1177
            Height = 19
            Align = alBottom
            BorderOuter = fsNone
            Color = 15329769
            TabOrder = 1
            Visible = False
            object RzSpacer72: TRzSpacer
              Left = 0
              Top = 0
              Width = 4
              Height = 19
              Grooved = True
              Align = alLeft
              ExplicitLeft = 99
              ExplicitTop = -3
            end
            object btEdit: TRzToolButton
              Left = 148
              Top = 0
              Width = 32
              Height = 19
              Hint = #1053#1072#1095#1072#1090#1100' '#1088#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1076#1072#1085#1085#1099#1077'  '#1074' '#1079#1072#1087#1080#1089#1080
              GradientColorStyle = gcsMSOffice
              ImageIndex = 13
              Images = ImageList1
              ShowCaption = False
              UseToolbarButtonLayout = False
              UseToolbarButtonSize = False
              UseToolbarShowCaption = False
              UseToolbarVisualStyle = False
              VisualStyle = vsGradient
              Align = alLeft
              Caption = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1091#1102
              ParentShowHint = False
              ShowHint = True
              Visible = False
              ExplicitHeight = 32
            end
            object btPost: TRzToolButton
              Left = 4
              Top = 0
              Width = 32
              Height = 19
              Hint = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1080#1079#1084#1077#1085#1077#1085#1080#1103
              GradientColorStyle = gcsMSOffice
              ImageIndex = 5
              Images = ImageList1
              ShowCaption = False
              UseToolbarButtonLayout = False
              UseToolbarButtonSize = False
              UseToolbarShowCaption = False
              UseToolbarVisualStyle = False
              VisualStyle = vsGradient
              Align = alLeft
              Caption = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1091#1102
              ParentShowHint = False
              ShowHint = True
              OnClick = btPostClick
              ExplicitHeight = 32
            end
            object RzSpacer48: TRzSpacer
              Left = 36
              Top = 0
              Width = 4
              Height = 19
              Grooved = True
              Align = alLeft
              ExplicitLeft = 48
              ExplicitTop = -3
            end
            object btAdd: TRzToolButton
              Left = 40
              Top = 0
              Width = 32
              Height = 19
              Hint = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1091#1102' '#1079#1072#1087#1080#1089#1100
              GradientColorStyle = gcsMSOffice
              ImageIndex = 7
              Images = ImageList1
              ShowCaption = False
              UseToolbarButtonLayout = False
              UseToolbarButtonSize = False
              UseToolbarShowCaption = False
              UseToolbarVisualStyle = False
              VisualStyle = vsGradient
              Align = alLeft
              Caption = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1091#1102
              ParentShowHint = False
              ShowHint = True
              OnClick = btAddClick
              ExplicitHeight = 32
            end
            object RzSpacer49: TRzSpacer
              Left = 72
              Top = 0
              Width = 4
              Height = 19
              Grooved = True
              Align = alLeft
              ExplicitLeft = 145
              ExplicitTop = -3
            end
            object btDel: TRzToolButton
              Left = 76
              Top = 0
              Width = 32
              Height = 19
              Hint = #1059#1076#1072#1083#1080#1090#1100' '#1079#1072#1087#1080#1089#1100' '#1080#1079' '#1089#1087#1080#1089#1082#1072
              GradientColorStyle = gcsMSOffice
              ImageIndex = 9
              Images = ImageList1
              ShowCaption = False
              UseToolbarButtonLayout = False
              UseToolbarButtonSize = False
              UseToolbarShowCaption = False
              UseToolbarVisualStyle = False
              VisualStyle = vsGradient
              Align = alLeft
              Caption = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1091#1102
              ParentShowHint = False
              ShowHint = True
              OnClick = btDelClick
              ExplicitHeight = 32
            end
            object RzSpacer71: TRzSpacer
              Left = 108
              Top = 0
              Width = 4
              Height = 19
              Grooved = True
              Align = alLeft
              ExplicitLeft = 110
              ExplicitTop = -3
            end
            object btRefresh: TRzToolButton
              Left = 112
              Top = 0
              Width = 32
              Height = 19
              Hint = #1054#1073#1085#1072#1074#1080#1090#1100' '#1090#1072#1073#1083#1080#1094#1091' '#1076#1072#1085#1085#1099#1093
              GradientColorStyle = gcsMSOffice
              ImageIndex = 11
              Images = ImageList1
              ShowCaption = False
              UseToolbarButtonLayout = False
              UseToolbarButtonSize = False
              UseToolbarShowCaption = False
              UseToolbarVisualStyle = False
              VisualStyle = vsGradient
              Align = alLeft
              Caption = #1057#1086#1079#1076#1072#1090#1100' '#1085#1086#1074#1091#1102
              ParentShowHint = False
              ShowHint = True
              OnClick = btRefreshClick
              ExplicitHeight = 32
            end
            object RzSpacer75: TRzSpacer
              Left = 144
              Top = 0
              Width = 4
              Height = 19
              Grooved = True
              Align = alLeft
              ExplicitLeft = 110
              ExplicitTop = -3
            end
          end
        end
      end
      object RadioGroup1: TRzGroupBox
        AlignWithMargins = True
        Left = 3
        Top = 0
        Width = 1181
        Height = 36
        Margins.Top = 0
        Margins.Bottom = 0
        Align = alTop
        BorderOuter = fsGroove
        Caption = ' '#1058#1080#1087' '#1094#1077#1085#1099' '
        Color = 15329769
        GroupStyle = gsStandard
        TabOrder = 1
        object rbBase: TRadioButton
          Left = 4
          Top = 17
          Width = 200
          Height = 15
          Align = alLeft
          Caption = #1041#1072#1079#1086#1074#1072#1103
          TabOrder = 0
          OnClick = rbBaseClick
        end
        object rbBudjet: TRadioButton
          Left = 204
          Top = 17
          Width = 200
          Height = 15
          Align = alLeft
          Caption = #1041#1102#1076#1078#1077#1090#1085#1072#1103
          TabOrder = 1
          OnClick = rbBudjetClick
        end
        object rbDiscountStandart: TRadioButton
          Left = 404
          Top = 17
          Width = 200
          Height = 15
          Align = alLeft
          Caption = #1057#1086' '#1089#1082#1080#1076#1082#1086#1081'. '#1057#1090#1072#1085#1076#1072#1088#1090#1085#1072#1103
          Checked = True
          TabOrder = 2
          TabStop = True
          OnClick = rbDiscountStandartClick
        end
        object rbDiscountRaschet: TRadioButton
          Left = 604
          Top = 17
          Width = 200
          Height = 15
          Align = alLeft
          Caption = #1057#1086' '#1089#1082#1080#1076#1082#1086#1081'. '#1056#1072#1089#1095#1105#1090#1085#1072#1103
          TabOrder = 3
          OnClick = rbDiscountRaschetClick
        end
      end
    end
  end
  object TmEmplDol: TTimer
    Enabled = False
    Interval = 200
    OnTimer = TmEmplDolTimer
    Left = 296
    Top = 120
  end
  object QEmplDol: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      '')
    Left = 336
    Top = 124
    object QEmplDolIDn: TIntegerField
      FieldName = 'COLUMN1'
      ReadOnly = True
    end
    object QEmplDolDol: TWideStringField
      FieldName = 'Dol'
      Size = 256
    end
  end
  object QINS_EditRasp: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      '  declare @viTmp int; SET  @viTmp=1'
      '   SELECT  @viTmp')
    Left = 240
    Top = 96
    object QINS_EditRaspIdn: TIntegerField
      FieldName = 'COLUMN1'
      ReadOnly = True
    end
  end
  object Qw: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      '')
    Left = 712
    Top = 72
  end
  object QListRasp: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <
      item
        Name = 'D0'
        Attributes = [paSigned]
        DataType = ftInteger
        Precision = 10
        Size = 4
        Value = Null
      end>
    SQL.Strings = (
      'SELECT B.Idn'
      '      , B.IdUserBM '
      '      , B.Id24NameStatus '
      '      , B.Id256TypeRasp '
      '      , B.Id24City '
      '      , B.DateRasp '
      '      , B.NumbRaspName '
      '      , B.RaspNameRTF '
      '      , B.ContentTargetRTF '
      '      , B.Id24NameStatuser '
      '      , B.ContentRTF '
      '      , B.EmplDol '
      '      , B.IdEmplUsers'
      '      , B.RaspName'
      '      , B.DateIns '
      '      , B.IdIns '
      '      , B.DateMod '
      '      , B.IdMod '
      '      , B.DateDel '
      '      , B.IdDel'
      '      , B.VidRasp'
      '      , B.Comment'
      '      ,B.PathAddFiles'
      #9'  , A.FamIO'
      #9'  , C.auFamIO'
      '    , Se.Idn as IdSeller,Se.ShortName,Se.LongName'
      'FROM bm_Rasp B'
      'LEFT JOIN EmplUsers A ON A.IDUser= B.IdUserBM'
      'LEFT JOIN aa_Users  C ON C.auId = B.IdIns'
      'LEFT JOIN dbo.clt_Seller Se on Se.idn=B.idSeller'
      ''
      'WHERE B.DateDel  is null AND B.Idn=:D0;')
    Left = 136
    Top = 80
    object QListRaspIdn: TAutoIncField
      FieldName = 'Idn'
      ReadOnly = True
    end
    object QListRaspIdUserBM: TIntegerField
      FieldName = 'IdUserBM'
    end
    object QListRaspId24NameStatus: TIntegerField
      FieldName = 'Id24NameStatus'
    end
    object QListRaspId256TypeRasp: TIntegerField
      FieldName = 'Id256TypeRasp'
    end
    object QListRaspId24City: TIntegerField
      FieldName = 'Id24City'
    end
    object QListRaspDateRasp: TDateTimeField
      FieldName = 'DateRasp'
    end
    object QListRaspNumbRaspName: TStringField
      FieldName = 'NumbRaspName'
      Size = 24
    end
    object QListRaspRaspNameRTF: TMemoField
      FieldName = 'RaspNameRTF'
      BlobType = ftMemo
    end
    object QListRaspContentTargetRTF: TMemoField
      FieldName = 'ContentTargetRTF'
      BlobType = ftMemo
    end
    object QListRaspId24NameStatuser: TIntegerField
      FieldName = 'Id24NameStatuser'
    end
    object QListRaspContentRTF: TMemoField
      FieldName = 'ContentRTF'
      BlobType = ftMemo
    end
    object QListRaspEmplDol: TIntegerField
      FieldName = 'EmplDol'
    end
    object QListRaspIdEmplUsers: TIntegerField
      FieldName = 'IdEmplUsers'
    end
    object QListRaspRaspName: TStringField
      FieldName = 'RaspName'
      Size = 1024
    end
    object QListRaspDateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object QListRaspIdIns: TIntegerField
      FieldName = 'IdIns'
    end
    object QListRaspDateMod: TDateTimeField
      FieldName = 'DateMod'
    end
    object QListRaspIdMod: TIntegerField
      FieldName = 'IdMod'
    end
    object QListRaspDateDel: TDateTimeField
      FieldName = 'DateDel'
    end
    object QListRaspIdDel: TIntegerField
      FieldName = 'IdDel'
    end
    object QListRaspFamIO: TStringField
      FieldName = 'FamIO'
      Size = 32
    end
    object QListRaspauFamIO: TStringField
      FieldName = 'auFamIO'
      Size = 24
    end
    object QListRaspVidRasp: TIntegerField
      FieldName = 'VidRasp'
    end
    object QListRaspComment: TMemoField
      FieldName = 'Comment'
      BlobType = ftMemo
    end
    object QListRaspPathAddFiles: TStringField
      FieldName = 'PathAddFiles'
      Size = 512
    end
    object QListRaspIdSeller: TAutoIncField
      FieldName = 'IdSeller'
      ReadOnly = True
    end
    object QListRaspShortName: TStringField
      FieldName = 'ShortName'
      Size = 128
    end
    object QListRaspLongName: TStringField
      FieldName = 'LongName'
      Size = 1024
    end
  end
  object RzOpenDialog1: TRzOpenDialog
    Filter = '*.xls|*.xls|('#1042#1089#1077')|*.*'
    DefaultExt = 'xls'
    Left = 656
    Top = 56
  end
  object cxStyleRepository1: TcxStyleRepository
    Top = 16
    PixelsPerInch = 96
    object cxStyle1: TcxStyle
      AssignedValues = [svColor]
      Color = 15329769
    end
    object cxStyle3: TcxStyle
      AssignedValues = [svColor, svFont]
      Color = 15329769
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
    end
  end
  object ImageList1: TImageList
    DrawingStyle = dsTransparent
    Left = 834
    Top = 61
    Bitmap = {
      494C0101190064008C0010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000007000000001002000000000000070
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CECECE00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00E7E7
      E700CECECE009C9C9C0000000000000000000000000000000000000000000000
      000000000000CECECE0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00E7E7E7009C9C9C0000000000000000000000000000000000000000000000
      0000CECECE000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE009C9C9C0000000000000000000000000000000000CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE009C9C9C000000000000000000CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE009C9C9C00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE009C9C9C0000000000000000009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE009C9C9C00000000000000000000000000000000009C9C
      9C009C9C9C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00E7E7
      E700CECECE009C9C9C0000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CECECE009C9C
      9C00CECECE000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E7EFF700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E7EFF700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C0000000000000000000000000000000000000000000000000000000000E7EF
      F700E7E7E700CECECE00E7E7E700E7EFF7000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E7EF
      F70000000000CECECE00E7E7E700E7EFF7000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      9C00000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF00000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECECE00CECE
      CE009C9C9C0000000000000000000000000000000000E7EFF700E7E7E700B5B5
      B500CE9C9C009C6363009C636300B5B5B500CECECE00E7E7E700E7EFF7000000
      00000000000000000000000000000000000000000000E7EFF70000000000B5B5
      B5009C9C9C009C9C9C009C9C9C00B5B5B500CECECE0000000000E7EFF7000000
      00000000000000000000000000000000000000000000000000003131CE000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000E7E7E700CE9C9C009C636300CE9C
      9C00CE9C9C00FFFFFF009C6363009C9C9C009C9C9C00B5B5B500E7E7E7000000
      000000000000000000000000000000000000000000009C9C9C009C9C9C009C9C
      9C009C9C9C00FFFFFF009C9C9C009C9C9C009C9C9C00B5B5B500000000000000
      00000000000000000000000000000000000000000000000000003131CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      0000000000000000FF0000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECECE00CECE
      CE00CECECE00CECECE009C9C9C00000000009C636300CE9C9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630031639C0031639C0031639C00E7EFF7000000
      0000000000000000000000000000000000009C9C9C009C9C9C00C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00E7EFF7000000
      0000000000000000000000000000000000000000000000000000000000003131
      CE000063FF000000CE0000000000000000000000000000000000000000000000
      00000000FF000000000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE00CECECE009C9C9C009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630063CECE0063CECE00009CCE00FFFFFF00FFCE
      CE00000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00C6C6C600C6C6C6009C9C9C00FFFFFF00CECE
      CE00000000000000000000000000000000000000000000000000000000000000
      00000000CE000000FF0000009C00000000000000000000000000000000000000
      FF0000009C000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECECE00CECE
      CE00CECECE00CECECE009C9C9C00000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630063CECE0063CEFF00319CCE00FFCECE00CE63
      0000000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00C6C6C600CECECE009C9C9C00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000FF000000
      9C00000000000000000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000009C636300FFCE9C00CE9C9C00CE9C
      6300FFCECE00FFFFFF009C6363009CCECE009CCEFF00B5B5B500FF630000CE63
      0000000000000000000000000000000000009C9C9C00C6C6C6009C9C9C009C9C
      9C00CECECE00FFFFFF009C9C9C00CECECE00CECECE00B5B5B5009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000FF0000009C000000
      0000000000000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECECE00CECE
      CE009C9C9C000000000000000000000000009C636300FFCE9C009C636300FFFF
      FF00FFCECE00FFFFFF009C6363009CCECE00C6C6C600CE630000CE630000CE63
      0000CE630000CE630000CE630000000000009C9C9C00C6C6C60063636300FFFF
      FF00CECECE00FFFFFF009C9C9C00CECECE00C6C6C6009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
      00000000000000000000000000000000CE000000FF0000009C00000000000000
      0000000000000000000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C00000000000000000000000000000000009C636300FFCE9C00CE9C9C009C63
      6300FFCECE00FFFFFF009C63630000000000CE630000CE630000CE630000CE63
      0000CE630000CE630000CE630000000000009C9C9C00C6C6C6009C9C9C006363
      6300CECECE00FFFFFF009C9C9C00E7E7E7009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000CE0000009C000000
      0000000000000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C9C009C9C
      9C00000000000000000000000000000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630000000000CE9C9C00CE630000CE630000CE63
      0000CE630000CE630000CE630000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00E7E7E7009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000CE000000
      9C00000000000000000000000000000000009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00000000000000000000000000000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C636300CECECE00E7EFF700CE9C9C00FF630000CE63
      0000000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7EFF7009C9C9C009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      CE000000FF000000FF0000009C00000000000000000000000000000000000000
      CE0000009C000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00000000009C9C
      9C00000000000000000000000000000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C6363009CCECE00000000009CCECE00FFCE9C00CE63
      0000000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7E7E700CECECE00C6C6C6009C9C
      9C000000000000000000000000000000000000000000000000000000CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      00000000CE0000009C0000000000000000009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00000000000000000000000000000000009C636300CE9C9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C636300CECECE0000000000319CCE0000000000FFCE
      9C00000000000000000000000000000000009C9C9C009C9C9C00C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7E7E7009C9C9C0000000000C6C6
      C60000000000000000000000000000000000000000000000000063639C000000
      CE0063639C000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE00000000009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C000000000000000000000000000000000000000000C6C6C600CE9C6300CE9C
      9C00CECE9C00FFFFFF009C636300009CCE00009CCE00009CCE00000000000000
      00000000000000000000000000000000000000000000C6C6C6009C9C9C009C9C
      9C00C6C6C600FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C0000000000000000000000000000000000000000000000000000000000CECE
      CE00CE9C9C009C6363009C636300000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CECE
      CE009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C3100009C3100000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C31000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE6300009C31
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700CECECE009C9C9C00E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C000000000000000000CE9C6300FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00CE9C
      6300CE9C63009C310000000000000000000000000000B5B5B500CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00B5B5
      B500B5B5B5009C9C9C000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63009C310000CE630000CE63
      00009C310000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700CECECE009C9C9C00E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C0000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      63009C310000CE9C63009C31000000000000B5B5B500B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5
      B5009C9C9C00B5B5B5009C9C9C0000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE630000CE63
      0000CE6300009C3100000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700CECECE009C9C9C00E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE
      9C00CE9C63009C3100009C31000000000000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00B5B5B5009C9C9C009C9C9C0000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C310000CE630000CE63
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C0000CE0000009C0000FFCE9C000000FF000000CE00FFCE
      9C00CE9C6300CE9C63009C31000000000000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00B5B5B5009C9C9C00CECECE00B5B5B5009C9C9C00CECE
      CE00B5B5B500B5B5B5009C9C9C0000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE630000CE63
      0000CE630000CE630000CE6300009C310000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300CE9C6300CE9C63009C310000B5B5B50000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B500B5B5B500B5B5B5009C9C9C00CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C310000CE630000CE63
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE
      9C00CE9C6300CE9C6300CE9C63009C310000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00B5B5B500B5B5B500B5B5B5009C9C9C00CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE630000CE63
      0000CE6300009C3100000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C00CECECE00CECECE009C9C9C000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300FFCE
      9C00FFCE9C00CE9C6300CE9C63009C31000000000000B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500CECE
      CE00CECECE00B5B5B500B5B5B5009C9C9C00CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C310000CE630000CE63
      00009C310000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C00CECECE009C9C9C00000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300FFCE9C00FFCE9C00CE9C63009C3100000000000000000000B5B5B5000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B500CECECE00CECECE00B5B5B5009C9C9C00CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE6300009C31
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00FFFF
      FF009C9C9C00CECECE009C9C9C0000000000000000000000000000000000CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C
      6300CE9C6300CE9C63009C31000000000000000000000000000000000000B5B5
      B50000000000CECECE00CECECE00CECECE00CECECE00CECECE0000000000B5B5
      B500B5B5B500B5B5B5009C9C9C0000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C3100009C310000CE9C
      630000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C00CECECE009C9C9C0000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300000000000000000000000000000000000000000000000000B5B5
      B500000000000000000000000000000000000000000000000000000000000000
      0000B5B5B500000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      630000000000000000000000000000000000000000009C9C9C00E7E7E7009C9C
      9C00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00FFFF
      FF009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
      0000CE9C6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFF
      FF00CE9C63000000000000000000000000000000000000000000000000000000
      0000B5B5B50000000000CECECE00CECECE00CECECE00CECECE00CECECE000000
      0000B5B5B500000000000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C
      630000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C00CECECE009C9C9C00000000000000000000000000000000000000
      0000CE9C6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C630000000000000000000000000000000000000000000000
      0000B5B5B5000000000000000000000000000000000000000000000000000000
      000000000000B5B5B5000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      630000000000000000000000000000000000000000009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
      000000000000CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C630000000000000000000000000000000000000000000000
      000000000000B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B5000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000031313100313131009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000063636300636363009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C3100009C310000000000000000000000000000000000000000
      0000B5B5B5009C9C9C009C9C9C00B5B5B5000000000000000000000000000000
      000000000000000000000000000000000000CECECE0063636300313131003131
      3100000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C0084848400636363006363
      6300000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700CE6300009C310000E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C310000000000000000000000000000000000009C9C
      9C009C9C9C00CECECE00CECECE009C9C9C000000000000000000000000000000
      0000000000000000000000000000000000000000000063636300636363006363
      6300313131009C9C9C0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000084848400848484008484
      8400636363009C9C9C0000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700CE6300009C310000E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C3100000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C009C9C9C00B5B5B5000000000000000000000000000000
      00000000000000000000000000000000000000000000CECECE00636363006363
      63006363630031313100009C9C00000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00848484008484
      840084848400636363009C9C9C00000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700CE6300009C310000E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C3100000000000000000000B5B5B5009C9C9C00CECE
      CE009C9C9C00B5B5B50000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000000000000636363006363
      63009CFFFF009CCECE009CCECE00009C9C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000848484008484
      8400E7E7E700CECECE00CECECE009C9C9C000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C00B5B5B5000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE00CECECE00CECECE009C9C9C00000000000000000000000000CECECE008484
      8400CEFFFF009CFFFF009CCECE009CCECE00009C9C009CCECE00000000000000
      00000000000000000000000000000000000000000000000000009C9C9C008484
      8400E7E7E700E7E7E700CECECE00CECECE009C9C9C00CECECE00000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE6300009C3100009C3100009C3100009C3100009C3100009C310000CE63
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C0000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE009C9C9C000000000000000000000000000000000063CE
      CE00FFFFFF00CEFFFF009CFFFF009CFFFF009CCECE0063CECE00009C9C000000
      000000000000000000000000000000000000000000000000000000000000CECE
      CE00FFFFFF00E7E7E700E7E7E700E7E7E700CECECE00CECECE009C9C9C000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C00B5B5B50000000000000000000000000000000000B5B5B5009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C000000000000000000000000000000000063CE
      CE00FFFFFF00CEFFFF00CEFFFF009CFFFF009CFFFF009CCECE009CCECE00009C
      9C0063CECE00000000000000000000000000000000000000000000000000CECE
      CE00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700CECECE00CECECE009C9C
      9C00CECECE00000000000000000000000000000000009C310000CE630000CE63
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      0000CE630000CE6300009C3100000000000000000000B5B5B5009C9C9C00CECE
      CE009C9C9C00B5B5B50000000000B5B5B5009C9C9C009C9C9C00CECECE009C9C
      9C00CECECE00CECECE009C9C9C00000000000000000000000000000000000000
      00009CCECE00FFFFFF00CEFFFF00CEFFFF009CFFFF009CFFFF009CCECE00FFCE
      CE009C3100009C31000000000000000000000000000000000000000000000000
      0000CECECE00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700CECECE00CECE
      CE0063636300636363000000000000000000000000009C310000CE6300009C31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C310000CE6300009C3100000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C009C9C9C009C9C9C00CECECE00CECECE009C9C9C00B5B5
      B5009C9C9C00CECECE009C9C9C00000000000000000000000000000000000000
      000063CECE00FFFFFF00CEFFFF00CEFFFF00FFCECE00CE630000CE6300009C31
      00009C3100009C3100009C310000000000000000000000000000000000000000
      0000CECECE00FFFFFF00E7E7E700E7E7E700CECECE0084848400848484006363
      630063636300636363006363630000000000000000009C310000CE6300009C31
      0000FFFFFF009C3100009C3100009C3100009C3100009C3100009C310000FFFF
      FF009C310000CE6300009C310000000000000000000000000000000000009C9C
      9C009C9C9C00CECECE00CECECE00CECECE009C9C9C009C9C9C00000000000000
      0000000000009C9C9C009C9C9C00000000000000000000000000000000000000
      0000000000009CCECE00FFFFFF00CEFFFF00CE630000CE630000CE630000CE63
      00009C3100009C3100009C3100009C3100000000000000000000000000000000
      000000000000CECECE00FFFFFF00E7E7E7008484840084848400848484008484
      840063636300636363006363630063636300000000009C310000CE6300009C31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C310000CE6300009C310000000000000000000000000000000000000000
      0000B5B5B5009C9C9C009C9C9C009C9C9C00B5B5B50000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000063CECE00FFFFFF00FFCECE00CE630000CE630000CE630000CE63
      0000CE6300009C3100009C3100009C3100000000000000000000000000000000
      000000000000CECECE00FFFFFF00CECECE008484840084848400848484008484
      840084848400636363006363630063636300000000009C310000E7E7E7009C31
      0000FFFFFF009C3100009C3100009C3100009C3100009C3100009C310000FFFF
      FF009C3100009C3100009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000FF9C0000FF9C0000CE630000CE630000CE630000CE63
      0000CE630000CE6300009C3100009C3100000000000000000000000000000000
      000000000000000000009C9C9C009C9C9C008484840084848400848484008484
      840084848400848484006363630063636300000000009C310000CE6300009C31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C310000CE6300009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CE630000FF9C0000FF9C0000CE630000CE630000CE63
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      00000000000000000000636363009C9C9C009C9C9C0084848400848484008484
      840084848400848484008484840063636300000000009C3100009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C3100009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000CE630000FF9C0000FF9C0000CE630000CE63
      0000CE630000CE630000CE630000CE6300000000000000000000000000000000
      0000000000000000000000000000636363009C9C9C009C9C9C00848484008484
      8400848484008484840084848400848484000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CE9C63009C3100009C310000CE9C63000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C31
      00009C310000CE630000CE6300009C3100000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C310000CE63
      0000CE6300009C3100009C310000CE9C63000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C63009C310000CE63
      00009C310000CE9C630000000000000000009C3100009C3100009C3100009C31
      00009C3100009C3100009C3100000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00CECECE00CECECE009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C310000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C000000000000000000000000009C310000CE6300009C31
      0000CE9C63000000000000000000000000009C310000CE630000CE630000CE63
      0000CE630000CE6300009C3100000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000000000009C310000CE6300009C31
      000000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE630000CE6300009C3100000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000000000009C310000CE6300009C31
      0000CE9C630000000000000000000000000000000000CE9C63009C310000CE63
      0000CE630000CE6300009C3100000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00CECECE00CECECE009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C310000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000000000000CE9C63009C310000CE63
      00009C310000CE9C630000000000CE9C63009C3100009C310000CE6300009C31
      0000CE630000CE6300009C310000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C310000CE63
      0000CE6300009C3100009C3100009C310000CE630000CE6300009C310000CE9C
      63009C310000CE6300009C310000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C31
      00009C310000CE630000CE630000CE6300009C3100009C310000000000000000
      0000000000009C3100009C310000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CE9C63009C3100009C3100009C310000CE9C630000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CECECE009C9C9C009C9C9C009C9C9C00CECECE00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CECECE009C9C9C000000000000000000000000009C9C9C00CECECE000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C0000000000000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CE00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5008484840000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C3100009C3100009C3100009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C0000000000CECECE009C9C9C00CECECE00000000009C9C9C000000
      00000000000000000000000000000000000000000000000000000000000000CE
      0000009C0000009C000000630000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B5009C9C9C009C9C9C0084848400000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      000000000000000000000000000000000000000000000000000000CE0000009C
      0000009C0000009C0000009C0000006300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B5B5B5009C9C
      9C009C9C9C009C9C9C009C9C9C00848484000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      0000009C0000009C0000009C0000009C00000063000000000000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C008484840000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      00000063000000CE0000009C0000009C0000009C000000630000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C0084848400B5B5B5009C9C9C009C9C9C009C9C9C0084848400000000000000
      00000000000000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C310000CE630000CE6300009C3100009C3100009C31
      00009C3100009C31000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000CE0000009C00000063
      0000000000000000000000CE0000009C0000009C0000009C0000006300000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C008484
      84000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C00848484000000
      00000000000000000000000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000CE0000006300000000
      000000000000000000000000000000CE0000009C0000009C0000009C00000063
      00000000000000000000000000000000000000000000B5B5B500848484000000
      0000000000000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C008484
      84000000000000000000000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000CE0000009C0000009C0000009C
      0000006300000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000B5B5B5009C9C9C009C9C9C009C9C
      9C008484840000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C310000CE630000CE6300009C3100009C3100009C31
      00009C3100009C31000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      0000009C00000063000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C009C9C9C008484840000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CE0000009C
      0000009C00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B5B5B5009C9C
      9C009C9C9C008484840000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CE
      0000009C00000063000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B5009C9C9C008484840000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CE00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5008484840000000000000000000000000000000000000000000000
      000000000000000000009C3100009C3100009C3100009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CE9C63009C3100009C3100009C310000CE9C6300000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CECECE009C9C9C009C9C9C009C9C9C00CECECE00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CE9C63009C3100009C3100009C310000CE9C6300000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CE9C63009C3100000000000000000000000000009C310000CE9C63000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CECECE009C9C9C000000000000000000000000009C9C9C00CECECE000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CE9C63009C3100000000000000000000000000009C310000CE9C63000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C31000000000000000000000000000000000000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C0000000000000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C31000000000000000000000000000000000000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C31000000000000CE9C63009C310000CE9C6300000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C0000000000CECECE009C9C9C00CECECE00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C31000000000000CE9C63009C310000CE9C6300000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00000000009C9C9C00000000009C9C9C00000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000000000009C310000000000009C310000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C3100000000000000000000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C3100000000000000000000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C3100000000000000000000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C3100000000000000000000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C3100000000000000000000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C3100000000000000000000000000009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C3100009C3100009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C3100009C3100009C310000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000700000000100010000000000800300000000000000000000
      000000000000000000000000FFFFFF00FFFF000000000000EFFD000000000000
      C7FF000000000000C3FB000000000000E3F7000000000000F1E7000000000000
      F8CF000000000000FC1F000000000000FE3F000000000000FC1F000000000000
      F8CF000000000000E1E7000000000000C3F3000000000000C7FD000000000000
      FFFF000000000000FFFF000000000000FF9FFDFFFDFFFFFFFF8FE0FFE8FFEFFD
      0007801FA05FC7FF7F83001F803FC3FB4001001F001FE3F77F80000F000FF1E7
      4001000F000FF8CF7F83000F000FFC1F400700010001FE3F7F8F01010001FC1F
      400F01010001F8CF7FEF000F000FE1E7402F008F000FC3F37FEF00AF002FC7FD
      7FEF803F803FFFFF000FE1FFE1FFFFFFFFFFFFFFFFFFFF9FC001C007C007FF8F
      8001800380030007800100010001000380010001400100018001000140010000
      800100007FF00001800100004000000380018000800000078001C000DFE0000F
      8001E001E821000F8001E007EFF7000F8001F007F417000F8001F003F7FB000F
      8001F803F803000FFFFFFFFFFFFF000FFFFFFFFFFFFFFFFFFFFF1FFF1FFFC001
      F0FF0FFF0FFF8001E0FF83FF83FF8001C0FF81FF81FF80018301C0FFC0FF8001
      8701C03FC03F80018F81E01FE01F80018781E007E00780018201F003F0038001
      C001F001F0018001E039F800F8008001F07FF800F8008001FFFFFC00FC008001
      FFFFFC00FC008001FFFFFE00FE00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FC3FFFFFFFFFF0FFFC3FFFFFFFFFE0FFFC3FFFFFFFFFC0FFFC3FFFFFFFFF8301
      C003C003C0038701C003C003C0038F81C003C003C0038781C003C003C0038201
      FC3FFFFFFFFFC001FC3FFFFFFFFFE039FC3FFFFFFFFFF07FFC3FFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF83FFFFFFFFFFFFFF39FFFFFFFFFFFFF
      F7DFF3FFF3FFFC3FF45FE1FFE1FFFC3FF55FC0FFC0FFFC3FF55F807F807FFC3F
      F55F803F803FC003F55F8C1F8C1FC003F55F9E0F9E0FC003F55FFF07FF07C003
      F55FFF83FF83FC3FF55FFFC3FFC3FC3FFDDFFFE3FFE3FC3FFDDFFFF3FFF3FC3F
      FDDFFFFFFFFFFFFFFE3FFFFFFFFFFFFFF83FF83FFFFFF83FF39FF39FFFFFF39F
      F7DFF7DFFFFFF7DFF45FF45FC1FFF45FF55FF55FFAFFF55FF55FF55FF0FFF55F
      F55FF55FF07FF55FF55FF55FC63FF55FF55FF55FC35FF55FF55FF55FD307F55F
      F55FF55FE9BFF55FF55FF55FE5BFF55FFDDFFDDFFBBFFDDFFDDFFDDFFCBFFDDF
      FDDFFDDFFF7FFDDFFE3FFE3FFFFFFE3F00000000000000000000000000000000
      000000000000}
  end
  object DSPZ: TDataSource
    DataSet = QPZ
    Left = 400
    Top = 605
  end
  object QPZ: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    BeforePost = QPZBeforePost
    BeforeDelete = QPZBeforeDelete
    Parameters = <
      item
        Name = 'D0'
        Attributes = [paSigned, paNullable]
        DataType = ftInteger
        Precision = 10
        Size = 4
        Value = Null
      end>
    SQL.Strings = (
      'SELECT  Idn '
      '      , idRasp'
      '      ,idProduce '
      '      , Produce '
      '      , PrognozOtklik '
      '      , FactorCost '
      '      , HalfReceivedProfit '
      '      , AllCost '
      '      , PrognozProfit '
      '      , AllProfit'
      '       ,IdIns'
      '      ,C.auFamIO'
      '  FROM  bm_PredictedDebit '
      'LEFT JOIN aa_Users  C ON C.auId = IdIns'
      'WHERE idRasp =:D0   and   DateDel is null;')
    Left = 432
    Top = 605
    object QPZIdn: TAutoIncField
      FieldName = 'Idn'
      ReadOnly = True
    end
    object QPZidRasp: TIntegerField
      FieldName = 'idRasp'
    end
    object QPZidProduce: TIntegerField
      FieldName = 'idProduce'
    end
    object QPZProduce: TStringField
      FieldName = 'Produce'
      Size = 250
    end
    object QPZPrognozOtklik: TIntegerField
      FieldName = 'PrognozOtklik'
    end
    object QPZFactorCost: TBCDField
      FieldName = 'FactorCost'
      Precision = 19
    end
    object QPZHalfReceivedProfit: TBCDField
      FieldName = 'HalfReceivedProfit'
      Precision = 19
    end
    object QPZAllCost: TBCDField
      FieldName = 'AllCost'
      Precision = 19
    end
    object QPZPrognozProfit: TBCDField
      FieldName = 'PrognozProfit'
      Precision = 19
    end
    object QPZAllProfit: TBCDField
      FieldName = 'AllProfit'
      Precision = 19
    end
    object QPZIdIns: TIntegerField
      FieldName = 'IdIns'
    end
    object QPZauFamIO: TStringField
      FieldName = 'auFamIO'
      Size = 24
    end
  end
  object QTmpTable: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      '')
    Left = 192
    Top = 605
  end
  object TmRefresh: TTimer
    Enabled = False
    Interval = 200
    OnTimer = TmRefreshTimer
    Left = 640
    Top = 613
  end
  object QListComments: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <
      item
        Name = 'D0'
        Attributes = [paSigned, paNullable]
        DataType = ftInteger
        Precision = 10
        Size = 4
        Value = Null
      end>
    SQL.Strings = (
      'SELECT  A.Idn '
      '      , A.idRasp '
      '      , A.TypeCost '
      '      , A.Id256NameDiscount '
      '      , A.Id256NameAction '
      '      , B.iText'
      '      , A.DateRealization '
      '      , A.PrognozEffects '
      '      , A.GrantingConditions '
      '      , A.DateIns '
      '      , A.IdIns '
      '      , A.DateMod '
      '      , A.IdMod '
      '      , A.DateDel '
      '      , A.IdDel '
      '  FROM  bm_Comments A'
      'LEFT JOIN spl_LbText256 B ON B.Idn=A.Id256CostDiscount'
      ' WHERE idRasp= :D0;')
    Left = 336
    Top = 168
    object QListCommentsIdn: TAutoIncField
      FieldName = 'Idn'
      ReadOnly = True
    end
    object QListCommentsidRasp: TIntegerField
      FieldName = 'idRasp'
    end
    object QListCommentsTypeCost: TIntegerField
      FieldName = 'TypeCost'
    end
    object QListCommentsId256NameDiscount: TIntegerField
      FieldName = 'Id256NameDiscount'
    end
    object QListCommentsId256NameAction: TIntegerField
      FieldName = 'Id256NameAction'
    end
    object QListCommentsiText: TStringField
      FieldName = 'iText'
      Size = 256
    end
    object QListCommentsDateRealization: TDateTimeField
      FieldName = 'DateRealization'
    end
    object QListCommentsPrognozEffects: TStringField
      FieldName = 'PrognozEffects'
      Size = 1024
    end
    object QListCommentsGrantingConditions: TStringField
      FieldName = 'GrantingConditions'
      Size = 1024
    end
    object QListCommentsDateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object QListCommentsIdIns: TIntegerField
      FieldName = 'IdIns'
    end
    object QListCommentsDateMod: TDateTimeField
      FieldName = 'DateMod'
    end
    object QListCommentsIdMod: TIntegerField
      FieldName = 'IdMod'
    end
    object QListCommentsDateDel: TDateTimeField
      FieldName = 'DateDel'
    end
    object QListCommentsIdDel: TIntegerField
      FieldName = 'IdDel'
    end
  end
  object cxStyleRepository2: TcxStyleRepository
    Left = 920
    Top = 48
    PixelsPerInch = 96
    object cxStyle2: TcxStyle
      AssignedValues = [svColor]
      Color = clInfoBk
    end
    object cxStyle4: TcxStyle
    end
  end
  object QAddFiles: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <
      item
        Name = 'D0'
        Attributes = [paSigned, paNullable]
        DataType = ftInteger
        Precision = 10
        Size = 4
        Value = Null
      end>
    SQL.Strings = (
      
        'SELECT NameFile FROM bm_AddFiles WHERE DateDel is null AND idRas' +
        'p=:D0')
    Left = 819
    Top = 203
    object QAddFilesNameFile: TStringField
      FieldName = 'NameFile'
      ReadOnly = True
      Size = 256
    end
  end
  object DSMailPathAddFiles: TDataSource
    DataSet = QAddFiles
    Left = 763
    Top = 205
  end
  object QAddFilesEXEL: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <
      item
        Name = 'D0'
        Attributes = [paSigned, paNullable]
        DataType = ftInteger
        Precision = 10
        Size = 4
        Value = Null
      end>
    SQL.Strings = (
      
        'SELECT NameFile FROM bm_AddFiles WHERE DateDel is null AND idRas' +
        'p=:D0'
      
        'AND (SUBSTRING(REVERSE(NameFile),1,4)='#39'SLX.'#39' OR SUBSTRING(REVERS' +
        'E(NameFile),1,5)='#39'XSLX.'#39' )')
    Left = 811
    Top = 267
    object QAddFilesEXELNameFile: TStringField
      FieldName = 'NameFile'
      ReadOnly = True
      Size = 256
    end
  end
  object Qw2: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      '')
    Left = 752
    Top = 72
  end
end
