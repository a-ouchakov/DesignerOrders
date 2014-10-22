object FrEditRaspDetailComplect: TFrEditRaspDetailComplect
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1085#1080#1077' '#1082#1086#1084#1087#1083#1077#1082#1090#1072
  ClientHeight = 548
  ClientWidth = 1043
  Color = 15329769
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poMainFormCenter
  OnCloseQuery = FormCloseQuery
  OnKeyDown = FormKeyDown
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 522
    Width = 1043
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
      ExplicitTop = 4
    end
    object RzSpacer4: TRzSpacer
      Left = 155
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alLeft
      ExplicitLeft = 760
      ExplicitTop = -4
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
      Left = 892
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
      Left = 888
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
  object RzSplitter1: TRzSplitter
    Left = 0
    Top = 0
    Width = 1043
    Height = 522
    Orientation = orVertical
    Position = 77
    Percent = 15
    SplitterWidth = 0
    Align = alClient
    TabOrder = 1
    BarSize = (
      0
      77
      1043
      77)
    UpperLeftControls = (
      RzGroupBox2)
    LowerRightControls = (
      RzSplitter2)
    object RzGroupBox2: TRzGroupBox
      Left = 0
      Top = 0
      Width = 1043
      Height = 77
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alClient
      Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1082#1086#1084#1087#1083#1077#1082#1090#1072
      Color = 15329769
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 0
      object meNameComplect: TRzMemo
        Left = 2
        Top = 15
        Width = 945
        Height = 60
        Align = alClient
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
        FrameHotTrack = True
        FrameVisible = True
      end
      object btCreateNameComplect: TRzButton
        AlignWithMargins = True
        Left = 950
        Top = 18
        Width = 88
        Height = 54
        FrameColor = 7617536
        Align = alRight
        Caption = #1057#1092#1086#1088#1084#1080#1088#1086#1074#1072#1090#1100' '#1085#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1082#1086#1084#1087#1083#1077#1082#1090#1072
        Color = 15791348
        HotTrack = True
        TabOrder = 1
        OnClick = btCreateNameComplectClick
      end
    end
    object RzSplitter2: TRzSplitter
      Left = 0
      Top = 0
      Width = 1043
      Height = 445
      Orientation = orVertical
      Position = 226
      Percent = 51
      UpperLeft.Color = 15329769
      LowerRight.Color = 15329769
      HotSpotVisible = True
      HotSpotColor = clYellow
      SplitterWidth = 7
      Align = alClient
      Color = clBtnShadow
      TabOrder = 0
      BarSize = (
        0
        226
        1043
        233)
      UpperLeftControls = (
        cxGrid1
        RzPanel7)
      LowerRightControls = (
        cxGridEmplUser)
      object cxGrid1: TcxGrid
        AlignWithMargins = True
        Left = 0
        Top = 42
        Width = 1043
        Height = 184
        Margins.Left = 0
        Margins.Top = 2
        Margins.Right = 0
        Margins.Bottom = 0
        Align = alClient
        BevelInner = bvNone
        BevelOuter = bvNone
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
        LookAndFeel.Kind = lfFlat
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
              Column = cxGridDBColumn15
            end
            item
              Format = ',0.0000%;-,0.0000%'
              Kind = skSum
              Position = spFooter
              Column = cxGridDBColumn16
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
              Column = cxGridDBColumn15
            end
            item
              Format = ',0.0000%;-,0.0000%'
              Kind = skSum
              Column = cxGridDBColumn16
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
          object cxGridDBColumn9: TcxGridDBColumn
            DataBinding.FieldName = 'idn'
            Visible = False
          end
          object cxGridDBColumn10: TcxGridDBColumn
            DataBinding.FieldName = 'idnp'
            Visible = False
          end
          object cxGridDBColumn11: TcxGridDBColumn
            DataBinding.FieldName = 'CallActionName'
            Visible = False
            Width = 445
          end
          object cxGridDBColumn12: TcxGridDBColumn
            DataBinding.FieldName = 'PNameR'
            Visible = False
            Width = 299
          end
          object cxGridDBColumn13: TcxGridDBColumn
            DataBinding.FieldName = 'NameR'
            Width = 316
          end
          object cxGridDBColumn14: TcxGridDBColumn
            DataBinding.FieldName = 'auFamIO'
            Width = 102
          end
          object cxGridDBColumn15: TcxGridDBColumn
            DataBinding.FieldName = 'ClCol'
            Width = 369
          end
          object cxGridDBColumn16: TcxGridDBColumn
            DataBinding.FieldName = 'ClPr'
            PropertiesClassName = 'TcxCurrencyEditProperties'
            Properties.DisplayFormat = ',0.0000%;-,0.0000%'
            Width = 362
          end
        end
        object cxGridDBBandedTableView1: TcxGridDBBandedTableView
          OnDblClick = cxGridDBBandedTableView1DblClick
          Navigator.Buttons.CustomButtons = <>
          DataController.DataSource = DSEditRaspDetailComplecIndex
          DataController.Summary.DefaultGroupSummaryItems = <
            item
              Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
              Position = spFooter
            end
            item
              Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
              Position = spFooter
            end
            item
              Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
              Position = spFooter
            end
            item
              Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
            end
            item
              Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
            end
            item
              Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
            end>
          DataController.Summary.FooterSummaryItems = <
            item
              Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
              Kind = skSum
              FieldName = 'CostWithNDS'
            end
            item
              Format = ',0.00'#1088#39'.'#39';-,0.00'#1088#39'.'#39
              Kind = skSum
              FieldName = 'CostWithoutNDS'
            end>
          DataController.Summary.SummaryGroups = <>
          OptionsCustomize.ColumnsQuickCustomization = True
          OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
          OptionsCustomize.BandMoving = False
          OptionsView.CellAutoHeight = True
          OptionsView.ColumnAutoWidth = True
          OptionsView.GroupByBox = False
          OptionsView.BandHeaders = False
          Styles.Inactive = cxStyle1
          Styles.Indicator = cxStyle1
          Styles.BandHeader = cxStyle1
          Bands = <
            item
              Width = 899
            end>
          object cxGridDBBandedTableView1NameRaspDetail: TcxGridDBBandedColumn
            Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1087#1086#1076#1087#1080#1089#1085#1086#1075#1086' '#1080#1085#1076#1077#1082#1089#1072
            DataBinding.FieldName = 'NameRaspDetail'
            Options.Editing = False
            Options.Moving = False
            Styles.Header = cxStyle1
            Width = 404
            Position.BandIndex = 0
            Position.ColIndex = 0
            Position.RowIndex = 0
          end
          object cxGridDBBandedTableView1fAdv: TcxGridDBBandedColumn
            Caption = #1055#1077#1088#1080#1086#1076
            DataBinding.FieldName = 'fAdv'
            Options.Editing = False
            Options.Moving = False
            Styles.Header = cxStyle1
            Width = 76
            Position.BandIndex = 0
            Position.ColIndex = 1
            Position.RowIndex = 0
          end
          object cxGridDBBandedTableView1fAdvMIN: TcxGridDBBandedColumn
            Caption = 'MIN '#1087#1077#1080#1086#1076
            DataBinding.FieldName = 'fAdvMIN'
            Options.Editing = False
            Options.Moving = False
            Styles.Header = cxStyle1
            Width = 77
            Position.BandIndex = 0
            Position.ColIndex = 2
            Position.RowIndex = 0
          end
          object cxGridDBBandedTableView1CostWithoutNDS: TcxGridDBBandedColumn
            Caption = #1062#1077#1085#1072' '#1073#1077#1079' '#1053#1044#1057
            DataBinding.FieldName = 'CostWithoutNDS'
            PropertiesClassName = 'TcxCurrencyEditProperties'
            Options.Editing = False
            Options.Moving = False
            Styles.Header = cxStyle1
            Width = 95
            Position.BandIndex = 0
            Position.ColIndex = 3
            Position.RowIndex = 0
          end
          object cxGridDBBandedTableView1CostWithNDS: TcxGridDBBandedColumn
            Caption = #1062#1077#1085#1072' '#1089' '#1053#1044#1057
            DataBinding.FieldName = 'CostWithNDS'
            PropertiesClassName = 'TcxCurrencyEditProperties'
            Options.Editing = False
            Options.Moving = False
            Styles.Header = cxStyle1
            Width = 82
            Position.BandIndex = 0
            Position.ColIndex = 4
            Position.RowIndex = 0
          end
          object cxGridDBBandedTableView1CostNDS: TcxGridDBBandedColumn
            Caption = #1062#1077#1085#1072' '#1053#1044#1057
            DataBinding.FieldName = 'CostNDS'
            PropertiesClassName = 'TcxCurrencyEditProperties'
            Options.Editing = False
            Options.Moving = False
            Styles.Header = cxStyle1
            Width = 101
            Position.BandIndex = 0
            Position.ColIndex = 6
            Position.RowIndex = 0
          end
          object cxGridDBBandedTableView1ProcNDS: TcxGridDBBandedColumn
            Caption = '%'#1053#1044#1057
            DataBinding.FieldName = 'ProcNDS'
            PropertiesClassName = 'TcxCurrencyEditProperties'
            Options.Editing = False
            Options.Moving = False
            Styles.Header = cxStyle1
            Width = 72
            Position.BandIndex = 0
            Position.ColIndex = 5
            Position.RowIndex = 0
          end
          object cxGridDBBandedTableView1ColPI: TcxGridDBBandedColumn
            Caption = #1050#1086#1083'-'#1074#1086' '#1101#1082#1079#1077#1084#1087#1083#1103#1088#1086#1074':'
            DataBinding.FieldName = 'ColPI'
            HeaderAlignmentHorz = taCenter
            Options.Editing = False
            Width = 122
            Position.BandIndex = 0
            Position.ColIndex = 7
            Position.RowIndex = 0
          end
        end
        object cxGridLevel2: TcxGridLevel
          GridView = cxGridDBBandedTableView1
        end
      end
      object RzPanel7: TRzPanel
        Left = 0
        Top = 0
        Width = 1043
        Height = 40
        Align = alTop
        BorderInner = fsFlat
        BorderOuter = fsNone
        Color = 15329769
        GradientColorStyle = gcsCustom
        GradientColorStop = clSkyBlue
        TabOrder = 1
        object RzSpacer10: TRzSpacer
          Left = 1
          Top = 1
          Width = 4
          Height = 38
          Grooved = True
          Align = alLeft
          ExplicitLeft = -3
          ExplicitTop = 39
          ExplicitHeight = 26
        end
        object btInsEditRaspDetailComplecIndex: TRzToolButton
          Left = 5
          Top = 1
          Width = 118
          Height = 38
          Margins.Left = 1
          Margins.Top = 1
          Margins.Right = 1
          Margins.Bottom = 1
          GradientColorStyle = gcsMSOffice
          ImageIndex = 84
          Images = FrBisniessMenedger.ImageList1
          ShowCaption = True
          UseToolbarButtonLayout = False
          UseToolbarButtonSize = False
          UseToolbarShowCaption = False
          UseToolbarVisualStyle = False
          VisualStyle = vsGradient
          Align = alLeft
          Caption = #1042#1082#1083#1102#1095#1080#1090#1100' '#1087#1086#1076#1087#1080#1089#1085#1086#1081' '#1080#1085#1076#1077#1082#1089
          OnClick = btInsEditRaspDetailComplecIndexClick
        end
        object RzSpacer35: TRzSpacer
          Left = 245
          Top = 1
          Width = 4
          Height = 38
          Grooved = True
          Align = alLeft
          ExplicitLeft = 305
          ExplicitTop = -1
        end
        object RzSpacer9: TRzSpacer
          Left = 123
          Top = 1
          Width = 4
          Height = 38
          Grooved = True
          Align = alLeft
          ExplicitLeft = 97
          ExplicitTop = -1
          ExplicitHeight = 24
        end
        object btDelEditRaspDetailComplecIndex: TRzToolButton
          Left = 127
          Top = 1
          Width = 118
          Height = 38
          Margins.Left = 1
          Margins.Top = 1
          Margins.Right = 1
          Margins.Bottom = 1
          GradientColorStyle = gcsMSOffice
          ImageIndex = 86
          Images = FrBisniessMenedger.ImageList1
          ShowCaption = True
          UseToolbarButtonLayout = False
          UseToolbarButtonSize = False
          UseToolbarShowCaption = False
          UseToolbarVisualStyle = False
          VisualStyle = vsGradient
          Align = alLeft
          Caption = #1048#1089#1082#1083#1102#1095#1080#1090#1100' '#1087#1086#1076#1087#1080#1089#1082#1085#1086#1081' '#1080#1085#1076#1077#1082#1089
          OnClick = btDelEditRaspDetailComplecIndexClick
        end
        object btInsRaspDetailIndex: TRzToolButton
          Left = 249
          Top = 1
          Width = 118
          Height = 38
          Margins.Left = 1
          Margins.Top = 1
          Margins.Right = 1
          Margins.Bottom = 1
          GradientColorStyle = gcsMSOffice
          ImageIndex = 2
          Images = FrBisniessMenedger.ImageList1
          ShowCaption = True
          UseToolbarButtonLayout = False
          UseToolbarButtonSize = False
          UseToolbarShowCaption = False
          UseToolbarVisualStyle = False
          VisualStyle = vsGradient
          Align = alLeft
          Caption = #1053#1086#1074#1099#1081' '#1087#1086#1076#1087#1080#1089#1085#1086#1081'  '#1080#1085#1076#1077#1082#1089
          OnClick = btInsRaspDetailIndexClick
        end
        object RzSpacer1: TRzSpacer
          Left = 367
          Top = 1
          Width = 4
          Height = 38
          Grooved = True
          Align = alLeft
          ExplicitLeft = 3
          ExplicitTop = 42
          ExplicitHeight = 1189
        end
        object RzGroupBox9: TRzGroupBox
          Left = 923
          Top = 1
          Width = 119
          Height = 38
          Margins.Left = 1
          Margins.Top = 1
          Margins.Right = 1
          Margins.Bottom = 1
          Align = alRight
          Caption = #1062#1077#1085#1072' '#1053#1044#1057' '#1082#1086#1084#1087#1083#1077#1082#1090#1072
          GradientColorStyle = gcsCustom
          GradientColorStop = clSkyBlue
          GroupStyle = gsCustom
          TabOrder = 0
          Transparent = True
          object edCostNDS: TRzNumericEdit
            Left = 2
            Top = 15
            Width = 95
            Height = 21
            Align = alLeft
            Alignment = taLeftJustify
            Color = clInfoBk
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = []
            FrameHotTrack = True
            FrameHotStyle = fsFlat
            FrameVisible = True
            ParentFont = False
            ReadOnly = True
            TabOrder = 0
            IntegersOnly = False
            DisplayFormat = ',0.0000'#1088#39'.'#39';-,0.0000'#1088#39'.'#39
            ExplicitHeight = 24
          end
        end
        object RzGroupBox1: TRzGroupBox
          Left = 667
          Top = 1
          Width = 134
          Height = 38
          Margins.Left = 1
          Margins.Top = 1
          Margins.Right = 1
          Margins.Bottom = 1
          Align = alRight
          Caption = #1062#1077#1085#1072' '#1082#1086#1084#1087#1083#1077#1082#1090#1072' '#1073#1077#1079' '#1053#1044#1057
          GradientColorStyle = gcsCustom
          GradientColorStop = clSkyBlue
          GroupStyle = gsCustom
          TabOrder = 1
          Transparent = True
          object edCostWithoutNDS: TRzNumericEdit
            Left = 2
            Top = 15
            Width = 95
            Height = 21
            Align = alLeft
            Alignment = taLeftJustify
            Color = clInfoBk
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = []
            FrameHotTrack = True
            FrameHotStyle = fsFlat
            FrameVisible = True
            ParentFont = False
            ReadOnly = True
            TabOrder = 0
            IntegersOnly = False
            DisplayFormat = ',0.0000'#1088#39'.'#39';-,0.0000'#1088#39'.'#39
            ExplicitHeight = 24
          end
        end
        object RzGroupBox3: TRzGroupBox
          Left = 801
          Top = 1
          Width = 122
          Height = 38
          Margins.Left = 1
          Margins.Top = 1
          Margins.Right = 1
          Margins.Bottom = 1
          Align = alRight
          Caption = #1062#1077#1085#1072' '#1082#1086#1084#1087#1083#1077#1082#1090#1072' '#1089' '#1053#1044#1057
          GradientColorStyle = gcsCustom
          GradientColorStop = clSkyBlue
          GroupStyle = gsCustom
          TabOrder = 2
          Transparent = True
          object edCostWithNDS: TRzNumericEdit
            Left = 2
            Top = 15
            Width = 95
            Height = 21
            Align = alLeft
            Alignment = taLeftJustify
            Color = clInfoBk
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = []
            FrameHotTrack = True
            FrameHotStyle = fsFlat
            FrameVisible = True
            ParentFont = False
            ReadOnly = True
            TabOrder = 0
            IntegersOnly = False
            DisplayFormat = ',0.0000'#1088#39'.'#39';-,0.0000'#1088#39'.'#39
            ExplicitHeight = 24
          end
        end
        object RzGroupBox4: TRzGroupBox
          Left = 371
          Top = 1
          Width = 154
          Height = 38
          Margins.Left = 1
          Margins.Top = 1
          Margins.Right = 1
          Margins.Bottom = 1
          Align = alRight
          Caption = #1062#1077#1085#1072' '#1079#1072' MIN '#1087#1077#1088#1080#1086#1076' '#1073#1077#1079' '#1053#1044#1057
          GradientColorStyle = gcsCustom
          GradientColorStop = clSkyBlue
          GroupStyle = gsCustom
          TabOrder = 3
          Transparent = True
          object edCostMINWithoutNDS: TRzNumericEdit
            Left = 2
            Top = 15
            Width = 95
            Height = 21
            Align = alLeft
            Alignment = taLeftJustify
            Color = clInfoBk
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = []
            FrameHotTrack = True
            FrameHotStyle = fsFlat
            FrameVisible = True
            ParentFont = False
            ReadOnly = True
            TabOrder = 0
            IntegersOnly = False
            DisplayFormat = ',0.0000'#1088#39'.'#39';-,0.0000'#1088#39'.'#39
            ExplicitHeight = 24
          end
        end
        object RzGroupBox5: TRzGroupBox
          Left = 525
          Top = 1
          Width = 142
          Height = 38
          Margins.Left = 1
          Margins.Top = 1
          Margins.Right = 1
          Margins.Bottom = 1
          Align = alRight
          Caption = #1062#1077#1085#1072' '#1079#1072' MIN '#1087#1077#1088#1080#1086#1076' '#1089' '#1053#1044#1057
          GradientColorStyle = gcsCustom
          GradientColorStop = clSkyBlue
          GroupStyle = gsCustom
          TabOrder = 4
          Transparent = True
          object edCostMINWithNDS: TRzNumericEdit
            Left = 2
            Top = 15
            Width = 95
            Height = 21
            Align = alLeft
            Alignment = taLeftJustify
            Color = clInfoBk
            Font.Charset = RUSSIAN_CHARSET
            Font.Color = clWindowText
            Font.Height = -13
            Font.Name = 'Tahoma'
            Font.Style = []
            FrameHotTrack = True
            FrameHotStyle = fsFlat
            FrameVisible = True
            ParentFont = False
            ReadOnly = True
            TabOrder = 0
            IntegersOnly = False
            DisplayFormat = ',0.0000'#1088#39'.'#39';-,0.0000'#1088#39'.'#39
            ExplicitHeight = 24
          end
        end
      end
      object cxGridEmplUser: TcxGrid
        Left = 0
        Top = 0
        Width = 1043
        Height = 212
        Margins.Left = 2
        Margins.Top = 2
        Margins.Right = 2
        Margins.Bottom = 2
        Align = alClient
        BevelInner = bvNone
        BevelOuter = bvNone
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
        LookAndFeel.Kind = lfFlat
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
          DataController.DataSource = DSEditRaspDetailComplectNE
          DataController.Summary.DefaultGroupSummaryItems = <>
          DataController.Summary.FooterSummaryItems = <>
          DataController.Summary.SummaryGroups = <>
          OptionsCustomize.ColumnsQuickCustomization = True
          OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
          OptionsCustomize.BandMoving = False
          OptionsView.CellAutoHeight = True
          OptionsView.ColumnAutoWidth = True
          OptionsView.GroupByBox = False
          OptionsView.BandHeaders = False
          Styles.BandHeader = cxStyle1
          Bands = <
            item
              Width = 878
            end>
          object cxGridTableViewEmplUserIdn: TcxGridDBBandedColumn
            DataBinding.FieldName = 'Idn'
            Visible = False
            Position.BandIndex = 0
            Position.ColIndex = 0
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserNameRaspDetail: TcxGridDBBandedColumn
            Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1085#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1085#1099#1093' '#1077#1076#1080#1085#1080#1094
            DataBinding.FieldName = 'NameRaspDetail'
            Styles.Header = cxStyle1
            Position.BandIndex = 0
            Position.ColIndex = 1
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserfType: TcxGridDBBandedColumn
            DataBinding.FieldName = 'fType'
            Visible = False
            Position.BandIndex = 0
            Position.ColIndex = 2
            Position.RowIndex = 0
          end
        end
        object cxGridLevel1: TcxGridLevel
          Caption = #1060#1072#1084#1080#1083#1080' '#1048'.'#1054'.'
          GridView = cxGridTableViewEmplUser
        end
      end
    end
  end
  object TmRefresh: TTimer
    Enabled = False
    Interval = 200
    OnTimer = TmRefreshTimer
    Left = 664
    Top = 445
  end
  object DSEditRaspDetailComplectNE: TDataSource
    AutoEdit = False
    DataSet = QEditRaspDetailComplectNE
    Left = 712
    Top = 445
  end
  object QEditRaspDetailComplectNE: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'SELECT Idn, NameRaspDetail ,fType FROM bm_RaspDetail')
    Left = 752
    Top = 445
    object QEditRaspDetailComplectNEIdn: TAutoIncField
      FieldName = 'Idn'
      ReadOnly = True
    end
    object QEditRaspDetailComplectNENameRaspDetail: TStringField
      FieldName = 'NameRaspDetail'
      Size = 512
    end
    object QEditRaspDetailComplectNEfType: TIntegerField
      FieldName = 'fType'
    end
  end
  object DSEditRaspDetailComplecIndex: TDataSource
    DataSet = QEditRaspDetailComplecIndex
    OnDataChange = DSEditRaspDetailComplecIndexDataChange
    Left = 600
    Top = 181
  end
  object QEditRaspDetailComplecIndex: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      
        'SELECT Idn, NameRaspDetail,fAdv,fAdvMIN,CostWithoutNDS, ProcNDS,' +
        'CostWithNDS,ProcDiscount, fType, CostNDS, ColPI'
      'FROM bm_RaspDetail')
    Left = 608
    Top = 237
    object QEditRaspDetailComplecIndexIdn: TAutoIncField
      FieldName = 'Idn'
      ReadOnly = True
    end
    object QEditRaspDetailComplecIndexNameRaspDetail: TStringField
      FieldName = 'NameRaspDetail'
      Size = 512
    end
    object QEditRaspDetailComplecIndexfAdv: TIntegerField
      FieldName = 'fAdv'
      OnGetText = QEditRaspDetailComplecIndexfAdvGetText
    end
    object QEditRaspDetailComplecIndexfAdvMIN: TIntegerField
      FieldName = 'fAdvMIN'
    end
    object QEditRaspDetailComplecIndexCostWithoutNDS: TBCDField
      FieldName = 'CostWithoutNDS'
      Precision = 19
    end
    object QEditRaspDetailComplecIndexProcNDS: TBCDField
      FieldName = 'ProcNDS'
      Precision = 19
    end
    object QEditRaspDetailComplecIndexCostWithNDS: TBCDField
      FieldName = 'CostWithNDS'
      Precision = 19
    end
    object QEditRaspDetailComplecIndexProcDiscount: TBCDField
      FieldName = 'ProcDiscount'
      Precision = 19
    end
    object QEditRaspDetailComplecIndexfType: TIntegerField
      FieldName = 'fType'
    end
    object QEditRaspDetailComplecIndexCostNDS: TBCDField
      FieldName = 'CostNDS'
      Precision = 19
    end
    object QEditRaspDetailComplecIndexColPI: TIntegerField
      FieldName = 'ColPI'
    end
  end
  object QTmpTable: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      '')
    Left = 736
    Top = 37
  end
  object Qw: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      '')
    Left = 615
    Top = 40
  end
  object QINS_EditRaspDetailComplect: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      '  declare @viTmp int; SET  @viTmp=1'
      '   SELECT  @viTmp')
    Left = 856
    Top = 432
    object QINS_EditRaspDetailComplectIdn: TIntegerField
      FieldName = 'COLUMN1'
      ReadOnly = True
    end
  end
  object TmIndex: TTimer
    Enabled = False
    Interval = 200
    OnTimer = TmIndexTimer
    Left = 368
    Top = 173
  end
  object cxStyleRepository1: TcxStyleRepository
    Left = 800
    Top = 440
    PixelsPerInch = 96
    object cxStyle1: TcxStyle
      AssignedValues = [svColor]
      Color = 15329769
    end
  end
  object QtmpQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT Idn'
      '  FROM bm_RaspDetail'
      ' WHERE idRasp = -1'
      '   AND DateDel IS NULL'
      '   AND fType = 2'
      '   AND PIdn = -1')
    Left = 48
    Top = 192
    object QtmpQuerIdn: TAutoIncField
      FieldName = 'Idn'
      ReadOnly = True
    end
  end
end
