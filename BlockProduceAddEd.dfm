object FrBlockProduceAddEd: TFrBlockProduceAddEd
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = 'FrBlockProduceAddEd'
  ClientHeight = 678
  ClientWidth = 1270
  Color = clBtnFace
  Constraints.MaxHeight = 716
  Constraints.MaxWidth = 1286
  Constraints.MinHeight = 716
  Constraints.MinWidth = 1286
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 652
    Width = 1270
    Height = 26
    Align = alBottom
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 0
    VisualStyle = vsGradient
    object btDiscount: TRzToolButton
      AlignWithMargins = True
      Left = 590
      Top = 2
      Width = 120
      Height = 22
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 32
      Images = FrBlockProduce.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1055#1077#1088#1080#1086#1076#1099' '#1089#1082#1080#1076#1086#1082
      Enabled = False
      OnClick = btDiscountClick
      ExplicitLeft = 620
    end
    object RzSpacer5: TRzSpacer
      Left = 123
      Top = 1
      Height = 24
      Grooved = True
      Orientation = orVertical
      Align = alLeft
      ExplicitLeft = 153
    end
    object btClose: TRzToolButton
      Left = 1119
      Top = 1
      Width = 150
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 21
      Images = FrBlockProduce.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alRight
      Caption = #1042#1099#1093#1086#1076
      OnClick = btCloseClick
      ExplicitLeft = 686
      ExplicitTop = 4
    end
    object RzSpacer6: TRzSpacer
      Left = 1111
      Top = 1
      Height = 24
      Grooved = True
      Orientation = orVertical
      Align = alRight
      ExplicitLeft = 843
    end
    object RzSpacer1: TRzSpacer
      Left = 451
      Top = 1
      Height = 24
      Grooved = True
      Orientation = orVertical
      Align = alLeft
      ExplicitLeft = 518
      ExplicitTop = 3
    end
    object SaveButt: TRzToolButton
      AlignWithMargins = True
      Left = 2
      Top = 2
      Width = 120
      Height = 22
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 15
      Images = FrBlockProduce.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      OnClick = SaveButtClick
    end
    object RzSpacer2: TRzSpacer
      Left = 581
      Top = 1
      Height = 24
      Grooved = True
      Orientation = orVertical
      Align = alLeft
      ExplicitLeft = 691
      ExplicitTop = 3
    end
    object btMoney: TRzToolButton
      AlignWithMargins = True
      Left = 460
      Top = 2
      Width = 120
      Height = 22
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 29
      Images = FrBlockProduce.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100' '#1073#1083#1086#1082#1072
      Enabled = False
      OnClick = btMoneyClick
      ExplicitLeft = 490
    end
    object RzSpacer3: TRzSpacer
      Left = 711
      Top = 1
      Height = 24
      Grooved = True
      Orientation = orVertical
      Align = alLeft
      ExplicitLeft = 857
      ExplicitTop = 3
    end
    object RzSpacer4: TRzSpacer
      Left = 281
      Top = 1
      Width = 10
      Height = 24
      Grooved = True
      Orientation = orVertical
      Align = alLeft
      ExplicitLeft = 311
    end
    object NewProdBut: TRzToolButton
      AlignWithMargins = True
      Left = 720
      Top = 2
      Width = 120
      Height = 22
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 7
      Images = FrBlockProduce.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1053#1086#1074#1099#1081' '#1087#1088#1086#1076#1091#1082#1090
      OnClick = NewProdButClick
      ExplicitLeft = 750
    end
    object RzSpacer7: TRzSpacer
      Left = 841
      Top = 1
      Height = 24
      Grooved = True
      Orientation = orVertical
      Align = alLeft
      ExplicitLeft = 863
      ExplicitTop = 3
    end
    object DelProdBut: TRzToolButton
      AlignWithMargins = True
      Left = 850
      Top = 2
      Width = 120
      Height = 22
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 30
      Images = FrBlockProduce.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1059#1076#1072#1083#1080#1090#1100' '#1087#1088#1086#1076#1091#1082#1090
      OnClick = DelProdButClick
      ExplicitLeft = 997
      ExplicitTop = 1
    end
    object RzSpacer8: TRzSpacer
      Left = 971
      Top = 1
      Height = 24
      Grooved = True
      Orientation = orVertical
      Align = alLeft
      ExplicitLeft = 993
      ExplicitTop = 3
    end
    object MultButt: TRzRadioButton
      Left = 291
      Top = 1
      Width = 160
      Height = 24
      Align = alLeft
      AutoSize = False
      Caption = #1058#1080#1087' '#1073#1083#1086#1082#1072': "'#1057#1086#1089#1090#1072#1074#1085#1086#1081'"'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      Transparent = True
    end
    object BaseButt: TRzRadioButton
      Left = 131
      Top = 1
      Width = 150
      Height = 24
      Align = alLeft
      AutoSize = False
      Caption = #1058#1080#1087' '#1073#1083#1086#1082#1072': "'#1041#1072#1079#1086#1074#1099#1081'"'
      Checked = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      TabStop = True
      Transparent = True
    end
  end
  object RzGroupBox1: TRzGroupBox
    Left = 536
    Top = 4
    Width = 730
    Height = 645
    Caption = ' '#1042#1072#1088#1080#1072#1085#1090#1099' '#1089#1090#1086#1080#1084#1086#1089#1090#1080' '#1073#1083#1086#1082#1072': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    Transparent = True
    DesignSize = (
      730
      645)
    object Label2: TLabel
      Left = 6
      Top = 278
      Width = 184
      Height = 13
      Caption = #1055#1088#1080#1084#1077#1095#1072#1085#1080#1077' '#1082' '#1089#1090#1086#1080#1084#1086#1089#1090#1080' '#1073#1083#1086#1082#1072':'
    end
    object RzLabel1: TRzLabel
      Left = 4
      Top = 360
      Width = 292
      Height = 13
      Caption = #1055#1077#1088#1080#1086#1076' '#1076#1077#1081#1089#1090#1074#1080#1103' '#1080' '#1076#1086#1089#1090#1091#1087#1085#1099#1077' '#1089#1082#1080#1076#1082#1080' '#1076#1083#1103' '#1073#1083#1086#1082#1072':'
      Transparent = True
    end
    object cxGrid1: TcxGrid
      Left = 2
      Top = 16
      Width = 717
      Height = 256
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      object cxGrid1DBTableView1: TcxGridDBTableView
        Navigator.Buttons.CustomButtons = <>
        OnCellDblClick = cxGrid1DBTableView1CellDblClick
        DataController.DataSource = CostData
        DataController.Summary.DefaultGroupSummaryItems = <>
        DataController.Summary.FooterSummaryItems = <>
        DataController.Summary.SummaryGroups = <>
        OptionsData.CancelOnExit = False
        OptionsData.Deleting = False
        OptionsData.DeletingConfirmation = False
        OptionsData.Editing = False
        OptionsData.Inserting = False
        OptionsView.ColumnAutoWidth = True
        OptionsView.GroupByBox = False
        OptionsView.HeaderAutoHeight = True
        OptionsView.Indicator = True
        object cxGrid1DBTableView1Cycle: TcxGridDBColumn
          Caption = #1055#1077#1088#1080#1086#1076#1080#1095#1085#1086#1089#1090#1100':'
          DataBinding.FieldName = 'Cycle'
          HeaderAlignmentHorz = taCenter
          Options.Editing = False
          Width = 126
        end
        object cxGrid1DBTableView1Cost: TcxGridDBColumn
          Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100':'
          DataBinding.FieldName = 'Cost'
          HeaderAlignmentHorz = taCenter
          MinWidth = 40
          Options.Editing = False
          Width = 82
        end
        object cxGrid1DBTableView1Discount: TcxGridDBColumn
          Caption = #1057#1082#1080#1076#1082#1072' (%):'
          DataBinding.FieldName = 'Discount'
          HeaderAlignmentHorz = taCenter
          Options.Editing = False
          Width = 76
        end
        object cxGrid1DBTableView1CostWitnDiscount: TcxGridDBColumn
          Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100' '#1089#1086' '#1089#1082#1080#1076#1082#1086#1081':'
          DataBinding.FieldName = 'CostWitnDiscount'
          HeaderAlignmentHorz = taCenter
          Options.Editing = False
          Width = 83
        end
        object cxGrid1DBTableView1BaseCost: TcxGridDBColumn
          Caption = #1041#1072#1079#1086#1074#1072#1103' '#1089#1090#1086#1080#1084#1086#1089#1090#1100':'
          DataBinding.FieldName = 'BaseCost'
          HeaderAlignmentHorz = taCenter
          Options.Editing = False
          Width = 78
        end
        object cxGrid1DBTableView1Active: TcxGridDBColumn
          Caption = #1040#1082#1090#1091#1072#1083#1100#1085#1086#1089#1090#1100':'
          DataBinding.FieldName = 'Active'
          HeaderAlignmentHorz = taCenter
          Options.Editing = False
          Width = 49
        end
      end
      object cxGrid1Level1: TcxGridLevel
        GridView = cxGrid1DBTableView1
      end
    end
    object DBMemo1: TDBMemo
      Left = 2
      Top = 292
      Width = 722
      Height = 68
      Anchors = [akLeft, akRight, akBottom]
      DataField = 'Description'
      DataSource = CostData
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsItalic]
      ParentFont = False
      ReadOnly = True
      ScrollBars = ssVertical
      TabOrder = 1
    end
    object cxGrid2: TcxGrid
      Left = 2
      Top = 378
      Width = 717
      Height = 262
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      object cxGrid2DBTableView1: TcxGridDBTableView
        Navigator.Buttons.CustomButtons = <>
        OnCellDblClick = cxGrid2DBTableView1CellDblClick
        DataController.DataSource = DiscData
        DataController.Summary.DefaultGroupSummaryItems = <>
        DataController.Summary.FooterSummaryItems = <>
        DataController.Summary.SummaryGroups = <>
        OptionsData.CancelOnExit = False
        OptionsData.Deleting = False
        OptionsData.DeletingConfirmation = False
        OptionsData.Editing = False
        OptionsData.Inserting = False
        OptionsView.CellAutoHeight = True
        OptionsView.ColumnAutoWidth = True
        OptionsView.GroupByBox = False
        OptionsView.Indicator = True
        Styles.OnGetContentStyle = cxGrid2DBTableView1StylesGetContentStyle
        object cxGrid2DBTableView1AllCycle: TcxGridDBColumn
          Caption = #1055#1077#1088#1080#1086#1076#1080#1095#1085#1086#1089#1090#1100':'
          DataBinding.FieldName = 'AllCycle'
          HeaderAlignmentHorz = taCenter
          Width = 130
        end
        object cxGrid2DBTableView1Period: TcxGridDBColumn
          Caption = #1055#1077#1088#1080#1086#1076' '#1087#1086#1076#1087#1080#1089#1082#1080':'
          DataBinding.FieldName = 'Period'
          Visible = False
          HeaderAlignmentHorz = taCenter
          VisibleForCustomization = False
          Width = 110
        end
        object cxGrid2DBTableView1MINdis: TcxGridDBColumn
          Caption = 'MIN:'
          DataBinding.FieldName = 'MINdis'
          HeaderAlignmentHorz = taCenter
          Width = 40
        end
        object cxGrid2DBTableView1MAXdis: TcxGridDBColumn
          Caption = 'MAX:'
          DataBinding.FieldName = 'MAXdis'
          HeaderAlignmentHorz = taCenter
          Width = 40
        end
        object cxGrid2DBTableView1Description: TcxGridDBColumn
          Caption = #1059#1089#1083#1086#1074#1080#1103' '#1072#1082#1094#1080#1080':'
          DataBinding.FieldName = 'Description'
          HeaderAlignmentHorz = taCenter
          Width = 297
        end
        object cxGrid2DBTableView1PStart: TcxGridDBColumn
          Caption = #1053#1072#1095#1072#1083#1086':'
          DataBinding.FieldName = 'PStart'
          HeaderAlignmentHorz = taCenter
          Width = 60
        end
        object cxGrid2DBTableView1PEnd: TcxGridDBColumn
          Caption = #1054#1082#1086#1085#1095#1072#1085#1080#1077':'
          DataBinding.FieldName = 'PEnd'
          HeaderAlignmentHorz = taCenter
          Width = 60
        end
        object cxGrid2DBTableView1Active: TcxGridDBColumn
          DataBinding.FieldName = 'Active'
          Visible = False
          VisibleForCustomization = False
        end
      end
      object cxGrid2Level1: TcxGridLevel
        GridView = cxGrid2DBTableView1
      end
    end
  end
  object RzGroupBox3: TRzGroupBox
    Left = 2
    Top = 4
    Width = 530
    Height = 100
    Caption = ' '#1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1073#1083#1086#1082#1072': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    Transparent = True
    object NameMemo: TRzMemo
      Left = 4
      Top = 16
      Width = 520
      Height = 80
      Alignment = taCenter
      CharCase = ecUpperCase
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      OnExit = NameMemoExit
    end
  end
  object RzGroupBox4: TRzGroupBox
    Left = 2
    Top = 190
    Width = 530
    Height = 90
    Caption = ' '#1059#1089#1083#1086#1074#1080#1103' '#1087#1086#1089#1090#1072#1074#1082#1080': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    Transparent = True
    object TermsMemo: TRzMemo
      Left = 4
      Top = 14
      Width = 520
      Height = 68
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -12
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      OnExit = TermsMemoExit
    end
  end
  object RzGroupBox5: TRzGroupBox
    Left = 2
    Top = 280
    Width = 530
    Height = 177
    Caption = ' '#1054#1087#1080#1089#1072#1085#1080#1077' '#1073#1083#1086#1082#1072': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    Transparent = True
    object DescRich: TRzRichEdit
      Left = 4
      Top = 16
      Width = 520
      Height = 153
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ScrollBars = ssVertical
      TabOrder = 0
      OnExit = DescRichExit
    end
  end
  object RzGroupBox6: TRzGroupBox
    Left = 2
    Top = 104
    Width = 530
    Height = 42
    Caption = ' '#1055#1077#1088#1080#1086#1076#1099' '#1087#1086#1076#1087#1080#1089#1082#1080' '#1076#1083#1103' '#1073#1083#1086#1082#1072':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 5
    Transparent = True
    object chcbPeriod: TcxCheckComboBox
      AlignWithMargins = True
      Left = 4
      Top = 16
      Margins.Left = 1
      Margins.Top = 0
      Margins.Right = 1
      Margins.Bottom = 0
      AutoSize = False
      BeepOnEnter = False
      ParentShowHint = False
      Properties.ShowEmptyText = False
      Properties.Items = <
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end
        item
        end>
      ShowHint = True
      Style.BorderColor = clWindowFrame
      Style.BorderStyle = ebsUltraFlat
      Style.Color = clWhite
      Style.Edges = [bLeft, bTop, bRight, bBottom]
      Style.HotTrack = True
      Style.LookAndFeel.Kind = lfFlat
      Style.LookAndFeel.NativeStyle = True
      Style.Shadow = False
      Style.TextStyle = []
      Style.TransparentBorder = True
      Style.ButtonStyle = btsDefault
      Style.ButtonTransparency = ebtNone
      StyleDisabled.BorderColor = clBtnShadow
      StyleDisabled.BorderStyle = ebsOffice11
      StyleDisabled.Color = clWindow
      StyleDisabled.LookAndFeel.Kind = lfFlat
      StyleDisabled.LookAndFeel.NativeStyle = True
      StyleDisabled.ButtonStyle = btsSimple
      StyleFocused.BorderStyle = ebsFlat
      StyleFocused.Color = clWhite
      StyleFocused.LookAndFeel.Kind = lfFlat
      StyleFocused.LookAndFeel.NativeStyle = True
      StyleFocused.ButtonStyle = btsDefault
      StyleHot.BorderColor = clWindowFrame
      StyleHot.BorderStyle = ebsFlat
      StyleHot.Color = clWhite
      StyleHot.LookAndFeel.Kind = lfFlat
      StyleHot.LookAndFeel.NativeStyle = True
      StyleHot.ButtonStyle = btsDefault
      TabOrder = 0
      OnExit = chcbPeriodExit
      Height = 21
      Width = 488
    end
    object CyclButt: TRzButton
      Left = 496
      Top = 16
      Width = 28
      Height = 21
      Hint = #1055#1086#1089#1084#1086#1090#1088#1077#1090#1100' ('#1076#1086#1073#1072#1074#1080#1090#1100') '#1085#1086#1074#1099#1081' '#1087#1077#1088#1080#1086#1076' '#1087#1086#1076#1087#1080#1089#1082#1080
      FrameColor = 7617536
      Caption = '. . .'
      Color = 15791348
      HotTrack = True
      ParentShowHint = False
      ShowHint = True
      TabOrder = 1
      OnClick = CyclButtClick
    end
  end
  object RzGroupBox7: TRzGroupBox
    Left = 2
    Top = 147
    Width = 530
    Height = 42
    Caption = ' '#1057#1086#1089#1090#1072#1074' '#1087#1086#1076#1087#1080#1089#1085#1086#1075#1086' '#1080#1085#1076#1077#1082#1089#1072': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    Transparent = True
    object CompositionPIBox: TcxCheckComboBox
      AlignWithMargins = True
      Left = 4
      Top = 16
      Margins.Left = 1
      Margins.Top = 0
      Margins.Right = 1
      Margins.Bottom = 0
      RepositoryItem = CheckComboBox1
      AutoSize = False
      BeepOnEnter = False
      ParentShowHint = False
      Properties.ShowEmptyText = False
      Properties.DropDownRows = 16
      Properties.Items = <
        item
          Description = #1041#1072#1079#1072' '#1044#1072#1085#1085#1099#1093
          Tag = 1
        end
        item
          Description = #1069#1083#1077#1082#1090#1088#1086#1085#1085#1072#1103' '#1074#1077#1088#1089#1080#1103' '#1078#1091#1088#1085#1072#1083#1072
          Tag = 2
        end
        item
          Description = #1055#1077#1095#1072#1090#1085#1072#1103' '#1074#1077#1088#1089#1080#1103' '#1078#1091#1088#1085#1072#1083#1072
          Tag = 4
        end
        item
          Description = #1042#1077#1073#1080#1085#1072#1088
          Tag = 8
        end
        item
          Description = #1057#1077#1084#1080#1085#1072#1088
          Tag = 16
        end
        item
          Description = #1050#1086#1085#1092#1077#1088#1077#1085#1094#1080#1103
          Tag = 32
        end
        item
          Description = 'CD '#1076#1080#1089#1082
          Tag = 64
        end
        item
          Description = #1057#1084#1077#1085#1085#1099#1077' '#1089#1090#1088#1072#1085#1080#1094#1099
          Tag = 128
        end
        item
          Description = #1043#1086#1088#1103#1095#1072#1103' '#1083#1080#1085#1080#1103
          Tag = 256
        end
        item
          Description = #1042#1080#1076#1077#1086#1083#1077#1082#1094#1080#1103
          Tag = 512
        end
        item
          Description = #1056#1077#1082#1083#1072#1084#1072' '#1074' '#1087#1077#1095#1072#1090#1085#1086#1084' '#1080#1079#1076#1072#1085#1080#1080
          Tag = 1024
        end
        item
          Description = #1055#1088#1086#1092#1077#1089#1089#1080#1086#1085#1072#1083#1100#1085#1099#1081' '#1052#1091#1083#1100#1090#1080#1084#1077#1076#1080#1081#1085#1099#1081' '#1046#1091#1088#1085#1072#1083
          Tag = 2048
        end
        item
          Description = #1044#1080#1089#1090#1072#1085#1094#1080#1086#1085#1085#1086#1077' '#1086#1073#1091#1095#1077#1085#1080#1077
          Tag = 4096
        end>
      ShowHint = True
      Style.BorderColor = clWindowFrame
      Style.BorderStyle = ebsUltraFlat
      Style.Color = clWhite
      Style.Edges = [bLeft, bTop, bRight, bBottom]
      Style.HotTrack = True
      Style.LookAndFeel.Kind = lfFlat
      Style.LookAndFeel.NativeStyle = True
      Style.Shadow = False
      Style.TextStyle = []
      Style.TransparentBorder = True
      Style.ButtonStyle = btsDefault
      Style.ButtonTransparency = ebtNone
      StyleDisabled.BorderColor = clBtnShadow
      StyleDisabled.BorderStyle = ebsOffice11
      StyleDisabled.Color = clWindow
      StyleDisabled.LookAndFeel.Kind = lfFlat
      StyleDisabled.LookAndFeel.NativeStyle = True
      StyleDisabled.ButtonStyle = btsSimple
      StyleFocused.BorderStyle = ebsFlat
      StyleFocused.Color = clWhite
      StyleFocused.LookAndFeel.Kind = lfFlat
      StyleFocused.LookAndFeel.NativeStyle = True
      StyleFocused.ButtonStyle = btsDefault
      StyleHot.BorderColor = clWindowFrame
      StyleHot.BorderStyle = ebsFlat
      StyleHot.Color = clWhite
      StyleHot.LookAndFeel.Kind = lfFlat
      StyleHot.LookAndFeel.NativeStyle = True
      StyleHot.ButtonStyle = btsDefault
      TabOrder = 0
      OnExit = chcbPeriodExit
      Height = 21
      Width = 520
    end
  end
  object RzGroupBox2: TRzGroupBox
    Left = 2
    Top = 460
    Width = 530
    Height = 189
    Caption = ' '#1055#1088#1086#1076#1091#1082#1090#1099', '#1074#1082#1083#1102#1095#1105#1085#1085#1099#1077' '#1074' '#1089#1086#1089#1090#1072#1074' '#1073#1083#1086#1082#1072': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 7
    Transparent = True
    object cxGrid3: TcxGrid
      Left = 4
      Top = 16
      Width = 520
      Height = 168
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      object cxGrid3DBTableView1: TcxGridDBTableView
        OnKeyDown = cxGrid3DBTableView1KeyDown
        Navigator.Buttons.CustomButtons = <>
        DataController.DataSource = ProdData
        DataController.Summary.DefaultGroupSummaryItems = <>
        DataController.Summary.FooterSummaryItems = <>
        DataController.Summary.SummaryGroups = <>
        OptionsData.CancelOnExit = False
        OptionsData.Deleting = False
        OptionsData.DeletingConfirmation = False
        OptionsData.Editing = False
        OptionsData.Inserting = False
        OptionsView.NoDataToDisplayInfoText = #1053#1077#1090' '#1074#1099#1073#1088#1072#1085#1085#1099#1093' '#1076#1083#1103' '#1073#1083#1086#1082#1072' '#1087#1088#1086#1076#1091#1082#1090#1086#1074
        OptionsView.CellAutoHeight = True
        OptionsView.ColumnAutoWidth = True
        OptionsView.GroupByBox = False
        OptionsView.Indicator = True
        object cxGrid3DBTableView1idn: TcxGridDBColumn
          Caption = 'ProductId:'
          DataBinding.FieldName = 'idn'
          HeaderAlignmentHorz = taCenter
        end
        object cxGrid3DBTableView1iText: TcxGridDBColumn
          Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1087#1088#1086#1076#1091#1082#1090#1072':'
          DataBinding.FieldName = 'iText'
          HeaderAlignmentHorz = taCenter
          Width = 424
        end
      end
      object cxGrid3Level1: TcxGridLevel
        GridView = cxGrid3DBTableView1
      end
    end
  end
  object BlockComm: TADOCommand
    Connection = MainForm.CallCenterConnect
    Parameters = <
      item
        Name = 'NewIdn'
        DataType = ftInteger
        Direction = pdReturnValue
        Value = 0
      end>
    Left = 824
    Top = 72
  end
  object ChckQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT DISTINCT lb.iText'
      '  FROM dbo.ProduceBlock AS pb'
      
        '       LEFT OUTER JOIN dbo.spl_LbText AS lb ON (lb.Idn = pb.idMB' +
        'lockName)'
      'WHERE lb.iText = '#39#39)
    Left = 768
    Top = 72
    object ChckQueriText: TWideMemoField
      FieldName = 'iText'
      BlobType = ftWideMemo
    end
  end
  object CostQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'SELECT bc.idn, bc.BlockId, pb.idn AS CycleId, pb.Description AS ' +
        'Cycle, bc.Cost, bc.Discount, bc.CostWitnDiscount,'
      '       bc.BaseCost, bc.Description, bc.Dept, bc.DateIns,'
      
        '       A1.auFamUser + '#39' '#39' + SUBSTRING(A1.auNamUser, 1,1) + '#39'.'#39' +' +
        ' SUBSTRING(A1.auOtcUser, 1,1) + '#39'.'#39' AS Creator,'
      '       bc.DateEdit, bc.Active,'
      
        '       A2.auFamUser + '#39' '#39' + SUBSTRING(A2.auNamUser, 1,1) + '#39'.'#39' +' +
        ' SUBSTRING(A2.auOtcUser, 1,1) + '#39'.'#39' AS Editor'
      '  FROM dbo.ProduceBlockCost AS bc'
      
        '       LEFT OUTER JOIN dbo.ProduceBlockCycle AS pb ON pb.idn = b' +
        'c.CycleId'
      '       LEFT OUTER JOIN dbo.aa_Users AS A1 ON bc.IdIns = A1.auId'
      '       LEFT OUTER JOIN dbo.aa_Users AS A2 ON bc.IdEdit = A2.auId')
    Left = 936
    Top = 120
    object CostQueridn: TAutoIncField
      FieldName = 'idn'
      ReadOnly = True
    end
    object CostQuerBlockId: TIntegerField
      FieldName = 'BlockId'
    end
    object CostQuerCycleId: TAutoIncField
      FieldName = 'CycleId'
      ReadOnly = True
    end
    object CostQuerCycle: TWideStringField
      FieldName = 'Cycle'
      Size = 128
    end
    object CostQuerCost: TBCDField
      FieldName = 'Cost'
      DisplayFormat = '### ##0.00 '#1088'.'
      Precision = 19
    end
    object CostQuerDiscount: TIntegerField
      FieldName = 'Discount'
    end
    object CostQuerCostWitnDiscount: TBCDField
      FieldName = 'CostWitnDiscount'
      DisplayFormat = '### ##0.00 '#1088'.'
      Precision = 19
    end
    object CostQuerBaseCost: TBooleanField
      FieldName = 'BaseCost'
    end
    object CostQuerDept: TIntegerField
      FieldName = 'Dept'
    end
    object CostQuerDescription: TWideStringField
      FieldName = 'Description'
      Size = 255
    end
    object CostQuerDateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object CostQuerCreator: TStringField
      FieldName = 'Creator'
      ReadOnly = True
      Size = 29
    end
    object CostQuerDateEdit: TDateTimeField
      FieldName = 'DateEdit'
    end
    object CostQuerEditor: TStringField
      FieldName = 'Editor'
      ReadOnly = True
      Size = 29
    end
    object CostQuerActive: TBooleanField
      FieldName = 'Active'
    end
  end
  object CostData: TDataSource
    DataSet = CostQuer
    OnDataChange = CostDataDataChange
    Left = 984
    Top = 120
  end
  object DiscQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'SELECT L.ProduceBlockId, L.ProduceBlockCycleId, L.ProduceBlockDi' +
        'scId, bd.PStart, bd.PEnd, bd.MINdis, bd.MAXdis,'
      
        '       bd.Description, bd.AllCycle, bc.Description AS Period, bd' +
        '.DateIns, bd.IdIns, bd.DateEdit, bd.IdEdit, bd.Active'
      'FROM dbo.ProduceBlockDiscountLink AS L'
      
        '     LEFT OUTER JOIN dbo.ProduceBlockDiscount AS bd ON L.Produce' +
        'BlockDiscId = bd.idn'
      
        '     LEFT OUTER JOIN dbo.ProduceBlockCycle AS bc ON bd.CycleId =' +
        ' bc.IdFAdv'
      'WHERE L.ProduceBlockId = -1')
    Left = 936
    Top = 72
    object DiscQuerProduceBlockId: TIntegerField
      FieldName = 'ProduceBlockId'
    end
    object DiscQuerProduceBlockCycleId: TIntegerField
      FieldName = 'ProduceBlockCycleId'
    end
    object DiscQuerProduceBlockDiscId: TIntegerField
      FieldName = 'ProduceBlockDiscId'
    end
    object DiscQuerPStart: TDateTimeField
      FieldName = 'PStart'
    end
    object DiscQuerPEnd: TDateTimeField
      FieldName = 'PEnd'
    end
    object DiscQuerMINdis: TFloatField
      FieldName = 'MINdis'
      DisplayFormat = '0.00'
    end
    object DiscQuerMAXdis: TFloatField
      FieldName = 'MAXdis'
      DisplayFormat = '0.00'
    end
    object DiscQuerAllCycle: TWideMemoField
      FieldName = 'AllCycle'
      BlobType = ftWideMemo
    end
    object DiscQuerDescription: TWideStringField
      FieldName = 'Description'
      Size = 128
    end
    object DiscQuerPeriod: TWideStringField
      FieldName = 'Period'
      Size = 100
    end
    object DiscQuerDateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object DiscQuerIdIns: TIntegerField
      FieldName = 'IdIns'
    end
    object DiscQuerDateEdit: TDateTimeField
      FieldName = 'DateEdit'
    end
    object DiscQuerIdEdit: TIntegerField
      FieldName = 'IdEdit'
    end
    object DiscQuerActive: TBooleanField
      FieldName = 'Active'
    end
  end
  object DiscData: TDataSource
    DataSet = DiscQuer
    Left = 984
    Top = 72
  end
  object ListQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT IdFAdv, Description FROM dbo.ProduceBlockCycle')
    Left = 880
    Top = 120
    object ListQuerIdFAdv: TIntegerField
      FieldName = 'IdFAdv'
    end
    object ListQuerDescription: TWideStringField
      FieldName = 'Description'
      Size = 100
    end
  end
  object StyleRep1: TcxStyleRepository
    Left = 688
    Top = 120
    PixelsPerInch = 96
    object NotActive: TcxStyle
      AssignedValues = [svColor, svTextColor]
      Color = clBtnFace
      TextColor = clMenuHighlight
    end
    object Normal: TcxStyle
      AssignedValues = [svColor, svTextColor]
      Color = clHighlight
      TextColor = clWhite
    end
  end
  object InsBQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT idn'
      'FROM dbo.ProduceBlock'
      'WHERE tmpidn = '#39'00000000-0000-0000-0000-000000000000'#39)
    Left = 880
    Top = 72
    object InsBQueridn: TAutoIncField
      FieldName = 'idn'
      ReadOnly = True
    end
  end
  object cxEditRepository1: TcxEditRepository
    Left = 688
    Top = 72
    object CheckComboBox1: TcxEditRepositoryCheckComboBox
      Properties.DropDownRows = 16
      Properties.Items = <
        item
          Description = #1041#1072#1079#1072' '#1044#1072#1085#1085#1099#1093
          Tag = 1
        end
        item
          Description = #1069#1083#1077#1082#1090#1088#1086#1085#1085#1072#1103' '#1074#1077#1088#1089#1080#1103' '#1078#1091#1088#1085#1072#1083#1072
          Tag = 2
        end
        item
          Description = #1055#1077#1095#1072#1090#1085#1072#1103' '#1074#1077#1088#1089#1080#1103' '#1078#1091#1088#1085#1072#1083#1072
          Tag = 4
        end
        item
          Description = #1042#1077#1073#1080#1085#1072#1088
          Tag = 8
        end
        item
          Description = #1057#1077#1084#1080#1085#1072#1088
          Tag = 16
        end
        item
          Description = #1050#1086#1085#1092#1077#1088#1077#1085#1094#1080#1103
          Tag = 32
        end
        item
          Description = 'CD '#1076#1080#1089#1082
          Tag = 64
        end
        item
          Description = #1057#1084#1077#1085#1085#1099#1077' '#1089#1090#1088#1072#1085#1080#1094#1099
          Tag = 128
        end
        item
          Description = #1043#1086#1088#1103#1095#1072#1103' '#1083#1080#1085#1080#1103
          Tag = 256
        end
        item
          Description = #1042#1080#1076#1077#1086#1083#1077#1082#1094#1080#1103
          Tag = 512
        end
        item
          Description = #1056#1077#1082#1083#1072#1084#1072' '#1074' '#1087#1077#1095#1072#1090#1085#1086#1084' '#1080#1079#1076#1072#1085#1080#1080
          Tag = 1024
        end
        item
          Description = #1055#1088#1086#1092#1077#1089#1089#1080#1086#1085#1072#1083#1100#1085#1099#1081' '#1052#1091#1083#1100#1090#1080#1084#1077#1076#1080#1081#1085#1099#1081' '#1046#1091#1088#1085#1072#1083
          Tag = 2048
        end
        item
          Description = #1044#1080#1089#1090#1072#1085#1094#1080#1086#1085#1085#1086#1077' '#1086#1073#1091#1095#1077#1085#1080#1077
          Tag = 4096
        end>
    end
  end
  object q6Quer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT *'
      '  FROM dbo.ProduceBlockCost'
      ' WHERE BlockId = -1'
      '   AND DateDel IS NULL')
    Left = 1040
    Top = 72
    object q6QuerBlockId: TIntegerField
      FieldName = 'BlockId'
    end
    object q6QuerCycleId: TIntegerField
      FieldName = 'CycleId'
    end
    object q6QuerCost: TBCDField
      FieldName = 'Cost'
      Precision = 19
    end
    object q6QuerDiscount: TIntegerField
      FieldName = 'Discount'
    end
    object q6QuerCostWitnDiscount: TBCDField
      FieldName = 'CostWitnDiscount'
      Precision = 19
    end
    object q6QuerBaseCost: TBooleanField
      FieldName = 'BaseCost'
    end
    object q6QuerDescription: TWideStringField
      FieldName = 'Description'
      Size = 255
    end
    object q6QuerDept: TIntegerField
      FieldName = 'Dept'
    end
    object q6QuerDateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object q6QuerDateEdit: TDateTimeField
      FieldName = 'DateEdit'
    end
    object q6QuerDateDel: TDateTimeField
      FieldName = 'DateDel'
    end
    object q6QuerIdDel: TIntegerField
      FieldName = 'IdDel'
    end
    object q6QuerActive: TBooleanField
      FieldName = 'Active'
    end
  end
  object q7Quer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT *'
      '  FROM dbo.ProduceBlockDiscount'
      ' WHERE BlockId = -1'
      '   AND DateDel IS NULL')
    Left = 1096
    Top = 72
    object q7QuerBlockId: TIntegerField
      FieldName = 'BlockId'
    end
    object q7QuerPStart: TDateTimeField
      FieldName = 'PStart'
    end
    object q7QuerPEnd: TDateTimeField
      FieldName = 'PEnd'
    end
    object q7QuerMINdis: TFloatField
      FieldName = 'MINdis'
    end
    object q7QuerMAXdis: TFloatField
      FieldName = 'MAXdis'
    end
    object q7QuerDescription: TWideStringField
      FieldName = 'Description'
      Size = 128
    end
    object q7QuerCycleId: TIntegerField
      FieldName = 'CycleId'
    end
    object q7QuerAllCycle: TWideMemoField
      FieldName = 'AllCycle'
      BlobType = ftWideMemo
    end
    object q7QuerDateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object q7QuerDateEdit: TDateTimeField
      FieldName = 'DateEdit'
    end
    object q7QuerDateDel: TDateTimeField
      FieldName = 'DateDel'
    end
    object q7QuerIdDel: TIntegerField
      FieldName = 'IdDel'
    end
    object q7QuerActive: TBooleanField
      FieldName = 'Active'
    end
  end
  object CostComm: TADOCommand
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    Left = 1040
    Top = 120
  end
  object DiscComm: TADOCommand
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    Left = 1096
    Top = 120
  end
  object ProdQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT bl.idn AS PBLidn, pc.idn, lb.iText'
      'FROM dbo.ProduceBlockLink AS bl'
      
        '     LEFT OUTER JOIN dbo.all_AdvProduceClass AS pc ON (pc.idn = ' +
        'bl.IdProduct)'
      
        '     LEFT OUTER JOIN dbo.spl_LbText512       AS lb ON (lb.Idn = ' +
        'pc.id512Name)'
      'WHERE IdBlock = -1'
      '  AND lb.DateDel IS NULL'
      '  AND bl.DateDel IS NULL')
    Left = 768
    Top = 120
    object ProdQueridn: TAutoIncField
      FieldName = 'idn'
      ReadOnly = True
    end
    object ProdQueriText: TStringField
      FieldName = 'iText'
      Size = 512
    end
    object ProdQuerPBLidn: TAutoIncField
      FieldName = 'PBLidn'
      ReadOnly = True
    end
  end
  object ProdData: TDataSource
    DataSet = ProdQuer
    Left = 824
    Top = 120
  end
  object q8Quer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT IdBlock, IdProduct'
      '  FROM dbo.ProduceBlockLink'
      ' WHERE DateDel IS NULL'
      '   AND IdBlock = -1')
    Left = 1152
    Top = 72
    object q8QuerIdBlock: TIntegerField
      FieldName = 'IdBlock'
    end
    object q8QuerIdProduct: TIntegerField
      FieldName = 'IdProduct'
    end
  end
  object ProdComm: TADOCommand
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    Left = 1152
    Top = 120
  end
  object DelPComm: TADOCommand
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    Left = 936
    Top = 176
  end
end
