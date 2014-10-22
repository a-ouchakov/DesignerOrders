object FrSincPI_PP: TFrSincPI_PP
  Left = 0
  Top = 0
  Caption = #1055#1088#1080#1074#1077#1076#1077#1085#1080#1077' '#1089#1086#1086#1090#1074#1077#1090#1089#1090#1074#1080#1103' '#1053#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1085#1099#1093' '#1045#1076#1080#1085#1080#1094' '#1082' Axapta'
  ClientHeight = 800
  ClientWidth = 1262
  Color = 15329769
  Font.Charset = RUSSIAN_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsMDIChild
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  Visible = True
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object RzSplitter1: TRzSplitter
    Left = 0
    Top = 26
    Width = 1262
    Height = 774
    Position = 630
    UsePercent = True
    UpperLeft.Color = clSilver
    LowerRight.Color = clSilver
    HotSpotVisible = True
    HotSpotColor = clYellow
    HotSpotDirection = hsdBoth
    SplitterWidth = 7
    Align = alClient
    Color = clSilver
    TabOrder = 0
    BarSize = (
      630
      0
      637
      774)
    UpperLeftControls = (
      RzPanel5
      RzSplitter2)
    LowerRightControls = (
      cxGrid1
      RzPanel6)
    object RzPanel5: TRzPanel
      Left = 0
      Top = 0
      Width = 630
      Height = 41
      Align = alTop
      BorderOuter = fsPopup
      Color = 15329769
      TabOrder = 0
      object RzGroupBox5: TRzGroupBox
        Left = 1
        Top = 1
        Width = 628
        Height = 39
        Margins.Left = 1
        Margins.Top = 1
        Margins.Right = 1
        Margins.Bottom = 1
        Align = alClient
        Caption = #1055#1086#1080#1089#1082
        GradientColorStyle = gcsCustom
        GradientColorStop = clSkyBlue
        GroupStyle = gsCustom
        TabOrder = 0
        Transparent = True
        object edFind: TRzEdit
          Left = 2
          Top = 15
          Width = 564
          Height = 22
          Text = ''
          Align = alClient
          Color = clWhite
          FrameHotTrack = True
          FrameVisible = True
          TabOrder = 0
          OnChange = edFindChange
          ExplicitHeight = 21
        end
        object RzBitBtn3: TRzBitBtn
          Left = 596
          Top = 15
          Width = 30
          Height = 22
          FrameColor = 7617536
          Align = alRight
          Caption = 'Move All Right'
          Color = 15791348
          HotTrack = True
          TabOrder = 1
          OnClick = RzBitBtn3Click
          DisabledIndex = 103
          ImageIndex = 102
          Images = ImageList1
        end
        object RzBitBtn1: TRzBitBtn
          Left = 566
          Top = 15
          Width = 30
          Height = 22
          FrameColor = 7617536
          Align = alRight
          Color = 15791348
          HotTrack = True
          TabOrder = 2
          OnClick = RzBitBtn1Click
          ImageIndex = 63
          Images = ImageList1
        end
      end
    end
    object RzSplitter2: TRzSplitter
      Left = 0
      Top = 41
      Width = 630
      Height = 733
      Orientation = orVertical
      Position = 511
      Percent = 70
      UsePercent = True
      HotSpotVisible = True
      HotSpotColor = clYellow
      HotSpotDirection = hsdMax
      SplitterWidth = 7
      Align = alClient
      Color = clSilver
      TabOrder = 1
      BarSize = (
        0
        511
        630
        518)
      UpperLeftControls = (
        tlRaspDetail)
      LowerRightControls = (
        cxGridEmplUserDol)
      object tlRaspDetail: TcxDBTreeList
        Left = 0
        Top = 0
        Width = 630
        Height = 511
        Margins.Left = 0
        Margins.Top = 2
        Margins.Right = 0
        Margins.Bottom = 2
        BorderStyle = cxcbsNone
        Align = alClient
        Bands = <
          item
          end>
        DataController.DataSource = DSProduce
        DataController.ImageIndexField = 'iType'
        DataController.ParentField = 'idnP'
        DataController.KeyField = 'idn'
        Images = ImageList1
        LookAndFeel.Kind = lfStandard
        LookAndFeel.NativeStyle = False
        Navigator.Buttons.CustomButtons = <>
        OptionsBehavior.MultiSort = False
        OptionsBehavior.Sorting = False
        OptionsCustomizing.BandMoving = False
        OptionsCustomizing.ColumnMoving = False
        OptionsSelection.HideFocusRect = False
        OptionsSelection.InvertSelect = False
        OptionsView.CellAutoHeight = True
        OptionsView.GridLines = tlglBoth
        RootValue = -1
        Styles.BandHeader = cxStyle1
        TabOrder = 0
        object tlRaspDetailcxDBTreeListColumn3: TcxDBTreeListColumn
          PropertiesClassName = 'TcxImageComboBoxProperties'
          Properties.Items = <
            item
              Description = #1058#1077#1084#1072#1090#1080#1095#1077#1089#1082#1086#1077' '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
              ImageIndex = 0
              Value = 1
            end
            item
              Description = #1056#1072#1079#1076#1077#1083
              Value = 2
            end
            item
              Description = #1055#1088#1086#1076#1091#1082#1090
              Value = 3
            end
            item
              Description = #1055#1086#1076#1087#1080#1089#1085#1086#1081' '#1080#1085#1076#1077#1082#1089
              Value = 4
            end>
          Properties.ReadOnly = True
          Styles.Header = cxStyle1
          Caption.Text = #1053#1086#1084#1077#1088' '#1087#1088#1086#1076#1091#1082#1090#1072
          DataBinding.FieldName = 'CodeB'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 4
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailiText: TcxDBTreeListColumn
          Styles.Content = cxStyle5
          Styles.Header = cxStyle1
          Caption.Text = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1087#1088#1086#1076#1091#1082#1090#1072
          DataBinding.FieldName = 'iText'
          Options.Editing = False
          Width = 581
          Position.ColIndex = 0
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn11: TcxDBTreeListColumn
          PropertiesClassName = 'TcxButtonEditProperties'
          Properties.Buttons = <
            item
              Caption = '>>'
              Glyph.Data = {
                36040000424D3604000000000000360000002800000010000000100000000100
                2000000000000004000000000000000000000000000000000000FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF0000CE000000630000FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF0000CE0000009C0000009C000000630000FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF0000CE0000009C0000009C0000009C0000009C000000630000FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF0000CE
                0000009C0000009C0000009C0000009C0000009C0000009C000000630000FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF0000CE
                0000009C0000009C00000063000000CE0000009C0000009C0000009C00000063
                0000FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF0000CE
                0000009C000000630000FF00FF00FF00FF0000CE0000009C0000009C0000009C
                000000630000FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF0000CE
                000000630000FF00FF00FF00FF00FF00FF00FF00FF0000CE0000009C0000009C
                0000009C000000630000FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF0000CE0000009C
                0000009C0000009C000000630000FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF0000CE
                0000009C0000009C0000009C000000630000FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF0000CE0000009C0000009C000000630000FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF0000CE0000009C000000630000FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF0000CE000000630000FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00}
              Kind = bkGlyph
            end>
          Properties.ViewStyle = vsButtonsOnly
          Properties.OnButtonClick = tlRaspDetailcxDBTreeListColumn11PropertiesButtonClick
          Styles.Header = cxStyle1
          Options.ShowEditButtons = eisbAlways
          Width = 25
          Position.ColIndex = 3
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn2: TcxDBTreeListColumn
          Styles.Header = cxStyle1
          Caption.Text = #1050#1086#1076' '
          DataBinding.FieldName = 'ISSN'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 6
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn1: TcxDBTreeListColumn
          Styles.Header = cxStyle1
          Caption.Text = #1057#1086#1079#1076#1072#1083
          DataBinding.FieldName = 'auFamIO'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 9
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn5: TcxDBTreeListColumn
          Visible = False
          DataBinding.FieldName = 'fActual'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 5
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn4: TcxDBTreeListColumn
          Styles.Header = cxStyle1
          Visible = False
          Caption.Text = #1053#1086#1084#1077#1088' '#1087#1088#1086#1076#1091#1082#1090#1072
          DataBinding.FieldName = 'CodeB'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 8
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn6: TcxDBTreeListColumn
          Styles.Header = cxStyle1
          Caption.Text = #1058#1080#1087' '#1087#1086#1076#1087#1080#1089#1085#1086#1075#1086' '#1080#1085#1076#1077#1082#1089#1072
          DataBinding.FieldName = 'TypeName'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 7
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn7: TcxDBTreeListColumn
          PropertiesClassName = 'TcxCurrencyEditProperties'
          Styles.Content = cxStyle4
          Styles.Header = cxStyle1
          Caption.Text = #1062#1077#1085#1072
          DataBinding.FieldName = 'Price'
          Options.Editing = False
          Width = 66
          Position.ColIndex = 1
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn8: TcxDBTreeListColumn
          Styles.Content = cxStyle4
          Styles.Header = cxStyle1
          Caption.Text = #1040#1089#1090#1080#1074#1077#1085' '#1089
          DataBinding.FieldName = 'DateFrom'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 10
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn9: TcxDBTreeListColumn
          Styles.Content = cxStyle4
          Styles.Header = cxStyle1
          Caption.Text = #1040#1082#1090#1080#1074#1077#1085' '#1087#1086
          DataBinding.FieldName = 'DateTo'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 11
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn10: TcxDBTreeListColumn
          Styles.Header = cxStyle1
          Caption.Text = #1082#1086#1083'. '#1087#1088#1086#1076#1091#1082#1090#1086#1074#1099#1093' '#1087#1088#1077#1076#1083#1086#1078#1077#1085#1080#1081' '#1074' '#1041#1054
          DataBinding.FieldName = 'FRasp'
          Options.Editing = False
          Width = 49
          Position.ColIndex = 2
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn12: TcxDBTreeListColumn
          Styles.Content = cxStyle1
          Styles.Header = cxStyle1
          Caption.Text = #1050#1086#1076' (idn)'
          DataBinding.FieldName = 'idn'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 12
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
        object tlRaspDetailcxDBTreeListColumn13: TcxDBTreeListColumn
          Styles.Content = cxStyle1
          Styles.Header = cxStyle1
          Visible = False
          Caption.Text = #1090#1080#1087' '#1055#1048
          DataBinding.FieldName = 'iType'
          Options.Editing = False
          Width = 100
          Position.ColIndex = 13
          Position.RowIndex = 0
          Position.BandIndex = 0
          Summary.FooterSummaryItems = <>
          Summary.GroupFooterSummaryItems = <>
        end
      end
      object cxGridEmplUserDol: TcxGrid
        AlignWithMargins = True
        Left = 2
        Top = 1
        Width = 626
        Height = 212
        Margins.Left = 2
        Margins.Top = 1
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
        LookAndFeel.NativeStyle = True
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
        object cxGridTableViewEmplUser: TcxGridDBBandedTableView
          PopupMenu = PopupMenu1
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
          DataController.DataSource = DSNE_DO
          DataController.DetailKeyFieldNames = 'Idn'
          DataController.Summary.DefaultGroupSummaryItems = <>
          DataController.Summary.FooterSummaryItems = <
            item
              Kind = skCount
            end
            item
              Kind = skCount
              Column = cxGridTableViewEmplUserNAME
            end>
          DataController.Summary.SummaryGroups = <>
          OptionsBehavior.CellHints = True
          OptionsBehavior.IncSearch = True
          OptionsBehavior.BandHeaderHints = False
          OptionsCustomize.ColumnMoving = False
          OptionsCustomize.ColumnsQuickCustomization = True
          OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
          OptionsCustomize.BandMoving = False
          OptionsSelection.MultiSelect = True
          OptionsView.CellEndEllipsis = True
          OptionsView.NavigatorOffset = 30
          OptionsView.CellAutoHeight = True
          OptionsView.ExpandButtonsForEmptyDetails = False
          OptionsView.Footer = True
          OptionsView.GroupByBox = False
          Styles.Footer = cxStyle1
          Styles.Header = cxStyle1
          Styles.BandHeader = cxStyle1
          Bands = <
            item
            end>
          object cxGridTableViewEmplUseridn: TcxGridDBBandedColumn
            DataBinding.FieldName = 'idn'
            Visible = False
            Position.BandIndex = 0
            Position.ColIndex = 2
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUseridAdvProduceClass: TcxGridDBBandedColumn
            DataBinding.FieldName = 'idAdvProduceClass'
            Visible = False
            Position.BandIndex = 0
            Position.ColIndex = 3
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserIdAdvCond: TcxGridDBBandedColumn
            DataBinding.FieldName = 'IdAdvCond'
            Visible = False
            Position.BandIndex = 0
            Position.ColIndex = 4
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserIdAdvPriseList: TcxGridDBBandedColumn
            DataBinding.FieldName = 'IdAdvPriseList'
            Visible = False
            Position.BandIndex = 0
            Position.ColIndex = 5
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUseridProductOffer: TcxGridDBBandedColumn
            DataBinding.FieldName = 'idProductOffer'
            Visible = False
            Position.BandIndex = 0
            Position.ColIndex = 6
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserIdIns: TcxGridDBBandedColumn
            DataBinding.FieldName = 'IdIns'
            Position.BandIndex = 0
            Position.ColIndex = 8
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserDateIns: TcxGridDBBandedColumn
            Caption = #1044#1072#1090#1072
            DataBinding.FieldName = 'DateIns'
            Position.BandIndex = 0
            Position.ColIndex = 9
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserIdDel: TcxGridDBBandedColumn
            DataBinding.FieldName = 'IdDel'
            Position.BandIndex = 0
            Position.ColIndex = 10
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserDateDel: TcxGridDBBandedColumn
            Caption = #1044#1072#1090#1072' '#1091#1076#1072#1083#1077#1085#1080#1103
            DataBinding.FieldName = 'DateDel'
            Position.BandIndex = 0
            Position.ColIndex = 11
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserNAME: TcxGridDBBandedColumn
            Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1087#1088#1086#1076#1091#1082#1090#1086#1074#1086#1075#1086' '#1087#1088#1077#1076#1083#1086#1078#1077#1085#1080#1103
            DataBinding.FieldName = 'NAME'
            Width = 504
            Position.BandIndex = 0
            Position.ColIndex = 0
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserOFFER_ID: TcxGridDBBandedColumn
            Caption = #1082#1086#1076' '#1055#1055
            DataBinding.FieldName = 'OFFER_ID'
            Width = 81
            Position.BandIndex = 0
            Position.ColIndex = 1
            Position.RowIndex = 0
          end
          object cxGridTableViewEmplUserColumn1: TcxGridDBBandedColumn
            PropertiesClassName = 'TcxButtonEditProperties'
            Properties.Buttons = <
              item
                Caption = #1061
                Default = True
                Glyph.Data = {
                  36040000424D3604000000000000360000002800000010000000100000000100
                  2000000000000004000000000000000000000000000000000000FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF0000009C00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF000000FF00FF00FF00FF00FF00FF00
                  FF003131CE000000FF0000009C00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF003131CE00319CFF000000FF0000009C00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF000000FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF003131CE000063FF000000CE00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF000000FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF000000CE000000FF0000009C00FF00FF00FF00FF00FF00
                  FF00FF00FF000000FF0000009C00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF000000CE000000FF0000009C00FF00FF00FF00
                  FF000000FF0000009C00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF000000CE000000FF0000009C000000
                  FF0000009C00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF000000CE000000FF000000
                  9C00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF000000CE000000FF0000009C000000
                  CE0000009C00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF000000CE000000FF0000009C00FF00FF00FF00
                  FF000000CE0000009C00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF000000CE000000FF000000FF0000009C00FF00FF00FF00FF00FF00
                  FF00FF00FF000000CE0000009C00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF000000CE00319CFF000000FF0000009C00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF000000CE0000009C00FF00FF00FF00FF00FF00FF00FF00
                  FF0063639C000000CE0063639C00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF000000CE00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
                  FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00}
                Kind = bkGlyph
              end>
            Properties.ViewStyle = vsButtonsOnly
            Properties.OnButtonClick = cxGridTableViewEmplUserColumn1PropertiesButtonClick
            Options.ShowEditButtons = isebAlways
            Width = 34
            Position.BandIndex = 0
            Position.ColIndex = 7
            Position.RowIndex = 0
          end
        end
        object cxGridLevel2: TcxGridLevel
          Caption = #1053#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1085#1099#1077' '#1077#1076#1077#1085#1080#1094#1099
          GridView = cxGridTableViewEmplUser
        end
      end
    end
    object cxGrid1: TcxGrid
      AlignWithMargins = True
      Left = 2
      Top = 39
      Width = 621
      Height = 733
      Margins.Left = 2
      Margins.Top = 1
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
      object cxGridDBBandedTableView1: TcxGridDBBandedTableView
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
        DataController.DataSource = DSNE_Axapta
        DataController.DetailKeyFieldNames = 'Idn'
        DataController.Summary.DefaultGroupSummaryItems = <
          item
            Kind = skCount
            Position = spFooter
            Column = cxGridDBBandedTableView1NAME
          end>
        DataController.Summary.FooterSummaryItems = <
          item
            Kind = skCount
            Column = cxGridDBBandedTableView1NAME
          end>
        DataController.Summary.SummaryGroups = <>
        OptionsBehavior.CellHints = True
        OptionsBehavior.ColumnHeaderHints = False
        OptionsBehavior.BandHeaderHints = False
        OptionsCustomize.ColumnMoving = False
        OptionsCustomize.ColumnsQuickCustomization = True
        OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
        OptionsCustomize.BandMoving = False
        OptionsData.CancelOnExit = False
        OptionsData.Deleting = False
        OptionsData.DeletingConfirmation = False
        OptionsData.Editing = False
        OptionsData.Inserting = False
        OptionsSelection.CellSelect = False
        OptionsSelection.HideFocusRectOnExit = False
        OptionsSelection.InvertSelect = False
        OptionsSelection.UnselectFocusedRecordOnExit = False
        OptionsView.CellEndEllipsis = True
        OptionsView.NavigatorOffset = 30
        OptionsView.CellAutoHeight = True
        OptionsView.Footer = True
        OptionsView.GroupFooters = gfAlwaysVisible
        OptionsView.ShowColumnFilterButtons = sfbAlways
        OptionsView.BandHeaders = False
        Styles.Header = cxStyle1
        Styles.BandHeader = cxStyle1
        Bands = <
          item
            Caption = #1053#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1072' '#1080#1079' Axapta'
          end>
        object cxGridDBBandedTableView1ID: TcxGridDBBandedColumn
          DataBinding.FieldName = 'ID'
          Visible = False
          Position.BandIndex = 0
          Position.ColIndex = 0
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1OFFER_ID: TcxGridDBBandedColumn
          DataBinding.FieldName = 'OFFER_ID'
          Visible = False
          Position.BandIndex = 0
          Position.ColIndex = 1
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1NAME: TcxGridDBBandedColumn
          Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1087#1088#1086#1076#1091#1082#1090#1086#1074#1086#1075#1086' '#1087#1088#1077#1076#1083#1086#1078#1077#1085#1080#1103
          DataBinding.FieldName = 'NAME'
          Styles.Content = cxStyle5
          Width = 350
          Position.BandIndex = 0
          Position.ColIndex = 2
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1Column1: TcxGridDBBandedColumn
          Caption = #1050#1086#1083'.'
          DataBinding.FieldName = 'FRasp'
          Position.BandIndex = 0
          Position.ColIndex = 9
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1PERIOD_ID: TcxGridDBBandedColumn
          DataBinding.FieldName = 'PERIOD_ID'
          Visible = False
          Width = 61
          Position.BandIndex = 0
          Position.ColIndex = 3
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1TARIFF_ID: TcxGridDBBandedColumn
          DataBinding.FieldName = 'TARIFF_ID'
          Visible = False
          Width = 59
          Position.BandIndex = 0
          Position.ColIndex = 4
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1ID_1: TcxGridDBBandedColumn
          DataBinding.FieldName = 'ID_1'
          Visible = False
          Width = 29
          Position.BandIndex = 0
          Position.ColIndex = 5
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1TARIFF_ID_1: TcxGridDBBandedColumn
          DataBinding.FieldName = 'TARIFF_ID_1'
          Visible = False
          Width = 71
          Position.BandIndex = 0
          Position.ColIndex = 6
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1NAME_1: TcxGridDBBandedColumn
          Caption = #1058#1072#1088#1080#1092
          DataBinding.FieldName = 'NAME_1'
          Width = 252
          Position.BandIndex = 0
          Position.ColIndex = 10
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1CONTENTBLOCK_ID: TcxGridDBBandedColumn
          DataBinding.FieldName = 'CONTENTBLOCK_ID'
          Visible = False
          Width = 102
          Position.BandIndex = 0
          Position.ColIndex = 7
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1ContentBlockId: TcxGridDBBandedColumn
          DataBinding.FieldName = 'ContentBlockId'
          Visible = False
          Width = 79
          Position.BandIndex = 0
          Position.ColIndex = 8
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1Name_2: TcxGridDBBandedColumn
          Caption = #1050#1086#1085#1090#1077#1085#1090' '#1073#1083#1086#1082
          DataBinding.FieldName = 'Name_2'
          Width = 683
          Position.BandIndex = 0
          Position.ColIndex = 11
          Position.RowIndex = 0
        end
      end
      object cxGridLevel1: TcxGridLevel
        Caption = #1053#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1085#1099#1077' '#1077#1076#1077#1085#1080#1094#1099
        GridView = cxGridDBBandedTableView1
      end
    end
    object RzPanel6: TRzPanel
      Left = 0
      Top = 0
      Width = 625
      Height = 38
      Align = alTop
      BorderOuter = fsPopup
      Color = 15329769
      TabOrder = 1
      object RzGridPanel1: TRzGridPanel
        AlignWithMargins = True
        Left = 2
        Top = 3
        Width = 621
        Height = 35
        Margins.Left = 1
        Margins.Top = 2
        Margins.Right = 1
        Margins.Bottom = 2
        BorderOuter = fsNone
        Align = alTop
        Color = 15329769
        ColumnCollection = <
          item
            Value = 100.000000000000000000
          end
          item
            SizeStyle = ssAbsolute
            Value = 30.000000000000000000
          end
          item
            SizeStyle = ssAbsolute
            Value = 60.000000000000000000
          end
          item
            SizeStyle = ssAbsolute
            Value = 60.000000000000000000
          end>
        ControlCollection = <
          item
            Column = 0
            Control = edFindAxapta
            Row = 1
          end
          item
            Column = 0
            Control = RzLabel1
            Row = 0
          end
          item
            Column = 1
            Control = RzBitBtn2
            Row = 1
          end>
        RowCollection = <
          item
            SizeStyle = ssAbsolute
            Value = 12.000000000000000000
          end
          item
            Value = 100.000000000000000000
          end
          item
            SizeStyle = ssAuto
          end>
        TabOrder = 0
        object edFindAxapta: TRzEdit
          AlignWithMargins = True
          Left = 1
          Top = 12
          Width = 469
          Height = 23
          Margins.Left = 1
          Margins.Top = 0
          Margins.Right = 1
          Margins.Bottom = 0
          Text = ''
          Align = alClient
          Color = clWhite
          FrameHotTrack = True
          FrameVisible = True
          TabOrder = 0
          OnChange = edFindAxaptaChange
          ExplicitHeight = 21
        end
        object RzLabel1: TRzLabel
          Left = 0
          Top = 0
          Width = 471
          Height = 12
          Align = alClient
          Caption = #1055#1086#1080#1089#1082' '#1087#1086' '#1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1102
          ExplicitWidth = 124
          ExplicitHeight = 13
        end
        object RzBitBtn2: TRzBitBtn
          Left = 471
          Top = 12
          Width = 30
          Height = 23
          FrameColor = 7617536
          Align = alClient
          Color = 15791348
          HotTrack = True
          TabOrder = 1
          OnClick = RzBitBtn2Click
          ImageIndex = 63
          Images = ImageList1
        end
      end
    end
  end
  object RzPanel2: TRzPanel
    Left = 0
    Top = 0
    Width = 1262
    Height = 26
    Align = alTop
    BorderOuter = fsNone
    Color = clSilver
    TabOrder = 1
    object RzPanel7: TRzPanel
      Left = 0
      Top = 0
      Width = 1262
      Height = 26
      Align = alClient
      BorderInner = fsFlat
      BorderOuter = fsNone
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      TabOrder = 0
      VisualStyle = vsGradient
      object RzToolButton5: TRzToolButton
        Left = 1017
        Top = 1
        Width = 120
        Height = 24
        Margins.Left = 1
        Margins.Top = 1
        Margins.Right = 1
        Margins.Bottom = 1
        GradientColorStyle = gcsMSOffice
        ImageIndex = 51
        Images = ImageList1
        ShowCaption = True
        UseToolbarButtonLayout = False
        UseToolbarButtonSize = False
        UseToolbarShowCaption = False
        UseToolbarVisualStyle = False
        VisualStyle = vsGradient
        Align = alRight
        Caption = #1042#1099#1075#1088#1091#1079#1080#1090#1100' '#1074' Excel'
        OnClick = RzToolButton5Click
        ExplicitLeft = 1095
        ExplicitTop = 2
      end
      object RzSpacer4: TRzSpacer
        Left = 1013
        Top = 1
        Width = 4
        Height = 24
        Grooved = True
        Align = alRight
        ExplicitLeft = 97
        ExplicitTop = -1
      end
      object RzToolButton4: TRzToolButton
        Left = 893
        Top = 1
        Width = 120
        Height = 24
        GradientColorStyle = gcsMSOffice
        SelectionColorStart = clWindow
        ImageIndex = 44
        Images = ImageList1
        ShowCaption = True
        UseToolbarButtonLayout = False
        UseToolbarButtonSize = False
        UseToolbarShowCaption = False
        UseToolbarVisualStyle = False
        VisualStyle = vsGradient
        Align = alRight
        Caption = #1054#1073#1085#1086#1074#1080#1090#1100
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        OnClick = RzToolButton4Click
        ExplicitLeft = 992
      end
      object RzSpacer7: TRzSpacer
        Left = 889
        Top = 1
        Width = 4
        Height = 24
        Grooved = True
        Align = alRight
        ExplicitLeft = 938
        ExplicitTop = 0
      end
      object RzSpacer1: TRzSpacer
        Left = 516
        Top = 1
        Width = 4
        Height = 24
        Grooved = True
        Align = alLeft
        Visible = False
        ExplicitLeft = 122
        ExplicitTop = 12
      end
      object RzLabel6: TRzLabel
        AlignWithMargins = True
        Left = 4
        Top = 4
        Width = 35
        Height = 13
        Align = alLeft
        Caption = #1058#1080#1087' '#1055#1048
        Transparent = True
      end
      object RzToolButton1: TRzToolButton
        Left = 1141
        Top = 1
        Width = 120
        Height = 24
        GradientColorStyle = gcsMSOffice
        SelectionColorStart = clWindow
        ImageIndex = 107
        Images = ImageList1
        ShowCaption = True
        UseToolbarButtonLayout = False
        UseToolbarButtonSize = False
        UseToolbarShowCaption = False
        UseToolbarVisualStyle = False
        VisualStyle = vsGradient
        Align = alRight
        Caption = #1042#1099#1093#1086#1076
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        OnClick = RzToolButton1Click
        ExplicitLeft = 1219
        ExplicitTop = 0
      end
      object RzSpacer2: TRzSpacer
        Left = 1137
        Top = 1
        Width = 4
        Height = 24
        Grooved = True
        Align = alRight
        ExplicitLeft = 1161
        ExplicitTop = 0
      end
      object RzComboBox1: TRzComboBox
        AlignWithMargins = True
        Left = 45
        Top = 3
        Width = 468
        Height = 21
        Margins.Top = 2
        Margins.Bottom = 2
        Align = alLeft
        Style = csDropDownList
        Ctl3D = False
        FlatButtons = True
        FrameVisible = True
        ParentCtl3D = False
        TabOrder = 0
        OnChange = cbId24ItemTypeChange
      end
    end
  end
  object RzPanel300: TRzPanel
    Left = 1087
    Top = 800
    Width = 344
    Height = 209
    BorderInner = fsGroove
    BorderOuter = fsFlat
    BorderShadow = clNavy
    Color = clSkyBlue
    TabOrder = 2
    Visible = False
    object RzLabel10: TRzLabel
      Left = 132
      Top = 3
      Width = 209
      Height = 96
      Align = alClient
      Alignment = taCenter
      BiDiMode = bdLeftToRight
      Caption = #1055#1086#1076#1086#1078#1076#1080#1090#1077', '#1080#1076#1105#1090' '#1086#1073#1088#1072#1073#1086#1090#1082#1072' '#1080#1085#1092#1086#1088#1084#1072#1094#1080#1080'.'
      Color = clSkyBlue
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -27
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentBiDiMode = False
      ParentColor = False
      ParentFont = False
      Transparent = False
      WordWrap = True
      ShadowColor = clWhite
      TextStyle = tsRecessed
    end
    object Image1: TImage
      Left = 3
      Top = 3
      Width = 129
      Height = 127
      Align = alLeft
      AutoSize = True
      Picture.Data = {
        07544269746D6170B2C00000424DB2C000000000000036000000280000008100
        00007F00000001001800000000007CC00000C40E0000C40E0000000000000000
        0000F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA68B8D896E6F6B51524E3839352B2C282021
        1D1E1F1B1D1E1A1B1C181A1B171E1F1B1F201C2728243838365555556C6C6C84
        8484B2B2B2F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6B0B0B0AAAAAAA5A5
        A5A0A09F8E8E8B6E6E694E4F4930332A20231B21231D21231D20211C1E1F1A1D
        1F1A1E201B1F201B1E201B1E1F1A1E1F1A1C1D1920211D1E1F1B1E1F1C1F1F1D
        1F201E1F1F1D1C1C1A1C1D1A3435325858557C7D7B9E9E9EA5A5A5ABABABB0B0
        B0F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6B0B0B0A5A5
        A59B9B9B9292928B8B8B8686868282828080807E7E7E7E7E7E8181818787846C
        6C6652534A33342B21221921221921231A1F211A1E201B1E1F1B1E1F1B1E201B
        1E1F1A1D1E191B1D181B1C171B1C171B1C171B1C171A1B171A1B171B1C181B1C
        181B1C181C1D191D1E1A1D1E191E201A1D1F191C1E181E201A21231D42433E59
        5A58797A797F7F7F7E7E7E7E7E7E7F7F7F8080808383838888888E8E8E979797
        A0A0A0ABABABF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6A9A9A99D9D9D9393938D8D8D87878783838382828282
        82828282828282828282828282828282828282828282828585846B6C654A4B42
        292B1F24251A20211920211C20211C1D1F1A1C1E181B1D17191A171819181617
        1515161314151314151313141213141213141213141213131013131013131013
        1411151613161713171814181915191B161A1C161D1F191D1F191F211B1A1C16
        1D1F191B1D171E211932352C5A5C567D7E7B8F8F8E8282828282828282828282
        828282828282828282828282828282828383838787878C8C8C959595A0A0A0AE
        AEAEF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6B3
        B3B3A5A5A5999999909090898989868686868686868686868686868686868686
        8686868686868686868686868686868686868686867F7F7B55544D2D2C222425
        1A22231822231C21201C1E1E1C181B1914171512141312131112131013131213
        1313131313131413141513141513151614151614151614151614141513141512
        14151214151213141113131013131012130F13130F13140F1315101517121416
        111C1E181B1D171D1F191D1F1A1F211C21221D1E1F1A3C3E387D8079A5A5A289
        8989868686868686868686868686868686868686868686868686868686868686
        8686868888888C8C8C9393939E9E9EABABABF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6AEAEAE9F9F9F
        9393938D8D8D8B8B8B8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A
        8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8D8D8D757670494A4025261B24251C24
        231E1F201B1C1E19171816151515121213111112121213131314151615161714
        1819161B1C191D1E1B1E1E1A1F1F1C22222023221F23221E24221F23221E2121
        1D1F201C1D1E1A1E1F1B1D1E1A1B1C17191B16191A1518191516161315151314
        14131313111313101313101516131719151C1E1A1D1E1A20221E1F211B21241C
        292C236C6E6691928E8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A
        8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8A8B8B8B909090979797A2A2A2B2
        B2B2F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6A3A3A39797979090
        908E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E
        8E8E8E8E8E8E8E8E8E8E8E8E8E8E959594787A7441423925261D20211B1E1F1B
        1B1C1817181413161211141010130F111410131512151713191B171D1F1B2022
        1E23242024262025282027291F292A20282920272720252920232B1F232B2021
        291E22281C25281D25291D26291E25281F24271F23251E23251E23241D22221B
        201F1A1D1C1819191616171414151312131011130E11130D141611181A141C1E
        1920211C22241D1E211826291E63645C8E8E8D8E8E8E8E8E8E8E8E8E8E8E8E8E
        8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E8E
        8F8F8F9393939D9D9DACACACF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6ACACAC9E9E9E95959593
        9393939393939393939393939393939393939393939393939393939393939393
        93939393939393939393939393939381827C444739282A1E22231B21201E1918
        16161713141512131411131310131511181A151D1E1921241C25291F282B2127
        2B2128292128272227282027281F25271B272A1B2A2C1F2C2E2331302A34312F
        36333136333033322F30322C2C2E28282A2427292128291F26271D25261D2527
        1B26291B27281D26271D23251C20221B1E20191A1D15181A1314161112130E12
        130E1314101718151A1C161F211A22231D21211B2C2D2167695F959694939393
        9393939393939393939393939393939393939393939393939393939393939393
        939393939393939393939393939696969E9E9EABABABF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6ADADAD9E9E9E989898
        9898989898989898989898989898989898989898989898989898989898989898
        9898989898989898989898989894949257574F2A291D24231B1E1D181B1B1514
        140F14141112130F1314111819151D1E1922231B26261F29292227292124271F
        23251E24271F2A2A2435332C4442394F4E445151464C4E4349494141423A3A3B
        3035372931332633352734382A363C2C3E4433484D3D4E504356554B57564C4D
        4C4241413633352A26271E25251E282A21282C21272B2024281C1F221A1C1E18
        181A141618131415131112101314121315101B1B1621211B24251C24261A3235
        297E7E799A9A9998989898989898989898989898989898989898989898989898
        98989898989898989898989898989898989898989898989E9E9EACACACF0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6A9A9A99D9D
        9D9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C
        9C9C9C9C9C9C9C9C9C9C9C9C9C9C7A7B7734362B27281D2021181C1C17161613
        13130F14160F1719121A1B1521221C25261F292A22292A2127282025251E292A
        2435373143453E4D4F4842433E32333021211D22241F3534324B484A6561637E
        7A7C8B898F95979F9D9FA7A1A3ABA09EA5A09CA1959096827D836F6E6F545653
        3A3C382E2F2C2E30293E3F3452534955564C47483F31332827291E2A2C212C2E
        252A2B23282A211E21161D1F1815161312131113131312120F1718131D1E1821
        221D25261F26281E4D4F489798949C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C
        9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9C9E9E9EAAAA
        AAF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6A6A6A6A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1
        A1A1A1A1A1A1A1A1A1A1A1A19B9B9A55574D26291E20221B1A1C151517111213
        0D1315101618131A1C1621221B2727202A2A232A2B2326261F29292238383349
        48454848452E2F2B20211D3436326B6A699B989ACBC8CAE1DEE0E8E3E6EBE6E9
        E9E3E6E7E2E5E8E2E3E8E3E2E2DDDCEAE5E4E8E3E2E8E3E2E9E4E3EAE5E4E9E5
        E5E8E5E8EAE7EAE1DEE0CECCCDABA9AA7370714240412F2E2B3F3F3955554F4E
        4E4732332B27281E292A1F2D2F22282B1F22261C20221C15161314151211130D
        13140F1618131B1D1822241E23261E2A2D237A7D75ADADACA1A1A1A1A1A1A1A1
        A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A1A3
        A3A3B3B3B3F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6B0B0B0A7A7A7A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6
        A6A6A6A6A6A6A6A6A6A6A6A6A686868236372C26281B1E201717191413141013
        1410151713181A141D1F19242620282923282722282823302F2A464641494845
        2C2B291F1D1D4E4C4E979397D3D0D3E8E5E8E7E1E4EAE2E3E9E1E2EBE3E4ECE6
        E5EAE7E3EBE8E4ECE9E5EBE7E4EDE8E7E9E4E3EEE9E8EDE8E7ECE7E6EDE8E7ED
        E8E7EDE7E5EDE6E3ECE5E2ECE5E2EAE4E4E6E0E3EAE4E7ECE6E9DED8DBAFAAAB
        6863643631333D3A3857565143443C2A2B21292A202F30252C2D2223251A1B1D
        1517191313140F13140F1416121516131F201B23251E26291D56574BBDBDBAAA
        AAAAA6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6A6
        A9A9A9F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6B3B3B3ACACACACACACACACACAC
        ACACACACACACACACACACACAEAFAD6A6B632C2D2424251E1D1D17131410131310
        1313101718141C1D1823251F282A2427292326272234332F4948443E3D391B19
        173D3B3A949293D7D3D8E9E5E8E6E2E2E7E3E3E8E4E4EDE8E8EDE9E8EEEAE9EF
        EAE9EFEBEAF0ECEAEFEBE9F0ECEAF0EBEAF1ECEBF1ECEBF0EBEAF0EBEAF1ECEB
        F1ECEBF0EBEAEFEAE9EFEAE9EEE9E8EDE8E7EDE9E6ECE8E4EAE6E2EAE6E2E8E3
        E1EAE5E4E9E4E3E7E2E1B5B1B15A585733312E4D4D4853514D2F2D272F2D2533
        33272B2C2220221C1A1C161719131314121314131617141E201A22241B2A2B20
        33342BAAAAA4B3B3B2ACACACACACACACACACACACACACACACACACACACACACB0B0
        B0F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6B1B1B1B1B1B1B1B1B1B2B3AC5153472728201E1F1A1716141313121616
        131516121D1E1822231D262823272B2527282134342B4C4A45383635201E1D5A
        5858BBB8B8E6E2E3E5E1E2E6E2E4E9E5E5EBE7E5EDE9E7EEEBE8EEEBEAEEEBEB
        F0EDEDF1EDEDF0ECEDF2EDEEF2EEEEF2EEEEF4EFEFF4EFEEF3EFEEF4EFEEF4F0
        EFF4EFEEF4EFEEF4EFEEF4F0EFF2EEEFF1EDEEF2EFEFF1ECEDF1ECEEF0EAECED
        E8EAF0EAEAEAE6E3EDE8E5E7E2DFE6E2E1EBE8E7DAD7D68986843D3A394C4949
        54514E312F2A3030282F30262B2C2322231B19181417161312130F1314111A1C
        1620221A282B212B2E23888A82BABAB8B1B1B1B1B1B1B1B1B1B3B3B3F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA63E402F28261E1D1C1816181313141114
        151316171321221927281F303128282A202F302747473F3D3D37201E1C656363
        CAC8C8E6E4E4E3E0E0E7E3E2E9E5E4ECE8E7EDE9E8EEEAE9EFEBEAF1EDECF2ED
        EDF2EDEEF3EEEFF3EEEFF4EFEFF4F0EFF4F0EFF4F0EFF4F0EFF5F1F0F5F1F0F5
        F1F0F4F0EFF4F0EFF4F0EFF4F0EFF4F0EFF4F0EFF4F0EFF3EFEEF2EEEDF2EEED
        F1EDECF1EDECF0ECEBF0EBEAEEE9E8EDE8E7EDE8E7EAE5E4E5E0DFE8E3E2E6E1
        E09B97963D39384D49484F4C462F2F233130253332282926201D1B1617171312
        130F141610171A131F211A252820292C226E6F65F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA63538282828201E1C1A131313131413
        141513191A1522241C2B2C232E2F262A2B224240354D4A401E1C1A525557CCCB
        CEE6E1E2E3DEDFE9E4E5EAE5E5ECE8E7EFEBEAF0ECEBF0ECEBF2EEEDF2EEEDF3
        EFEEF4F0EFF4F0EFF5F1F0F5F1F0F5F1F0F6F2F1F6F2F1F6F2F1F6F2F1F6F2F1
        F6F2F1F6F2F1F6F2F1F6F2F1F6F2F1F6F2F1F6F2F1F6F2F1F5F1F0F5F1F0F4F0
        EFF4F0EFF3EFEEF3EFEEF3EEEDF3EEEDF2EDECF1ECEBEFEAE9EEE9E8EBE6E5EC
        E7E6E5E1E0E8E3E2E5E1E0928E8D3935335855503F3D362D2B2235332A312D27
        22211A191A1313140F12130E1516121C1E1923251E2A2B225E5F58F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA633382926291F17181610120E1516
        131716171C1D1A25281F2D2F252B2C2333342B47483F2F302A302E2DB6B4B4E4
        E1E3E2DEE0ECE6E7E9E3E4EEE9EAEDE9E9F0ECEBF1EDECF3EFEEF3EFEEF4F0EF
        F4F0EFF5F1F0F5F2EFF6F3EFF7F4F0F7F4F0F7F4F1F7F3F2F7F3F2F7F3F2F7F3
        F2F8F4F3F8F4F3F8F4F3F8F4F3F8F4F3F8F4F3F8F4F3F8F4F3F8F4F3F7F3F2F7
        F3F2F6F2F1F6F2F1F5F1F0F5F1F0F4F0EFF5F0EFF4EFEEF4EFEEF3EEEDF2EDEC
        F3EEEDECE7E6EFE9E8EBE4E4E7E1E0EAE4E3DDD7D96B6668423E3B5B5950312D
        243531293432292322191C1D1614151212130F1415121C1D1723241B27281F60
        6158F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA634382823271B14171313131117
        19121516111E1C1B292A233133273031243E3E344445411C1C1D76787CE0DFE1
        E2DFDFE7E2E1EBE5E4EBE6E6EFEAEAF0EBEBF2EEEDF2EEEDF3EFEEF4F0EFF5F1
        F0F5F1F0F6F2F1F6F2F1F7F3F1F7F4F1F8F4F2F8F4F2F8F4F2F8F4F3F8F4F3F8
        F4F3F8F4F3F9F4F4F9F4F4F9F4F4F9F4F4F9F5F5F9F5F5F9F5F5F9F4F4F9F5F4
        F9F5F4F8F4F3F7F3F2F7F3F2F6F2F1F6F2F1F6F2F1F7F2F1F7F2F1F7F2F1F5F0
        EFF4F0EFF3EFEEF1ECEBF1EBEBF1EBEAECE6E6E9E3E2E6E0E1E6E0E2B9B5B441
        3D3958554D4340373331273232272827201C1B181516131314121314111B1C16
        22241C272920696962F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA63C3F3223241A17191310130E
        13140F1A1A1422211C2D2A2634322936352945463C3334302B2B2BB9B8BCE5E3
        E5E6E2E1E7E3E2EBE7E6EDE9E8EEEAE9F0ECEBF2EEEDF3EFEEF4F0EFF5F1F0F5
        F1F0F6F2F1F6F2F1F7F3F2F7F3F2F8F4F3F8F4F3F8F4F3F8F4F3F8F4F3F9F5F4
        F9F5F4F9F5F4F9F4F4F9F4F5F9F4F5F9F4F5F9F4F5F9F4F5F9F4F5F9F4F5F9F4
        F4F9F5F4F9F5F4F9F5F4F9F5F4F8F4F3F8F4F3F7F3F2F7F3F2F7F3F2F7F3F2F7
        F3F2F6F2F1F5F1F0F4F0EFF3EFEEF2EEEDF1EDECEFEBEAECE8E7EAE5E4E9E4E3
        E5E0DFE0DBDA6D696643403A5352492D2C2237362C2A28221D1E181516131313
        10141612191A1521221D2929217A7973F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA64B4C412929221614141414
        1313151017181322201A2E2D2730312936372F494942242624525457DAD8D8E8
        E2DFE8E2E0E9E5E4EDE9E8EEEAE9F0ECEBF2EEEDF3EFEEF4F0EFF5F1F0F6F2F1
        F6F2F1F7F3F2F7F3F2F7F3F2F8F4F3F8F4F3F9F5F4F9F5F4F9F5F4F9F5F4F9F5
        F4FAF6F5FAF6F5FAF6F5FAF5F5FAF5F6FAF5F6FAF5F6FAF5F6FAF5F6FAF5F6FA
        F5F6FAF5F5FAF6F5FAF6F5FAF6F5F9F5F4F9F5F4F9F5F4F8F4F3F8F4F3F8F4F3
        F8F4F3F8F4F3F7F3F2F6F2F1F5F1F0F4F0EFF4F0EFF4F0EFF3EFEEF1EDECEFEA
        E9EDE8E7EAE5E4E4DFDEE8E4E2A29E9C3A373259575034312937342C2A29221F
        1F1915151213131113131118191622231D292A238E8E8BF0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA666685C27281E17151515
        131314141019191325221D332F2A36352E383B314748431C1C1A807F80E4E0E2
        E3DFE0E8E4E3EAE7E5EDE9E8F0ECEBF1EDECF2EEEDF4F0EFF5F1F0F6F2F1F6F2
        F1F7F3F2F8F4F3F8F4F3F8F4F3F8F4F3F9F5F4F9F5F4F9F5F4F9F5F4F9F5F4F9
        F5F4F9F5F4FAF6F5FAF6F5FAF6F5FAF5F5FAF5F6FAF5F6FAF5F6FAF5F6FAF5F6
        FAF5F6FAF5F6FAF5F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5F9F5F4F9F5
        F4F9F5F4F9F5F4F9F5F4F9F5F4F8F4F3F7F3F2F6F2F1F6F2F1F6F2F1F5F1F0F3
        EFEEF2EDECF0EBEAEFEAE9E9E4E3E7E2E2E4E0E0C4C0C03F3C395A564F3A382E
        3B39302E2C2620201C161715131413141513171A1620231D2B2C25AEAEAAF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA681837C262A20191B16
        1413131515121B1B1423221A312F283935303C3D3442463E1A1B1B9B9A9BE4E0
        DFE9E3E2EAE6E6E8E6E7EDEBEBF0ECEBF1EDECF3EFEEF4F0EFF5F1F0F5F1F0F6
        F2F1F7F3F2F8F4F3F9F5F4F9F5F4F9F5F4F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5
        FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F6FAF6F6FAF6F6FAF6
        F6FAF6F6FAF6F6FAF6F6FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FA
        F6F5FAF6F5FAF6F5FAF6F5FAF6F5F9F5F4F9F5F4F8F4F3F8F4F3F8F4F3F7F3F2
        F6F2F1F4F0EFF5F1F0F2EDECF0ECEBEFEAE9EAE5E5E8E3E3E2DDDDD5D0CF514E
        4B514F4A36342D3B382F2F2C251F1F1B1415131516141214121A1D1823251E2B
        2C23F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6A9AAA32A2C1F191C
        15131713141512191814201F183230283A38313E3B3643443F1B1D1BACABAEE4
        E2E1E7E4E1E8E4E3ECE8E7EEEAE9F0ECEBF1EDECF2EEEDF4F0EFF5F1F0F6F2F1
        F6F2F1F7F3F2F7F3F2F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6
        F5FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FB
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6F5FAF6F5
        FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5F9F5F4F9F5F4F9F5F4F9F5F4F9F5
        F4F8F4F3F7F3F2F5F1F0F5F1F0F4F0EFF2EEEDF0ECEBEFEAE9EAE5E4E6E1E0E6
        E1E0D5D3D35757564E4C473C3A3038352C3230291C1C17151613141513151613
        191B1623251E33352AF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA63134261D
        1E14141511141512171613201E1A2E2C2636332D3A37322B2C261D1A1DB3B2B5
        E3E1E0E5E3DDEBE8E3ECE8E7EEEAE9F1EDECF2EEEDF2EEEDF4F0EFF5F1F0F6F2
        F1F7F3F2F7F3F2F8F4F3F8F4F3F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FAF6F5FA
        F6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6
        F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FA
        F6F5FAF6F5F9F5F4F8F4F3F7F3F2F6F2F1F6F2F1F4F0EFF3EFEEF2EEEDF0EBEA
        F0EBEAE7E2E1E4E0DFD9D6D55F5C594C4A453A393137342C302E271A1B151415
        131314111314101A1C1524261D3F4037F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6444639
        212416181813171513171613201D19312D2A393531403D395B57542B2C26B3B0
        B2E0DEDDE5E4DDEEE9E8EEE9EBEEEAE9F0ECEBF2EEEDF4F0EFF4F0EFF5F1F0F7
        F3F2F8F4F3F8F4F3F8F4F3F9F5F4F9F5F4FAF6F5FAF6F5FBF7F6FAF6F5FAF6F5
        FAF6F5FAF6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7
        F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FB
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6F5FAF6F5
        FAF6F5FAF6F5FAF6F5F9F5F4F9F5F4F8F4F3F8F4F3F7F3F2F6F2F1F5F1F0F4F0
        EFF2EDECF1ECEBEBE6E5EAE5E3E4DFDDDAD7D65C5C5B4D4C473D3B3138352D2B
        292318181415161311130E13150F1B1D1528291E5D5F54F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA67072
        6924261C181A121515121414131C1917302927453D3C3D38352B2C262B2C26D8
        D4D4E0DCDBE5E3DFECEAE5EDE7E9EEE9EBF0ECEBF2EEEDF3EFEEF4F0EFF5F1F0
        F6F2F1F8F4F3F8F4F3F8F4F3F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FBF7F6FAF6
        F5FAF6F5FAF6F5FAF6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FB
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6
        F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5F9F5F4F8F4F3F7F3F2F7
        F3F2F5F1F0F5F0EFF2EEEDEFEBEAEEE8E6E8E2E1E1DDDDD5D3D35A5855514E47
        3B37303A352D27221D18181311120D11130C13150F202218292B1E8F8F88F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6292C20181A13131410131411171914292821473E38473E3945413E2B2C26
        CDC9C8E0DCDBE5E1E0E9E5E4EDE9E8EFEBEAF1EDECF2EEEDF3EFEEF4F0EFF5F1
        F0F6F2F1F7F3F2F8F4F3F8F4F3F9F5F4F9F5F4F9F5F4FAF6F5FBF7F6FBF7F6FB
        F7F6FAF6F5FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FB
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6F5F9F5F4
        F8F4F3F8F4F3F6F2F1F5F1F0F3EFEEF2EEEDF0ECEBEDE8E7E8E3E2DFDAD9D3CF
        CD4A474359534F3B332E38322C211F1915161110120C13140F181A1326271E31
        3026F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA64041371F211614171014161216171321241D3B3A2E4D483D4140352B2C
        265C5A59E4E0DFE5E1E0EBE6E5ECE8E7EFEBEAF1EDECF2EEEDF3EFEEF4F0EFF5
        F1F0F6F2F1F6F2F1F7F3F2F8F4F3F9F5F4FAF6F5FAF6F5FAF6F5FAF6F5FBF7F6
        FBF7F6FBF7F6FAF6F5FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FBF7
        F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FC
        F7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6
        F5F9F5F4F9F5F4F8F4F3F8F4F3F7F3F2F5F1F0F4F0EFF2EEEDF0EBEAEDE8E7E6
        E1E0DBD6D6C9C3C33C383553504B36322D332F2A1C1A1413130D13140F161713
        1E1E172E2C24585852F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA685867E26281C16181012140D1315111A1B172C2C284D4842443E3839
        3A3330332EDCDAD9E4E0DFE9E5E4EDE9E8EEEAE9F1EDECF2EEEDF3EFEEF4F0EF
        F5F1F0F6F2F1F7F3F2F7F3F2F8F4F3F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FAF6
        F5FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FC
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6
        FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7
        F6FBF7F6FBF7F6FBF7F6FBF7F6FCF8F7FCF8F7FCF8F7FBF7F6FBF7F6FBF7F6FB
        F7F6FAF6F5FAF6F5F9F5F4F9F5F4F9F5F4F8F4F3F6F2F1F5F1F0F4F0EFF3EEED
        F1ECEBECE7E6E5DEDED9D3D4B3AFAE3A3A374947423B3631332F2A1D1A151313
        1012130F16161124211B2C2C23F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA63133271C1D1316150F141410161A15282722494440433F38
        44423B171819BFBFC1E3DFDEE8E4E3ECE7E6EEEAE9F0ECEBF1EDECF2EEEDF3F0
        EEF5F1EFF6F2F0F7F3F1F7F3F1F7F3F2F8F4F3F9F5F4F9F5F4FAF6F5FAF6F5FA
        F6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF7F6FCF7F6FCF7F6FC
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FAF6F5FAF6F5FAF6F5FAF6F5F9F5F4F8F4F3F7F3F2F6F2F1F6F2
        F1F5F0EFF3EEEDEFEBEAECE6E6E3DDDDD5D1D08B8A884443403E38343E363129
        251D1918141313121817141C1A1626261F414339F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6696A611F201617171115120F1615121B1F193F3C35514C
        43404034212418838486E3E0E4E7E2E1ECE7E6EFEAE9F0ECEBF1EDECF2EEEDF3
        EFEEF4F1EEF5F2EEF6F3EFF7F4F0F8F4F2F8F4F3F8F4F3F9F5F4F9F5F4FAF6F5
        FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7
        F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FC
        F7F6FCF7F6FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7FCF8F7FCF8F7FCF8F7FDF8F7
        FDF8F7FDF8F7FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7
        F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6F5F9F5F4F8F4F3F8
        F4F3F7F3F2F5F1F0F3EFEEF0ECEBEDE9E8E7E2E1DCD7D6D4CFCE5C5B59534F4C
        3F35303B362C23221C1816161614131715131F1F1A2C2D239F9F9AF0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA62B2C221B1C1413130E1817141C1C182E2D284E
        4B453F3E3635362F3E3D3BE4E2E3E4E0E1EAE5E4EEE9E8F1ECEBF2EDECF2EEED
        F3EFEEF4F0EFF5F1EFF5F2EEF6F3EFF7F4F0F8F4F2F8F4F3F9F5F4F9F5F4FAF6
        F5FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FB
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6
        FCF7F6FCF7F6FCF7F6FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7FCF8F7FCF8F7FCF8
        F7FDF8F7FDF8F7FDF8F7FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FB
        F7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6F5F9F5F4
        F9F5F4F8F4F3F7F3F2F6F2F1F4F0EFF2EEEDF1ECEBEEE9E8E6E1E0D8D3D2C1BD
        BD3C38384D4A463C372F312F271D1D171615131513131A181725251E383A2FF0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA666686022231B15151113131015171423221E
        4A423E4C48423B3F36161816BFBDC0E4E0E0E9E5E2EDE8E7F0EBEAF3EEEDF3EE
        EDF3EFEEF4F0EFF5F1F0F6F2F0F6F3EFF7F4F0F8F5F1F9F5F3F9F5F4F9F5F4FA
        F6F5FAF6F5FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7
        F6FCF7F6FCF7F6FCF7F6FCF7F6FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7FCF8F7FC
        F8F7FCF8F7FDF8F7FDF8F7FDF8F7FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6
        F5FAF6F5F9F5F4F9F5F4F8F4F3F7F3F2F6F2F1F4F0EFF2EEEDF0EBEAE9E4E3E0
        DBDAD5D0D08F8D8C4547443C38313A372E25261C1818131513131916171F1E1B
        2B2C2192928CF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6272B1F191B1314150F1415111B1C
        1834322E564F4A413F36282B236A6E6CE1DFE2E8E2E1EFE9E6EFEAE9F1ECEBF3
        EEEDF3EEEEF3EFEFF4F0EFF5F2EFF6F3F0F7F3F1F7F4F1F8F5F2F9F5F3F9F5F4
        FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FBF6F5FBF7F6FBF7F6FBF7F6FBF7
        F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FC
        F7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF8F7FCF7F6FCF8F7FCF8F7FCF8F7
        FBF7F6FAF6F5FBF7F6FCF8F7FCF8F7FCF8F7FBF7F6FBF7F6FBF7F6FBF7F6FBF7
        F6FCF7F6FCF7F6FCF7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FB
        F7F6FAF6F5FAF6F5FAF6F5F9F5F4F9F5F4F8F4F3F7F3F2F6F2F1F4F0EFF2EDEC
        EFEAE9E7E2E1DCD6D6D2CFCF4E4F4D53504C3D3730342F271E1B151516131314
        1219191326271D33352BF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA683867D1E231514170F12130D16
        181326242048443F48453F3E3C331C1E19CFD2D0E3E2E0EAE4E4EEE8E8EFEBEA
        F1EDECF2EEEDF3EEEEF3EEEFF4F0EFF5F2EEF7F3F1F8F4F3F8F4F3F9F5F4F9F5
        F4FAF6F5FAF6F5FAF6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FB
        F7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FDF8F7
        FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7FCF8F7FBF7
        F6FDF9F8F9F5F4FBF7F6FCF8F7FCF8F7FCF8F7FCF8F7FBF7F6FBF7F6FBF7F6FB
        F7F6FCF7F6FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7FCF8F7FCF8F7FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FBF7F6FAF6F5FAF6F5FAF6F5F9F5F4F8F4F3F7F3F2F6F1
        F0F3EEEDF1ECEBEAE5E4E1DDDCD4D0CFB3AFAE3C383748403E40363226221D16
        19131416111818121E1F1627291E8C8D86F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA631342A191D1212140D
        1314101A1B1732302A55504B3F3C372426227A7B79E0DFDDE8E4E3EEE9E8EFEA
        E9F0ECEBF2EEEDF3EFEEF4EFEFF4EFF0F5F1F0F6F3EFF7F4F1F8F4F3F8F4F3F9
        F5F4F9F5F4FAF6F5FAF6F5FAF6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7
        F6FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7FBF7F6F9
        F5F4F7F3F2FAF6F5F7F3F2F9F5F4F9F5F4FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FCF7F6FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7FCF8F7FCF8F7FBF7
        F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6F5FAF6F5FAF6F5FAF6F5F9F5F4F8
        F4F3F7F2F1F5F0EFF3EEEDEFEAE9E6E1E0DAD6D5D5D1D0615D5C514B483B342F
        34302B1B1B1514141017161219191326271E323327F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6A6A9A32024191618
        1213140F15161321222046423D4E49413B3A361E2222D2D2D3EAE5E4EAE5E4EF
        EBEAEEEAE9F1EDECF3EFEEF4F0EFF4F0F0F4EFF0F5F1F0F6F3EFF7F4F1F8F4F3
        F8F4F3F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7
        F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FC
        F7F6FCF7F6FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FCF7F6FBF7F6
        F8F4F3F3EFEEF2EEEDF2EEEDF4F0EFF3EFEEF9F5F4FBF7F6FBF7F6FBF7F6FBF7
        F6FBF7F6FBF7F6FBF7F6FCF7F6FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7FCF8F7FC
        F8F7FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF6F5FAF6F5FAF6F5FAF6F5
        F9F5F4F8F4F3F8F3F2F6F1F0F4EFEEF2EDECECE8E7DEDAD9D6D2D1BDB9B8403C
        394B47423835302825201B18141413101A19142021192E2F2391908AF0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6575A4C1A
        1D141315131313101918152E2C2856524B3D3A32262725737476E1DEDFE7E1E0
        EDE8E7EEEAE9F1EEEDF2EEEDF3EFEEF5F1F0F5F1F0F5F1EFF6F2F0F7F4F0F7F4
        F1F8F4F3F8F4F3F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FAF6F5FBF7F6FBF7F6FB
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7F6FDF8F7FCF7F6FCF7F6FBF6
        F5FAF6F6F4EFEFEDE8E8D0CDCB85837ED1CECAF6F2F0F5F1EFFAF6F5FAF6F5FA
        F6F5FBF6F5FBF7F6FBF7F6FCF7F6FCF7F6FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7
        FCF8F7FCF8F7FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF6F5FBF6F5FBF6
        F5FBF6F5FAF5F4FAF5F4F9F4F3F7F2F1F5F1F0F2EEEDF0EBEAE7E2E1D9D4D3D4
        CFCE666361504D4A3A3631342F281F1B161816131515101A1B1527271F434139
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        282B1C171A131011121516131F1D18443F39504C43393932171919CDCACBE5E0
        DFE8E4E3ECE8E7F0ECEBF2EEEDF3EFEEF4F0EFF5F1F0F5F1EFF5F2EEF6F3EFF7
        F4F0F8F4F2F8F4F3F9F5F4F9F5F4FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6
        FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7
        F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7F6FDF8F7FCF7F6FC
        F7F6FBF6F6F9F4F5F3EEEFE8E3E48D8B860A0B0413120BAEAAA6FAF5F3F9F5F4
        FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FCF8
        F7FCF8F7FCF8F7FCF8F7FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FC
        F7F6FCF7F6FCF7F6FBF6F5FBF6F5FAF5F4F8F4F3F6F2F1F3EFEEF1ECEBE9E4E3
        DFDAD9D7D2D1AFACAC3B393847443F3D362E26211A18151114140F1618132222
        1C2F2E25B4B4ADF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A697968F1F211613140F111311191A16292722534E48413D342C2C25565858DE
        DCDCE8E3E2EAE6E5EEEAE9F1EDECF2EEEDF3EFEEF4F0EFF5F1F0F5F2EFF5F2EE
        F6F3EFF7F4F0F8F4F2F8F4F3F9F5F4F9F5F4FAF6F5FBF7F6FBF7F6FBF7F6FBF7
        F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FC
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7F6FDF8F7
        FCF7F6FCF7F6FAF5F4F7F3F2EBE7E6E1DDDC42403B0F10062A2821DAD6D2F7F2
        F0F9F5F4FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FDF8F7FDF8F7FDF8F7FDF8F7FD
        F8F7FCF8F7FCF8F7FCF8F7FCF8F7FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6
        FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FBF6F5FAF5F4F8F4F3F7F3F2F4F0EFF3EE
        EDEDE8E7E3DEDDDAD5D4D4D2D1545251514E493B342C312C251C191414140F13
        140F1C1C152C2B21696A5FF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA64B4B3E1A1B13151713131413191A16383631544F493B372E1B1B15
        AAACADE1DEDFE8E4E3ECE8E7EFEBEAF2EEEDF3EFEEF4F0EFF5F1F0F6F2F1F6F2
        F0F6F3EFF7F4F0F8F5F1F8F5F2F8F4F3F9F5F4F9F5F4FAF6F5FBF7F6FBF7F6FB
        F7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6
        FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FCF7
        F6FDF8F7FCF7F6FCF7F6F8F4F2F4F1EDE7E4E0C0BDB91918121011075C5A53F6
        F2EEF8F3F1F9F5F4FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FDF8F7FDF8F7FDF8F7
        FDF8F7FDF8F7FCF8F7FCF8F7FCF8F7FCF8F7FCF7F6FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FBF6F5FAF5F4F9F5F4F8F4F3F6
        F2F1F5F0EFF1ECEBE7E2E1DCD7D6D2CFCF9C9A9944403C464038342F28221F1A
        16161113140F18181229291D343629F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA62B2C1E1A1B1312140D151613201E1A47423D48443D3938
        302A2A26DDDDDDE4E1E0EAE6E5EDE9E8F0ECEBF2EEEDF4EFEEF5F0EFF5F1F0F6
        F2F1F6F2F0F6F3EFF7F4F0F8F5F1F8F5F2F8F4F3F9F5F4F9F5F4FAF6F5FBF7F6
        FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7
        F6FBF7F6FBF7F6FCF7F6FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FC
        F7F6FCF7F6FBF7F6FBF6F5FBF6F5FAF6F4F0ECE9E3E0DC7D7B77100F09171610
        ACA9A4EFEBE9F6F2F1F9F5F4FAF6F5FAF6F5FBF7F5FCF8F5FCF8F5FCF8F6FCF8
        F6FDF8F7FDF8F7FDF8F7FCF8F7FCF8F7FCF8F7FCF8F7FCF7F6FCF7F5FCF7F5FC
        F7F5FCF7F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FBF6F5FAF5F4F9F5F4
        F8F4F3F7F3F2F5F0EFF3EEEDECE7E6E1DCDBD7D3D3CBC8C8423F3B4C48403833
        2A2C272018171113150F1416102122182C2E22B0B0A9F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6A5A59E20201416170D14170E16171127231E5149433E
        3B322829236A6B69DFDDDCE4E0DFEDE9E8EEEAE9F1EDECF3EFEEF5F0EFF6F1F0
        F6F1F0F7F2F1F6F2F0F6F3EFF7F4F0F8F5F1F9F5F3F9F5F4FAF6F5FAF6F5FAF6
        F5FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6FB
        F7F6FBF7F6FBF7F6FBF7F6FCF8F7FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FDF8F7
        FDF8F7FDF8F7FCF7F6FAF6F5FAF6F5F9F5F4F4F0EFEFEBEADEDBD73938331312
        0C312E2ADFDCD8F4F0EFF8F4F3F9F5F4FAF6F5FAF6F5FBF8F5FCF9F5FCF9F5FC
        F9F5FCF8F6FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F6FDF8F5
        FDF8F5FDF8F5FCF7F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FBF6F5FAF5
        F4F9F5F4F9F5F4F7F3F2F6F1F0F4EFEEEEE9E8E4DFDEDAD5D5D1CDCD6F6B694E
        4B453D372E362E251D1B1313150E1315101C1F17292A2074736AF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6707067201F1513140C13140E1A1A15322E29
        534B4539352D181913B2B3B1DCDAD9EAE6E5EEEAE9EFEBEAF2EEEDF3EFEEF4F0
        EFF6F1F0F6F1F0F7F2F1F6F2F0F6F3EFF7F4F0F8F5F1F9F5F3F9F5F4FAF6F5FA
        F6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6
        FBF7F6FBF7F6FBF7F6FBF7F6FCF8F7FCF8F7FCF7F6FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FCF7F6FCF7F6FBF7F6FAF6F5FAF6F5F7F3F2F3EEEDE6E1E0B8B5B116
        16121614106F6C68F4F1EDF6F2F1F8F4F3FAF6F5FAF6F5FBF7F6FBF8F5FCF9F5
        FCF9F5FCF9F5FCF8F6FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8
        F6FDF8F5FDF8F5FDF8F5FCF7F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FB
        F6F5FAF6F5FAF6F5F9F5F4F7F3F2F7F2F1F4EFEEF0EBEAE7E2E1DCD7D6D3CFCD
        ADAAA644413E443E383B332A23211814150F131611181A1328291F3E3D33F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA638392B1C1A1315160F13130F1C1C
        183F3A364A413C39362D24251FD6D7D5E3E1E0EAE6E5EFEBEAF0ECEBF2EEEDF3
        EFEEF4F0EFF6F1F0F6F1F0F7F2F1F6F2F0F6F3EFF7F4F0F8F5F1F9F5F3F9F5F4
        FAF6F5FAF6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FCF7F6FBF7
        F6FBF7F6FBF7F6FBF7F6FAF6F5FAF6F5FAF6F5FBF7F6FBF7F6FCF7F6FCF7F6FC
        F7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF7F6FAF6F5FAF6F5F5F1F0EDE8E7E7E2E1
        726F6B12110C1D1C16B7B4AFF4F1EDF8F4F3F8F4F3FAF6F5FBF7F6FBF7F6FCF8
        F6FCF9F5FCF9F5FCF9F5FCF8F6FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FDF8F7FD
        F8F7FDF8F6FDF8F5FDF8F5FDF8F5FCF7F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6
        FBF6F5FBF6F5FAF6F5FAF6F5FAF6F5F8F4F3F7F2F1F5F0EFF2EDECEAE5E4E0DC
        D9D8D5CFC5C2BF9A95964B443F3C342B27251C17191214171217191325261C30
        2F25F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA626271A1B1B1413130E15
        161222211D4B46413D383132312B4E4E4DDEDDDCE3E0DFECE8E7F0ECEBF1EDEC
        F2EEEDF3EFEEF4F0EEF6F1EFF6F1EFF7F2F0F7F3F0F7F4EFF7F4F0F8F5F2F9F5
        F3F9F5F4FAF6F5FAF6F5FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FCF7F6FCF7F6FC
        F7F6FBF7F6FBF7F6FBF7F6FBF7F6FAF5F4F7F3F2F8F4F3FAF6F5FBF7F6FCF8F7
        FAF6F5FAF6F5FBF7F5FAF6F4FBF7F4FBF7F4FBF8F5FAF7F4F9F6F3F4F0EEECE8
        E6D9D5D3302D2912100C403E39E6E3DFF5F2EEF7F4F1FAF6F5FAF6F5FAF6F5FB
        F7F6FBF8F5FCF9F5FCF9F5FCF9F5FCF8F5FDF8F6FDF8F6FDF8F6FDF8F6FDF8F6
        FDF8F6FDF8F6FCF8F5FCF8F5FCF8F5FCF8F5FCF7F5FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FBF6F5FBF6F5FAF6F5FAF6F5FAF6F5F8F4F3F7F3F2F5F1EEF3EFECEB
        E7E5E1DDD9D9D6D1C8C4C0BBB8B7534F4B3C352D2D291F1A1A13131511181913
        1F20182B2B219D9D96F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6AEAEA5212217161813
        12130E1517122826214E494336362C22231F838383DDDBDAE8E4E3ECE7E6F0EB
        EAF1EDECF2EEEDF3EFEEF5F0EEF6F1EEF7F2EFF7F2EFF8F4F0F8F5F0F8F5F1F9
        F5F4F9F5F4FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6
        FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FAF5F4F7F3F2F6F2F1F7F3F2FAF6
        F5F7F4F3F9F6F5FBF7F6F7F3F1F8F5F1F8F5F1F8F5F1FAF7F3F9F6F2F8F5F1F1
        EEEAE4E1DDABA8A413110D1714107C7974F2EFEBF7F4F0F7F4F0F9F6F3FAF6F5
        FAF6F5FBF7F6FBF8F5FCF9F5FCF9F5FCF9F5FCF8F5FDF8F5FDF8F5FDF8F5FDF8
        F5FDF8F5FDF8F5FDF8F5FCF8F5FCF9F5FCF9F5FCF9F5FCF8F6FCF8F7FCF8F7FC
        F8F7FCF8F7FCF8F7FBF7F6FBF7F6FAF6F5FAF6F5FAF6F5F9F5F4F8F4F2F5F2EE
        F3F0ECECE9E5E5E1DEDDD9D6CDCAC5C1C0BC6C6A66403C35342E231B1A131315
        111817131D1D1626271D6C6C62F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA686857B1F20
        1513151012130E1618132E2C2747423C36362C161713B3B3B3DCDAD9E8E4E3EF
        EAE9F1EDECF2EEEDF3EFEEF4F0EFF5F0EEF6F1EEF7F2EFF7F2EFF8F4F0F8F5F0
        F8F5F1F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5F8F4F3F6F2F1F4
        F0EFF4F0EFF8F6F5F8F4F3FCF9F8F8F4F2F8F5F1F6F3EFF6F3EFF8F5F1F7F4F0
        F6F3EFECE9E5E4E1DB615E5813110A211F18C3C0BBF2EFEBF7F4F0FBF8F4FBF7
        F5FAF6F5FAF6F5FBF7F6FBF8F5FCF9F5FCF9F5FCF9F5FCF8F5FDF8F5FDF8F5FD
        F8F5FDF8F5FDF8F5FDF8F5FDF8F5FCF8F5FCF9F5FCF9F5FCF9F5FCF8F6FCF8F7
        FCF8F7FCF8F7FCF8F7FCF8F7FBF7F6FBF7F6FAF6F5FAF6F5FAF6F5F9F5F4F8F4
        F2F5F2EEF4F1EDEEEBE7E5E1DDDCD8D5D3D0CCBAB9B54C4A4648443D3933281F
        1E161315111514101C1C1525261C3E3E33F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA65F
        5E531E1F1413140F13140F181A1435332E3F3A3437372D1D1F1BD1D1D1E1DFDE
        E9E5E4EEEAE9F0ECEBF2EEEDF3EFEEF4F0EFF5F1EFF6F1EEF7F2EFF7F2EFF8F4
        F0F8F5F0F8F5F1F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FC
        F7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5F9F5F4
        F7F3F2F4F0EFF6F2F1D4D0CFE3E0DFF6F2F1F8F4F2F8F5F1F6F3EFF6F3EFF6F3
        EFF6F3EFF2EFEBE7E4E0D3D1CA25241B13110846453CEBE9E2F6F3EFF7F4F0F9
        F6F2F9F5F3FAF6F5FAF6F5FBF7F6FBF8F5FCF9F5FCF9F5FCF9F5FCF8F5FDF8F5
        FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FCF8F5FCF9F5FCF9F5FCF9F5FCF8
        F6FCF8F7FCF8F7FCF8F7FCF8F7FCF8F7FBF7F6FBF7F6FAF6F5FAF6F5FAF6F5F9
        F5F4F8F5F2F6F3EFF5F2EEF0EDE9E8E4E0E1DDD9D4D1CDCBCAC54F4D494E4A43
        39332824231B14161214130F1A1B1325261D2D2E22F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA63F3F301A1B1313140D14150F1C1C163C39343C393137362F323230DEDC
        DCE0DDDCECE8E7F0EBEAF3EEEDF3EFEEF3EFEEF4F0EFF5F1EFF6F1EEF7F2EFF7
        F2EFF8F4F0F8F5F0F8F5F1F9F5F3F9F5F3F9F5F4FAF6F5FAF6F5FBF6F5FCF7F6
        FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6
        F5FAF6F5F8F4F3F7F3F2F7F3F1363230454240F8F6F5F8F6F3F8F6F2F7F4F0F5
        F2EEF4F1EEF4F1EEEEEBE7E2DFDBA19F9810100519181089877EF2F0E9F6F3EF
        F8F5F1F8F5F1FBF7F5FAF6F5FAF6F5FBF7F6FBF8F5FCF9F5FCF9F5FCF9F5FCF8
        F5FCF8F5FCF8F5FCF8F5FCF8F5FCF8F5FCF8F5FCF8F5FCF8F5FCF8F5FCF8F5FC
        F8F5FCF8F5FCF8F6FCF8F6FCF8F6FCF7F5FCF7F5FBF7F5FBF7F5FAF6F4FAF6F5
        FAF6F5F9F5F4F8F5F2F6F3EFF5F2EEF1EEEAEAE6E2DFDAD7DAD6D2CECBC76464
        604D4B443A352A26241C16171313130F18181223231928281CF0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA630322018181313150C15160F201D183E3C3538362D33302C50
        4E4DE1DFDEE4E0DFECE8E7F0ECEBF2EEEDF3EFEEF3EFEEF5F1F0F5F1EFF6F1EE
        F7F2EFF7F2EFF8F4F0F8F5F1F8F5F1F9F6F2F9F5F3F9F5F4FAF6F5FAF6F5FBF6
        F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FC
        F7F6FBF6F5FAF6F5FAF6F5F8F4F3F6F2EFD1CDC9110E0B838180F8F6F4F5F4F0
        F6F3EFF8F4F0F5F1EFF0ECEBE5E2DEDAD7D35C5B530F110626241CCAC7BFF4F0
        ECF6F3EFF8F5F1F9F6F2FAF6F4FBF7F6FBF7F6FCF8F7FCF8F6FCF9F5FCF9F5FC
        F9F5FCF9F5FCF9F5FCF9F5FCF9F5FCF9F5FCF9F5FCF9F5FCF9F5FCF8F5FDF8F5
        FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FCF7F4FCF7F4FCF7F4FCF7F4FBF6
        F4FBF6F5FBF6F5FAF5F4F9F5F2F6F3EFF5F2EEF1EEEAEBE7E3E1DCD9DBD6D3D0
        CBC880807C4A4B433B372C27251D18181413141018191224221926261BA5A59C
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA62A2B1918181312150C15160F211E193E3C35323128
        28272270716FDEDCDCE5E1E0EDE9E8EFEBEAF1EDECF3EFEEF3EFEEF5F1F0F5F1
        EFF6F1EEF7F2EFF7F2EFF8F4F0F8F5F1F8F5F1F9F6F2F9F5F3F9F5F4FAF6F5FA
        F6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6
        FCF7F6FCF7F6FBF6F5FBF7F6FAF6F5F8F4F3F7F3F0F5F3EEA2A09C080605C3C2
        C0F1F0ECF9F6F2F5F1EEF4F0EEEDE9E8DCD9D5CAC7C121201813140C504E47EC
        E8E4F3EFEBF6F3EFF8F5F1FAF7F3FAF7F4FBF7F6FBF7F6FCF8F7FBF8F5FBF8F4
        FBF8F4FBF8F4FBF8F4FCF9F5FCF9F5FCF9F5FCF9F5FCF9F5FCF9F5FCF9F5FCF8
        F5FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FCF7F4FCF7F4FCF7F4FC
        F7F4FBF6F4FBF6F5FBF6F5FAF5F4F9F5F3F7F4F0F5F2EEF1EEEAECE8E4E2DDDA
        DCD7D4CFCAC79B9C9842433B3F3B302A27201919151314101617102221182727
        1C8A8981F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA62C2D1B18181312150C15150F221F1A3C3B
        342F30271D1F1A8B8E8CDAD9D9E6E2E1EEEAE9F0ECEBF1EDECF3EFEEF3EFEEF5
        F1F0F5F1EFF6F1EEF7F2EFF7F2EFF8F4F0F8F5F1F8F5F1F9F6F2F9F5F3F9F5F4
        FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FCF7F6FCF7F6FBF7F6FBF7F6FBF7F6F9F5F4FAF7F4F3F0EBF9F6F271
        6F6E22211FEBEAE7F5F2EEF5F1EDF2EEECE8E4E3D7D4D08E8B87111009171711
        9A9792F0ECE9F8F4F0F7F4F0F9F6F2FAF7F3FAF7F4FBF7F6FBF7F6FCF8F7FBF8
        F5FBF8F4FBF8F4FBF8F4FBF8F4FCF9F5FCF9F5FCF9F5FCF9F5FCF9F5FCF9F5FC
        F9F5FCF8F5FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FDF8F5FCF7F4FCF7F4
        FCF7F4FCF7F4FBF6F4FBF6F5FBF6F5FAF5F4F9F5F3F7F4F0F6F3EFF2EFEBECE8
        E4E4DFDCDCD7D4CEC9C5AFAFAB3E3E36413D322B29211A1A1611130E14140E1F
        1E1527261B6D6D63F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6B4B4A92C2D1D15181011130C16161124
        211D3A39332F32241A1B15A2A1A3DCDCDAE7E3E2EFEBEAF0ECEBF2EEEDF3EFEE
        F4EFEEF5F1F0F5F1EFF6F1EEF7F2EFF7F2EFF8F4F0F8F5F1F8F5F1F9F6F2F9F5
        F3F9F5F4FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FC
        F7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FAF6F5FAF6F5F9F5F4F7F3F0F7F4F0
        F2EFEBF0EDEB413F3D54524FF4F2EEF2EFEBF1ECE9E0DCD9D2CFCA4A49421313
        0B2D2B24D3D0CBF1EDEBF4F1EEF6F3EFF8F5F1FAF7F3FAF6F4FAF6F5FAF6F5FB
        F7F6FBF7F5FBF7F5FBF7F5FBF7F5FBF7F4FCF8F5FCF8F5FCF8F5FCF8F4FCF8F4
        FCF8F4FCF8F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF8F4FCF8F4FCF8F4FBF7
        F4FBF7F4FBF7F4FBF7F4FAF6F3FAF6F4FAF6F4F9F5F3F9F6F2F7F4F0F6F3EFF2
        EFEBEDE9E5E4DFDCDCD7D4D2CDCABFBDB943413A423F352E2A221D1C1613130E
        13130D1C1C13232219515245F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6A9A89E292C1D151A1011130C
        17171326231F3634313034231A1A14B3AFB4DDDBD7E8E4E3F0ECEBF1EDECF3EF
        EEF4EFEEF5F0EFF6F1F0F6F1EFF6F1EEF7F2EFF7F2EFF8F4F0F8F5F1F8F5F1F9
        F6F2F9F6F3FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6
        FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FAF6F5FAF6F5F9F5F4F9F5
        F3F7F4F0F3F0ECF4F2EEDEDBD7201D1A918F8BECE9E5E7E3E0D9D5D1BAB8B116
        170F131208615D55EAE7E2F2EEEDF2EFEDF6F3EFF8F5F1F9F6F2F9F5F3FAF6F5
        FAF6F5FBF7F6FBF7F6FBF7F6FBF7F6FBF7F6FCF7F5FDF8F5FDF8F5FDF8F5FCF7
        F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF7F4FBF8F4FBF8F4FB
        F8F4FBF8F4FBF8F4FBF8F4FBF8F4FAF7F3FAF7F3FAF7F3F9F6F2F9F6F2F7F4F0
        F6F3EFF2EFEBEDE9E6E3DEDBDED9D6D2CDCAC8C4C048463F413F362F2D23211F
        1715141014150E1A1B1325241D414133F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6A19F96282B1C161B
        1113140E171713282521312F2C323524181813BFBBC0DDDBD7E8E4E3F0ECEBF1
        EDECF3EFEEF4EFEEF5F0EFF6F1F0F6F1EFF6F1EEF7F2EFF7F2EFF8F4F0F8F5F1
        F8F5F1F9F6F2F9F6F3FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FAF6F5FAF6F5F9
        F5F4F8F4F2F5F2EEF4F1EDEEEBE7EAE7E3BEBBB7110E0BBFBCB8DDD9D6CECAC5
        7E7B750E0F061C1A12A5A199E8E4E0F1EDECF1EFEDF5F2EEF7F4F0F8F5F1F8F5
        F2F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FBF6F4FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF7F4FBF8F4
        FBF8F4FBF8F4FBF8F4FBF8F4FBF8F4FBF8F4FAF7F3FAF7F3FAF7F3F9F6F2F9F6
        F2F7F4F0F6F3EFF2EFEBEEEAE6E4DFDCDED9D6D3CECBCCCBC54C4D4542413830
        2E2421201816161215160F1C1D14282720343527F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA69F9E962A
        2D1E151A1012140D1615112724202E2C29323524171712C3BFC5DEDCD8E8E4E3
        F0ECEBF1EDECF3EFEEF4EFEEF5F0EFF6F1F0F6F1EFF6F1EEF7F2EFF7F2EFF8F4
        F0F8F5F1F8F5F1F9F6F2F9F6F3FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FC
        F7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FAF6F5
        FAF6F5F9F5F4F8F4F2FAF7F3F3F0ECF0EDE9EAE7E3EDEAE68C898525221FCCC8
        C4C5C1BD35332D11120837352BD2CEC5E6E3DEEAE6E5F0EEECF4F1EDF6F3EFF7
        F4F0F7F4F1F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FAF6F5FAF6F5FBF6F4FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF7
        F4FBF8F4FBF8F4FBF8F4FBF8F4FBF8F4FBF8F4FBF8F4FAF7F3FAF7F3FAF7F3F9
        F6F2F9F6F2F7F4F0F6F3EFF2EFEBEEEAE6E4DFDCDFDAD7D3CECBCDCBC74E5049
        42443B2E2D2321211917161214150E1D1E142928212F3022F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        A2A2992C2E1F161A1012130C16151326241F2E2E272F3423161712C3C0C5DEDD
        D9E8E4E3EFEBEAF1EDECF3EFEEF4EFEEF5F0EFF6F1F0F6F1EFF6F1EEF7F2EFF7
        F2EFF8F3F0F8F4F2F8F4F2F9F5F3F9F5F3FAF6F5FAF6F5FAF6F5FBF6F5FCF7F6
        FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6
        F5FBF6F5FAF6F5FAF5F4FBF7F4F8F5F1F7F4F0F3F0ECEDE9E6E5E2DEE7E4E058
        56513D3A373C3A360F0E090C0D06595951D4D1CBE2E0DCE9E6E5ECEAE9F1EFEC
        F4F2EFF4F2EFF5F2F0F6F2F1F8F4F3F9F5F4FAF6F5FAF6F5FAF6F5FAF5F4FAF5
        F4FAF6F4FBF6F4FBF6F4FBF6F4FBF7F3FBF7F3FBF7F4FBF7F4FBF6F4FBF6F4FB
        F6F4FAF7F4FBF8F4FBF8F4FBF8F4FBF7F4FBF7F5FBF7F5FBF7F5FAF7F3FAF7F3
        FAF7F3F9F6F2F9F6F2F7F4F0F6F3EFF2EFEBEDEAE6E5E1DDDEDAD6D3CFCCCCCA
        C554554D4242392C2C2222221A16151214140F1B1B142B29252F3022F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6A7A79F2E3021171A0F13130C17151425251E2D2F262D3322151712C3
        C1C8DCDBD8E7E3E2EFEBEAF1EDECF3EFEEF4EFEEF5F0EFF6F1F0F6F1EFF6F1EE
        F7F2EFF7F2EFF8F3F1F8F4F3F8F4F3F9F5F4F9F5F4FAF6F5FAF6F5FAF6F5FBF6
        F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FC
        F7F6FCF7F6FCF7F6FBF6F5FBF6F5FAF6F3F8F5F1F9F6F2F5F2EEF0ECEAE6E3DF
        E0DDD8BEBBB50C0C050A0C070B0D080C0E09252520B8B7B2CFCECADDDBDAE5E3
        E3E7E5E4ECEAE9EFEDECF3F0EFF5F1F0F7F3F2F8F4F3F9F4F3FAF5F4F9F5F4F9
        F5F4F9F5F4F9F5F4F9F5F4F9F5F4F8F5F2F8F5F1F9F6F2F9F6F2FAF6F4FAF6F5
        FAF6F5FAF6F5FAF7F4FBF8F4FBF8F4FBF8F4FBF7F5FCF7F6FCF7F6FCF7F6FBF7
        F4FAF7F3FAF7F3F9F6F2F9F6F2F7F4F0F6F3EFF2EFEBECE9E5E5E2DEDDDAD6D2
        CFCBCCC9C45B59524442392D2C222222191716121414101A1A152C2A282E2E20
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6ADADA5333526171A0F13140D18161526261F2D2F262E3423
        151712C0BEC3DBDAD6E7E3E2EFEBEAF0ECEBF3EEEDF4EFEEF5F0EFF6F1F0F6F1
        EFF6F1EEF7F2EFF7F2EFF8F3F1F8F4F3F8F4F3F9F5F4F9F5F4FAF6F5FAF6F5FA
        F6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6
        FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FBF6F5FAF6F4F9F6F2F9F6F2F7F4F0F4F1
        EEEBE8E4E8E5E15A58510D0D060C0F070B0D060D0F08080A0493938CD0D0CBD1
        CFCCD7D5D3DAD8D7E0DEDDE5E3E2E9E6E5EEEAE9F2EEEDF3EFEEF4F0EFF6F2F1
        F7F3F2F8F4F3F9F5F4F9F5F4F9F5F4F9F5F4F9F5F3F9F6F2F9F6F2FAF7F3FAF6
        F4FAF6F5FAF6F5FAF6F5FAF6F4FAF7F3FAF7F3FAF7F3FAF6F4FBF6F5FBF6F5FB
        F6F5FAF6F4FAF7F3FAF7F3F9F6F2F8F5F1F6F3EFF5F2EEF2EFEBEBE8E4E4E1DD
        DCD9D5D1CECACCC9C45A58514342392D2C2221211717171113140D1A1A132F2D
        2A2E2E20F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6353728171A0F13130C17151425251E2E30
        272D3322141611B4B2B7DBDAD7E6E2E1EEEAE9F0ECEBF3EEEDF4EFEEF5F0EFF6
        F1F0F6F1EFF6F1EEF7F2EFF7F2EFF8F3F1F8F4F3F8F4F3F9F5F4F9F5F4FAF6F5
        FAF6F5FAF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FBF6F5FBF6F5FBF7F4F9F6F2F9F6F2F8
        F5F1F5F2EFF4F1EDF0EDE876736D13140C0A0E040C1006090D030E10072A2B22
        5D5E5693928DBFBDBBD7D5D4E4E2E1E2E0DFE2DFDEE3DFDEE5E1E0E9E5E4EBE8
        E7EBE9E8EDEBEAEFEDECF2EFEEF4F0EFF5F1F0F6F2F1F7F4F1F8F5F1F8F5F1F9
        F6F2F8F5F2F9F5F4F9F5F4F9F5F4F9F6F3FAF7F3FAF7F3FAF7F3FAF6F4FBF6F5
        FBF6F5FBF6F5FAF6F4FAF7F3FAF7F3F9F6F2F8F5F1F6F3EFF5F2EEF1EEEAEBE8
        E4E3E0DCDBD8D4D0CDC9CAC7C256544D4240372D2C2220211617180F13140B1A
        1B13302E2A313123F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA637382A191A0F13130B16151224
        231D2F30272C3022171813A9A7A9DDDBD9E6E2E1EEEAE9F0ECEBF2EEEDF4EFEE
        F4EFEEF6F1F0F6F1EFF6F1EEF7F2EFF7F2EFF8F3F0F8F4F2F8F4F2F9F5F3F9F5
        F3FAF5F3FAF6F4FAF6F4FBF6F4FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6FC
        F7F6FCF7F5FCF7F5FCF7F5FCF7F5FCF7F5FCF7F5FBF6F4FBF6F4FBF6F4F9F5F2
        F9F5F2F9F5F1F8F4F1F4F1ECF5F1ECC8C4BE14140D13150A0E110513150B3233
        2879776D4A483E24221917150F22201A46443E76746EA8A5A1D1CECBEAE6E4ED
        E9E7E9E6E5E3E1E1E4E1E2E7E5E5E8E5E5EBE8E7ECE9E8F1EEEDF1EFEDF2F0ED
        F3F1EEF5F2F0F6F3F1F7F4F1F9F6F3F8F4F2F9F6F3F9F6F2F9F6F2F9F6F2FAF6
        F3FAF6F4FAF6F3FAF6F3F9F6F3FAF7F3F9F6F2F8F5F1F8F5F1F6F3EFF5F2EEF1
        EEEAEAE7E3E3E0DBDBD7D3CFCCC7C8C4C0504E483E3C342C2B21212117161710
        14140D1C1B13322F2B333425F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA63E3E301C1C1013130B
        15150F21201B2F30282B2D221B1B169A9897DAD7D7E5E1E0EDE9E8F0ECEBF2EE
        EDF4EFEEF4EFEEF6F1F0F6F1EFF6F1EEF7F2EFF7F2EFF8F4F0F8F5F1F8F5F1F9
        F6F2F9F5F2FAF5F2FBF6F3FBF6F3FBF6F4FCF7F6FCF7F6FCF7F6FCF7F6FCF7F6
        FCF7F6FCF7F6FCF7F5FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6
        F3FBF6F3FAF5F2FAF5F2FAF5F1F5F1ECF6F2EDF7F3EEA2A1992A2B2217180E21
        23196C6A63F5F0EAF7F3EDEEE9E3CFCBC3A4A298706E643F3D32201E1517140F
        2A272156544D85837EB8B7B3DEDDD9ECEBE8EAE9E6E6E4E2E3E2DFE5E3E1E6E4
        E3E6E4E3EBE9E8EBE9E8F1EEECF0EDE9F4F1EDF5F2EEF6F3EFF6F3EFF8F5F1FA
        F7F3FAF7F3F9F6F2F9F6F2F9F6F2F9F6F2FAF7F3F9F6F2F8F5F1F8F5F1F6F3EF
        F4F1EDF0EDE9EAE6E2E4E0DBDAD6D1CFCBC5C5C3BE4645403A383129271E1E1E
        161416111515101F1C1734312C414132F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA64646381E1F
        1313140B14140E1E1E192D2E262A2C2121201B807E7DDAD6D7E3DFDEECE8E7F0
        ECEBF2EEEDF4EFEEF4EFEEF6F1F0F6F1EFF6F1EEF7F2EFF7F2EFF8F4F0F8F5F1
        F8F5F1F9F6F2F9F5F2FAF5F2FBF6F3FBF6F3FBF6F4FCF7F6FCF7F6FCF7F6FCF7
        F6FCF7F6FCF7F6FCF7F6FCF7F5FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FC
        F7F4FBF6F3FBF6F3FAF5F2FAF5F2F9F4F0F9F5F0F6F2EDF4F0EBF4F2ECEDEBE4
        E3E0DAE7E4DE34312DBAB5B5EFEBEBF2EDEDF0ECE9F5F2EBF5F2ECF5F2EBE5E2
        DBC3C1B89492895C5A51312F2615130B19170F36352C68665E9C9A93CCCAC2E9
        E7E0EBE9E4EBE9E7E2E0DEE4E2E0E7E5E2E8E5E1E9E6E2ECE9E5EFECE8F0EDE9
        F2EFEBF3F0ECF5F2EEF7F4F0F7F4F0F7F4F0F8F5F1F8F5F1F9F6F2F9F6F2F8F5
        F1F6F3EFF4F1EDEFECE8E9E6E1E2DED9D9D5D0CFCBC5C2C0BB3F3E393A373128
        261D1C1C14131510161611221F1A36332E59594CF0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA653
        534522221514150C13130D1B1B162A2B232A2B202828235D5B5BDDDADAE2DEDD
        EBE7E6F0ECEBF2EEEDF4EFEEF4EFEEF6F1F0F6F1EFF6F1EEF7F2EFF7F2EFF8F4
        F0F8F5F1F8F5F1F9F6F2F9F5F2FAF5F2FBF6F3FBF6F3FBF6F4FCF7F6FCF7F6FC
        F7F6FCF7F6FCF7F6FCF7F6FCF7F6FCF7F5FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FAF6F2FAF6F1F9F5F0F5F1ECF6F1
        EEF4F0EDF0ECEAEEEAE7D4D1CE2F2B29E0DDDBF0ECEAF4F0EEF4EFEDF3EEECF4
        EFEDF0ECE9F2EFECF5F1EEF9F7F4F4F1ECDEDCD6B3B1AA827F784E4C4328261C
        18170D211F154A4941797873ACACA7D5D5D0E8E6E1EFECE8E9E6E2E7E4E0E6E3
        DFE7E4E0E9E6E2EDEAE6F1EEEAF3F0ECF4F1EDF5F2EEF5F2EEF6F3EFF7F4F0F7
        F4F0F8F5F1F6F3EFF3F0ECEEEBE7E8E5E0E1DDD8D8D4CFCFCBC5B9B7B23B3B36
        35322C26241B1C1C1413140F15151024211C37342F717166F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA664635429261814150C11130C1919152B29242A2B212A2B253C3C3CDEDB
        DCE1DDDCEAE6E5F0ECEBF2EEEDF4EFEEF4EFEEF6F1F0F6F1EFF6F1EEF7F2EFF7
        F2EFF7F3F0F8F5F1F8F5F1F9F6F2F8F5F1F9F5F1FAF6F2FAF6F2FAF6F4FBF6F5
        FBF6F5FBF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F5FCF7F4FCF7F4FCF7F4FBF7
        F4FBF7F4FBF7F4FBF7F4FBF7F4FCF7F4FBF6F3FBF6F3FAF5F2F9F4F0FAF6F2F9
        F4F0F7F2EFF5F0EEF7F2F0F3EEECF3F0ECADACA63E3D37F4F3EDF4F2EDF5F1EE
        F7F3F0F4F0EDF2EEECF2EEEDF3EFEEF2EEEDF6F2F0F6F2EEF6F2EFF8F4F1FAF7
        F2F0EEE6D1CFC8A4A19A6F6D644040361D1D1319191031302757554E8F8D86C1
        BFB8E3E1DCF1EEECEDEAE8EBE8E6ECE9E6F1EDEBF2EEECF4F0EEF6F3F0F5F2EE
        F6F3EFF8F5F1F8F5F1F6F3EFF3F0ECEEEBE7E7E4E0E0DCD7D6D3CECECAC4ADAA
        A53C3A352F2C2624221B1B1B1513140E17181027251F35322C86867DF0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA67D7B6D36312217160D10130D131412282623292A222B2D2621
        2323D7D5D7DEDAD9E8E4E3EFEBEAF1ECEBF4EFEEF4EFEEF6F1F0F6F1EFF6F1EE
        F7F2EFF7F2EFF7F3F0F7F4F0F8F5F1F8F5F1F8F5F1F8F5F1F9F6F2F9F6F2FAF6
        F4FBF6F5FBF6F5FBF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F5FCF7F4FCF7F4FC
        F7F4FBF7F4FBF8F4FBF8F4FBF8F4FBF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3
        FAF5F2FAF5F2F8F3F0F7F2EFF6F1EEF5F0EDF4F0EDF5F2EE827F7B726F6CF8F5
        F1F8F5F0F4F1ECF8F5F0F5F2EEF4F1EDF5F2EEF5F2EEF6F3EFF7F4F0F6F3EFF6
        F3EFF6F3EFF5F2EEF5F2EEF6F3EFF6F4EFF9F6EFEBE9E2C1BEB79290885E5D54
        2F2D2417160E1A1A123838316C6D65A3A39CD2D1CCF2F0ECFAF8F4F9F6F2F8F5
        F1F7F4F0F9F6F2F9F6F2F8F5F1F6F3EFF3F0ECEDEAE6E6E3DEDFDCD7D6D3CECA
        C7C19895903E3B362B2823221F1A1B1A1713140E16180D2B2922323128989791
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6A5A299433E3018180E0F130C12131024221F282821
        2A2D25141616C4C2C5DEDAD9E5E1E0EEEAE9F1ECEBF4EFEEF4EFEEF6F1F0F6F1
        EFF6F1EEF7F2EFF7F2EFF7F3F0F7F4F0F7F4F0F8F5F1F8F5F1F8F5F1F9F6F2F9
        F6F2FAF6F4FBF6F5FBF6F5FBF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F5FCF7F4
        FCF7F4FCF7F4FBF7F4FBF8F4FBF8F4FBF8F4FBF7F4FCF7F4FCF7F4FCF7F4FBF6
        F3FBF6F3FAF5F2FAF5F2FAF5F2FAF5F2F8F3F0F8F3F0F6F2EEF4F1EDF6F4F04F
        4C49AAA7A4F5F3F0F9F6F4F8F5F2F7F4F0F7F4F0F7F4F0F7F4F0F8F5F1F9F6F2
        F8F5F1F8F5F1F8F5F1F7F4F0F7F4F0F6F3EFF7F3F0F6F1EFF5F0EEF5F0EEF6F3
        EFF9F8F2F3F1EAD9D8D1AFAEA57C7C7047473B1F1F1416150E23201B524F4A87
        847FE0DDD9FAF7F3F8F5F1F8F5F1F8F5F1F6F3EFF2EFEBEBE8E4E5E2DDDFDCD7
        D4D1CCCAC7C17D7A753F3C37282520201D181A191511130C16180D302D272D2C
        23ACACA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6504A3C1D1D130F130C1314121F1D
        1A26271F282B23171A199A989BDEDAD9E3DFDEECE8E7F1ECEBF4EFEEF4EFEEF6
        F1F0F6F1EFF6F1EEF7F2EFF7F2EFF7F3EFF6F3EFF7F4F0F7F4F0F8F5F1F8F5F1
        F9F6F2F9F6F2FAF6F4FBF6F5FBF6F5FBF6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7
        F5FCF7F4FCF7F4FCF7F4FBF7F4FBF8F4FBF8F4FBF8F4FBF7F4FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FBF6F3FBF6F3FAF5F2FBF6F3FAF5F2F9F4F1F7F3F0F7F4F0
        F3F0ECE9E7E3393533D3D0CFF7F3F2FAF6F5F9F5F3F9F6F2F8F5F1F7F4F0F8F5
        F1F9F6F2FAF7F3FAF7F3FAF7F3F7F4F0F8F5F1F9F6F2F8F4F0FAF6F2F9F5F1F8
        F4F0F8F4F0F8F5F1F5F2EDF5F2EEF5F2ECF9F6F0FAF8F2EDEBE4CCC9C29E9B95
        66635D302E28C8C5BFFAF7F3F7F4F0F8F5F1F8F5F1F5F2EEF1EEEAE9E6E2E3E0
        DCDBD8D3D0CDC8C9C5C05F5C573E3B3626231E1F1C1718171310130B17190E35
        332C29271FF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA65C574A2523190E130A13
        14111B1A1726262127292221231F686868D9D6D7E2DFDFE9E5E4F1EDECF3EEED
        F4EFEEF5F0EFF5F0EEF6F1EEF7F2EFF7F2EFF7F3EFF6F3EFF7F4F0F7F4F0F8F5
        F1F8F5F1F8F5F1F9F6F2FAF6F3FBF6F5FBF6F5FBF6F5FBF6F5FCF7F6FCF7F6FC
        F7F6FCF7F5FCF7F4FCF7F4FCF7F4FBF7F4FBF7F4FBF7F4FBF7F4FBF7F4FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FAF5F2FAF5F2F9F4F1F9F5
        F2F6F3EFF7F4F0F7F4F0D2CECB3B3835F0EEECF9F5F3F6F3F0F8F5F1F8F5F1F6
        F3EFF7F4F0F8F5F1F9F6F2FAF7F3FAF7F3FBF7F3FAF6F2FAF6F3FBF7F3FAF6F0
        F9F5F0F9F5F0F9F6F1F7F4F0F6F3EFF7F4F0F8F4F1F7F3F0F6F2EFF5F1EFF6F2
        EEF8F5EFFBF9F4F5F3EEFAF8F3F8F5F1F8F5F1F9F6F2F7F4F0F3F0ECEEEBE7E8
        E5E1E3E0DCD9D5D1CDCAC5C1BFBA484642383632201F181E1C1815141012130B
        1A1B123836312A2920F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA67F7B712B281D
        12150C15171217171422231F232520272A22363733DAD9DBDFDDDDE6E2E1EFEB
        EAF2EDECF4EFEEF5F0EFF5F0EEF6F1EEF7F2EFF7F2EFF6F2EFF7F4F0F7F4F0F8
        F5F1F8F5F1F8F5F1F8F5F1F9F6F2FAF6F3FBF6F5FBF6F5FBF6F5FBF6F5FCF7F6
        FCF7F6FCF7F6FCF7F5FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FAF5F2FA
        F5F2F8F4F1F8F5F1F8F5F1F7F4F0F6F3EFA5A29F5E5B57F9F6F2FBF9F5F7F4F0
        FAF7F3FAF7F3F6F3EFF8F5F1F9F6F2FAF7F3FBF7F3FCF7F4FCF7F4FCF7F4FCF7
        F4FBF6F3FBF6F3FAF5F2F9F5F2F9F6F2F9F6F2F9F6F2F8F5F1F8F5F1F7F4F0F7
        F4F0F7F4F0F7F4F0F7F4F0F8F5F1F8F5F1F8F5F1F8F5F1F7F4F0F6F3EFF1EEEA
        ECE9E5E6E3DFE0DCD8D6D2CFCDCAC5AEADA93938362E2D281D1E141C1B151313
        0E13140B1E1F1736353147483FF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6AEAA
        A23E3B2E13170D12130D1415121F201C23241F292B24151613C7C5C8DBD9D9E8
        E4E3EDE8E7F1ECEBF3EEEDF5F0EFF5F0EEF6F1EEF6F1EEF7F2EFF6F2EFF6F3EF
        F6F3EFF7F4F0F7F4F0F8F5F1F8F5F1F9F6F2FAF6F3FBF6F5FBF6F5FBF6F5FBF6
        F5FCF7F6FCF7F6FCF7F6FCF7F5FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3
        FAF5F2FAF5F2F9F5F2F9F6F2F8F5F1F8F5F1F6F3EFF6F4F0777471989591F8F6
        F2FBF8F4F7F4F0F9F6F2F9F6F2F8F5F1F9F6F2F9F6F2FAF6F3FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FBF6F3FBF6F3FAF6F2F9F6F2F9F6F2F9F6F2F9F6F2FAF7F3
        F9F6F2F9F6F2F8F5F1F8F5F1F8F5F1F8F5F1F8F5F1F8F5F1F8F5F1F6F3EFF4F1
        EDEFECE8EAE7E3E3E0DCDEDAD6D4D0CDC5C2BE908F8B3B3A3624241C1E1F1419
        1A1313130E16170E26271D37382F82837DF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA64F4D3E171C1113150C1617131C1D1921221D292B24191A168D8C8E
        DAD8D8E2DEDDEEEAE9F0EBEAF3EEEDF5F0EFF5F0EEF5F0EDF6F1EEF6F1EEF5F1
        EEF6F3EFF6F3EFF7F4F0F7F4F0F8F5F1F8F5F1F9F6F2FAF6F3FBF6F5FBF6F5FB
        F6F5FBF6F5FCF7F6FCF7F6FCF7F6FCF7F5FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FBF6F3FBF6F3F9F5F2F9F6F2F9F6F2F8F5F1F8F5F1F5F3EFF4F3EF51
        4E4AC7C3C0F8F6F2F9F6F2FAF7F3F7F4F0F9F6F2F9F6F2F9F6F2FAF6F3FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF7F3FBF8F4FBF8F4FBF8F4FBF8
        F4FAF7F3FAF7F3F9F6F2F9F6F2F9F6F2F9F6F2F8F5F1F8F5F1F9F6F2F7F4F0F5
        F2EEF3F0ECEEEBE7E8E5E1E1DEDAD9D5D1D0CCC9C7C3BF62615D3A39351D1E15
        1C1E121718101414101717102E2F252B2D20F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA666635324241610130C1214121718151E1F1B232520272A
        254A4B4ADBDADBE1DDDDE8E4E3EFEAE9F2EEEDF3EFEEF4F0EEF5F0EDF5F0EDF6
        F1EEF6F1EEF6F2EEF6F2EFF6F2EFF7F3EFF8F5F1F8F5F1F9F6F2F9F6F2FAF6F3
        FAF6F4FAF6F4FAF6F4FBF6F4FBF6F4FBF6F4FBF6F4FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FBF6F3FBF6F3FAF6F3F9F5F2F9F5F2F8F4F1F8F5F1F8F5F1
        F5F2EEEAE8E4454240E8E6E2F6F3EFF7F5F1F9F5F2F9F5F2F9F5F2F9F5F1F9F5
        F2FBF6F4FBF6F4FBF7F5FBF7F4FCF8F4FBF7F4FBF7F4FBF7F3FBF7F4FBF7F4FB
        F7F4FAF6F3FAF6F3FAF6F3FAF6F2F9F6F2F9F6F2F9F6F2F8F5F1F8F5F1F9F6F1
        F8F5F0F5F2EEF2EFEAEDEAE6E7E4E0DFDCD8D8D4D1CDC9C4BDBAB63F3E3A3131
        2C1A1B13181A1114150E14130F1816123E3E342C2D1FF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA69F9B923531221719121013111516141C1D1B20
        211F262A231B1F1ACAC9CCDCDADBE6E3E2ECE8E7F0ECEBF2EEEDF4F0EEF5F0ED
        F6F1EEF6F1EEF7F2EFF7F2EFF7F2EFF7F2EFF7F3EFF7F4F0F8F5F1F8F5F1F9F6
        F2F9F6F2F9F6F2FAF7F3FAF6F3FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FAF5F2FAF5F2F8F4
        F1FBF8F4F8F5F1F6F4F0CECCC853504CF9F7F3F9F7F3FAF6F2FBF6F3FAF5F2FA
        F5F2F9F5F3FAF6F5FAF6F5FBF7F6FBF7F5FBF8F4FBF8F4FBF8F4FBF7F4FCF7F4
        FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FBF6F3FAF6F3F9F6F2F9F6F2F8F5F1F8F5
        F1F8F5F0F8F5F0F4F1ECEFECE8EAE7E3E4E1DDDCD9D5D4D0CCC9C4C09E9B9738
        3733272722191B1516181313140F151410211E1944433A59584FF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA64F4A3D191A1011130E151613
        191A171E1F1C2528221B1F1A858487DBD8D9E1DEDDEAE6E5EEEAE9F1EDECF4EF
        EDF5F0EDF5F0EDF6F1EEF6F1EEF7F2EFF7F2EFF7F2EFF7F3EFF7F4F0F7F4F0F8
        F5F1F8F5F1F8F5F1F9F6F2F9F6F2FAF6F3FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FAF5F2FA
        F5F2FAF6F2F7F4F0F8F5F1FBF8F4F6F4F0A29F9B7E7C78FBF8F5F9F5F1FBF6F3
        FAF5F2FAF5F2F9F5F3F9F5F4F9F5F4FAF6F5FAF7F4FBF8F4FBF8F4FBF8F4FBF7
        F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FBF6F3FAF6F3F9F6F2F9F6F2F8
        F5F1F8F5F1F7F4EFF6F3EEF2EFEAEDEAE6E9E6E2E2DFDBD9D6D2D2CECAC8C3BF
        66635F3B3A361A1B16181A1414161112130E161610302F263D3B33A0A09BF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6645F512725181314
        0D1315111517131C1E1920231C242822333235DBD9DADFDCDBE6E2E1EDE9E8F1
        EDECF3EFEDF4EFECF5F0EDF5F0EDF6F1EEF7F2EFF7F2EFF7F2EFF6F2EFF6F3EF
        F7F4F0F7F4F0F8F5F1F8F5F1F8F5F1F9F6F2F9F5F2FAF5F2FAF5F2FAF5F2FBF6
        F3FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FBF6F3FBF6F3F8F4F1FCFAF6FAF7F3F7F4F0F7F4F0F8F6F27B7874B1AFABFBF7
        F4FCF7F4FBF6F3FBF6F3F9F5F3F9F5F4F9F5F4FAF6F5FAF7F4FBF8F4FBF8F4FB
        F8F4FBF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FBF6F3FAF6F3F9F6F2
        F9F6F2F8F5F1F8F5F0F6F3EEF4F1ECF0EDE8EBE8E4E6E3DFDFDCD8D5D2CECAC5
        C1B8B4B13F3C38302F2B1A1A1517191313140F11130D1A1B1246463A312F26F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA69994883A
        362618181013140F131610181C141A1F15282C24161616AEACAEDBD8D8E2E0DD
        EBE7E5F0ECEAF2EDEBF4EFEDF5F0EEF5F0EEF5F0EEF6F1EEF7F2EFF7F2EFF6F2
        EFF6F3EEF7F4EFF7F4EFF7F4F0F8F5F1F8F5F1F9F6F2F9F5F2FAF5F2FAF5F2FA
        F5F2FAF5F2FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FBF6F3FBF6F3FAF5F2FAF6F2F9F5F1FAF6F3F8F5F1F8F5F1F6F3F059
        5652DDDAD7F9F6F3FBF7F4FAF6F3F7F3F0F8F5F2F9F5F3F9F5F3F9F6F3FBF8F4
        FBF8F4FBF8F4FBF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FAF5F2F9F5
        F2F9F6F2F9F6F2F8F5F1F8F5F0F6F2EEF3EFEBEFEBE7E9E6E1E2DFD9DBD8D3D1
        CECAC5C2BE8A888338363125241F19191515181310140E12130C2323184C4C3F
        6E6D66F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA65B54441F1D1313140D13150F161A141B1F1722251C2425214D4D4DDCDB
        DADFDEDAE7E4E0ECE8E5F2EDEBF3EEEDF4EFEEF5F0EFF5F0EEF6F1EEF7F2EFF7
        F2EFF6F2EEF6F3EEF7F4EFF7F4EFF7F4F0F8F5F1F9F6F2F9F6F2F9F5F2FAF5F2
        FAF5F2FAF5F2FAF5F2FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FAF5F2FAF6F3F7F4F0
        F4F1EDE6E4E0504E4AF3F2EFFAF7F3F7F3F0FCF8F5F9F6F2F9F6F2F9F6F2F9F6
        F2FAF7F3FBF8F4FBF8F4FCF8F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FA
        F5F2F9F5F2F9F6F2F9F6F2F8F5F1F7F3F0F5F0EDF2EDEAEDE8E5E8E4DFDEDBD5
        D8D5D0CAC5C2C1BFBB4F4F493737311C1C161A19151417130C130B17180E3835
        2B444338F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6716B5C312D1F17160D13140D131412171A141E20192A2B2617
        1915B8B8B6D9D7D6E5E1E0ECE8E7F1ECEBF1ECEBF3EEEDF5F0EFF5F0EEF6F1EE
        F6F1EEF7F2EFF6F2EEF6F3EEF7F4EFF7F4EFF7F4EFF8F5F1F8F5F1F9F6F2F9F5
        F2FAF5F2FAF5F2FAF5F2FAF5F2FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FAF5F2FAF6
        F2F9F6F2F9F7F3F4F1EDCAC9C46B6A66F8F6F2FAF6F3F8F4F0F9F6F2F9F6F2F9
        F6F2F9F6F2FAF7F3FAF7F3FBF8F4FBF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3
        FBF6F3FAF5F2F9F5F2F9F6F2F8F5F1F6F3EFF6F2EEF3EEEBEFEAE7EAE5E2E3DF
        DBDBD8D3D3D0CDC8C3C298959235352F2727211818131918131314100F140B1A
        1B10514E434A4A40F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6A4A0954945331C1C1016140E1513131818161A1C16
        25272025281E51524DDEDCDCE0DBDCE7E1E2EEE8E8F0EBEAF2EDECF4EFEEF5F0
        EEF5F0EDF6F1EEF6F1EEF6F2EEF6F3EEF7F4EFF7F4EFF7F4EFF7F4F0F8F5F1F8
        F5F1F9F5F1FAF5F2FAF5F2FAF5F2FAF5F2FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FA
        F5F2F8F4F0FBF8F4F8F5F1F9F6F2F6F5F19F9E9A9C9A96FDFBF7F7F3EFF9F6F2
        F9F6F2F9F6F2F9F6F2F9F6F2FAF7F3FAF7F3FBF7F4FCF7F4FCF7F4FCF7F4FBF6
        F3FBF6F3FBF6F3FAF5F2F9F5F2F9F6F2F8F5F1F6F3EFF4F0EDF0EBE8ECE7E4E6
        E1DEDEDAD7D7D4D0CCC8C7BFBABB54514F3939331B1B151A1A1417161112130C
        14180E2D2C1F544F46918F8BF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6655F4C2E291B1516121111101414
        12181A161D1F19292B25181914B6B6B4DCD8D8E3DDDEEBE6E6EEE9E8F1EDECF3
        EEEDF4EFEDF4EFECF5F0EDF6F1EEF6F1EEF6F2EEF7F3EFF7F3EFF7F3EFF7F4F0
        F7F4F0F8F5F1F9F5F1F9F4F1FAF5F2FAF5F2FAF5F2FBF6F3FBF6F3FBF6F3FBF6
        F3FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3
        FBF6F3FBF6F3FBF6F3FAF6F3F9F5F2FAF6F3F8F5F2F7F6F2797773CECBC7FBF8
        F4F8F5F1F9F7F3FAF7F3FAF6F3FAF6F3FBF7F3FBF7F3FBF7F4FCF7F4FCF7F4FC
        F7F4FBF6F3FBF6F3FBF6F3FAF5F2FAF5F2F8F4F1F8F4F0F6F2EEF3EFEBEEEAE7
        E9E5E2E3DFDBDBD7D4D2CFCBC7C2C09C9997363532282923191A131819121515
        0E13130A1A1B114A473B434136F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA698938549423417181312
        150F12130C141512191A1622231F25262242433FDCDAD9E0DBDCE5E1E1EBE7E6
        EFEBEAEFEBEAF3EEECF4EFECF5F0EDF6F1EEF6F1EEF6F1EEF7F2EFF7F2EFF7F3
        EFF7F4EFF8F5F0F8F5F0F9F5F1F9F4F1FAF5F2FAF5F2FBF6F3FBF6F3FBF6F3FB
        F6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FBF6F3F9F5F1F9F7F3F5F3EF67
        6460E7E5E2FAF7F3F9F6F2F9F6F2FAF6F3FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FCF7F4FCF7F4FBF6F3FBF6F3FAF5F2FAF5F2FAF5F2F8F3F0F8F3F0F6F1EEF0EC
        E9EAE7E3E5E2DEDDDAD6D5D1CECAC5C1C1BEBA4D4C4831312D1A1C1716181214
        170E13150B15140B29281E5652496C6A62F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA65E5A4C
        2B2A1E15170D13140E131410181A151C1D182728231A1B179A9897DAD5D6E1DD
        DDE8E4E3EDE9E8F0ECEBF2EEECF3EEEBF4EFECF5F0EDF5F0EDF6F1EEF6F1EEF7
        F2EFF7F3EFF7F4EFF7F4EFF8F5F0F8F4F0F9F4F1FAF5F2FAF5F2FBF6F3FBF6F3
        FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FBF6F3FBF7F3F9F7F3
        FAF7F3E4E2DF6D6A66F7F5F2FAF8F4FAF7F3FBF7F4FCF7F4FCF7F4FCF7F4FBF6
        F3FBF6F3FBF6F3FBF6F3FBF6F3FAF5F2FAF5F2F9F4F1F9F4F1F7F2EFF6F1EEF3
        EEEBEDE9E6E7E4E0E1DEDAD8D5D1D1CDC9C3BFBB8B888433322E282824161813
        16181212150C13140B1B1A1144423848443BF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6959489423D2B1F1F1111130B13150E141610191C1423241E272824242221D4
        CFD0DFDADAE4E0DFEAE6E5EEEAE9F1EDEBF3EEEBF4EFECF5F0EDF5F0EDF5F0ED
        F6F1EEF6F1EEF6F2EEF6F3EEF7F4EFF7F4EFF8F4F0F9F4F1FAF5F2FAF5F2FBF6
        F3FBF6F3FBF6F3FBF6F3FAF5F2FAF5F2FAF5F2FAF5F2FBF6F3FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FBF6F3F8F4
        F0F9F6F2F8F5F1FAF7F3CAC7C28C8985FCFBF7F8F5F1FBF7F3FCF7F4FCF7F4FC
        F7F4FBF6F3FBF6F3FBF6F3FBF6F3FAF5F2FAF5F2F9F4F1F9F4F1F8F3F0F5F0ED
        F2EDEAEEE9E6E9E5E1E3E0DCDCD9D5D2CFCBC8C3BFB6B2AF3F3C3834332F1818
        1416181313160F11140B13150B242319504F45535047F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6625A48312E1D12150B0F130B11130C1718131B1C18232420
        21221C62615FDCD8DBDEDBDBE3E0DCEDE8E8F0EAECF1EDEBF3EEECF4EFEDF4EF
        EDF5F0EDF5F0EDF6F1EEF6F1EEF6F2EEF7F3EFF7F3EFF7F3EFF8F4F0F9F5F1F9
        F5F1FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FBF6F3
        FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FB
        F6F3FAF5F2FBF7F3FAF6F2FAF6F2FCF9F5B3AFABECE9E5FEFAF7FBF6F3FBF6F3
        FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FAF5F2F9F5F1F9F5F1F8F4F0F7F3EFF6F2
        EEF4EFECF0EBE8EAE5E2E6E1DEDEDAD6D6D2CECCC8C3C8C2C0605C5A3634301E
        1E1A17171314151112130D12130A1B1A12444038424137ABAAA4F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6A6A0944943331E1F1310130B12140D1515111717
        141F211C272B20191B169B9A9CDAD7D8E3E0DCE9E3E4EAE4E7EFEBEAF1EDECF3
        EFEEF3EFEDF5F0EDF5F0EDF6F1EEF6F1EEF7F2EFF7F2EFF8F3F0F7F3EFF7F4EF
        F8F5F0F8F5F0F9F5F1FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5
        F2FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4
        FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FBF6F3F9F4F1FDF9F6FDF8F5F9F4F1FBF6
        F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FAF5F2FAF5F2F9F5F1F9F6F1F7F4EFF5
        F2EDF3EFEBF0EBE8ECE7E4E6E1DEDDD8D5DAD6D2CFCBC7C3BFBB928D8C363231
        2F2E2B191A1515161214161112130B14130B262219514B42535148F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA667635332302117170D12130B13
        150E151713181A1522241F282A2520211EC8C8C8D8D6D6E1DDDEE8E4E3ECE8E7
        EFEBEAF1EDECF3EEECF4EFECF4EFECF5F0EDF5F0EDF6F1EEF7F2EFF7F2EFF7F3
        EFF7F4EFF7F4EFF8F5F0F9F5F1FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FA
        F5F2FAF5F2FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FCF7F4
        FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7
        F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FBF6F3FAF5F2F9F4F1F9F4F1FB
        F6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FAF5F2FAF5F2F9F4F1F8F4F0F8F5F0
        F6F3EEF3F0EBF1EDE9ECE7E4E8E3E0E1DCD9DBD7D4D1CECAC2BFBBB4B1AD3E3B
        3834312D1D1D1716191214161012140D12130A17170D4240353A372DB8B6B1F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA64F49392B271C
        17160D10130B10140B16171318181723241F24281F383A3AD8D7DCDDDADBE1DF
        DBE7E3E2ECE8E7EFEBEAF1EDEBF4EFECF4EFECF5F0EDF5F0EDF6F1EEF6F1EEF7
        F2EFF6F2EEF6F3EEF7F4EFF7F4EFF9F5F1FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2
        FAF5F2FAF5F2FAF5F2FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6
        F3FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FCF7F4FC
        F7F4FCF7F4FCF7F4FCF7F4FCF7F4FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3
        FBF6F3FBF6F3FAF5F2FBF6F3FBF6F3FBF6F3FAF5F2FAF5F2F9F4F1F9F4F1F7F3
        EFF6F3EEF3F0EBF0EDE8ECE8E4E7E2DFE2DDDADBD6D3D0CDCAC4C3BFBFBEBA53
        524E34322E24211D18191214170F12150C10130916170E2C2C204343366C6B60
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA68A86
        793F3B2D1D1F1113170E12150F11130E1818161C1D19252A211D1F1C58575BD9
        D8DADAD8D8E1DDDEE8E4E4EFEAE9F0ECEAF2EDEBF3EFEDF4EFEDF4F0EDF6F1EE
        F6F1EEF7F2EFF6F2EEF6F3EEF7F4EFF7F4EFF8F4F0F9F5F1F9F5F1F9F5F1F9F5
        F1F9F5F2F9F5F2F9F5F2F9F5F2FAF6F3FAF6F3FAF6F3FAF6F3FBF6F3FBF6F3FB
        F6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3
        FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FCF7
        F4F9F4F1F9F4F1FCF7F4FAF5F2FAF6F3FAF6F3FAF6F2F9F5F1F8F4F1F8F4F1F8
        F4F0F6F3EFF4F1EDF1EEE9ECE9E5E8E5E1E1DDDADCD8D4D4D0CCC9C5C2C1C0BE
        696866302F2C2827231A191416171113150E13161111130D2021184242364545
        38F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA663625337392914170E11130E10120B12130E14151220221D242620
        1B1B1A787779D9D7DADDDADCE4E0E0E9E4E3F0EBEAF0ECEBF2EEEDF3EFEEF4EF
        EDF5F0EDF5F0EDF6F1EEF6F2EEF7F3EEF7F3EEF8F4EFF7F4EFF7F4EFF8F5F0F8
        F5F0F9F6F1F9F6F2F9F6F2F9F6F2F9F6F2F9F6F2F9F6F2F9F6F2FAF6F2FBF6F3
        FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6
        F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FB
        F6F3FBF6F3FBF6F3FBF6F3FBF6F3FAF6F3FAF7F3F9F6F2F9F6F2F8F5F1F8F5F1
        F7F4F0F5F2EEF4F1EDF0EDE9ECE9E5E7E4E0E0DDD9DCD9D5D6D3CFCAC7C2C1BF
        BD84828232302F2C2B281B1B1615161213141013141013140F1B1B133C3C313F
        3F31ABABA2F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA64445362D2D2315160F12140C13160F13140F1718
        131E1F1A2728251516148B8C8CD7D6D8DCDADAE3E0DFEAE6E5EEEAE9F0ECEBF1
        EDECF2EEECF4EFECF4EFECF5F0EDF5F1EDF6F2EDF7F3EEF7F3EEF7F4EFF7F4EF
        F7F4EFF8F5F0F8F5F0F8F5F1F8F5F1F8F5F1F8F5F1F9F6F2F9F6F2F9F6F2FAF6
        F2FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FB
        F6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3
        FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FAF6F3F9F6F2F9F6F2F8F5F1F7F4
        F0F7F4F0F5F2EEF3F0ECF0EDE9ECE9E5E7E4E0E1DEDADDDAD6D3D0CCC9C5C1C4
        C1BD94918F302E2D2F2D2A1F1E1917191313140E12130D10120B1B1A103A3829
        515042727365F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA63F3C3225241B13160C11130B10
        130B1314101819151F211C262822171916939596D7D7D7DDDBDAE3E0DFE8E4E3
        EDE9E8EFEBEAF2EDEBF3EEEBF3EEEBF4EFECF5F0ECF6F2EDF6F2EDF7F3EEF6F3
        EEF6F3EEF7F4EFF7F4EFF8F5F0F8F5F1F8F5F1F8F5F1F8F5F1F8F5F1F8F5F1F8
        F5F1F9F5F2FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3
        FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6
        F3FBF6F3FBF6F3FBF6F3FAF5F2FAF5F2FAF5F2FAF5F2F9F5F2F9F6F2F8F5F1F8
        F5F1F6F3EFF4F1EDF2EFEBEFECE8EBE8E4E6E3DFE1DEDADBD8D4D2CFCBCBC8C3
        C2BFBB9C999533312E31302D1E1E1817171113150C0F130912140B13160D2E2C
        20595246524E45F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA696968E353728202216
        11130B11140A10130A14161117191322241E22261F191B18949594D7D6D8DCD9
        DBE1DEDDEAE5E5EDE8E8F2EDECF2EDEBF3EEECF3EEECF4EFECF5F1EDF5F1EDF6
        F2EEF6F2EEF6F3EEF7F3EEF7F4EFF8F4EFF8F4F0F8F4F0F8F5F0F8F5F0F8F5F0
        F8F5F0F8F5F0F8F5F1FAF6F2FAF6F2FAF6F2FAF6F2FAF6F3FAF6F3FAF6F3FAF6
        F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FBF6F3FAF6F3FAF6F3FAF6F3FA
        F6F3FAF6F3FAF6F3FAF6F3FAF6F2F9F5F1F9F5F1F9F5F1F9F5F1F8F5F1F8F5F1
        F8F5F0F7F4EFF5F2EEF2EFEBEFECE8EBE8E4E5E2DFE0DCDADBD8D5D2CFCCC9C4
        C3C1BEBD9D9B9832302B32312C22221E16161213140F13150E11130915170E1E
        211649483C4A453AF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6787A
        6C3334251E1E1712140B12160A13150C13160F191A1521231D21231C1A1A1986
        8588D3D2D5DAD8D8E1DDDDEAE4E5EBE6E6F0EBEAF1ECEBF2EDECF3EEECF4EFEC
        F5F0EDF5F0EDF5F1EDF6F2EEF7F2EEF7F3EFF7F3EFF8F4EFF8F4EFF9F5F0F8F5
        F0F8F5F0F8F5F0F8F5F0F8F5F1F9F6F2F9F6F2F9F6F2F9F6F2F9F6F2F9F6F2F9
        F6F2F9F5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2F9F5F2F9F6F2
        F9F6F2F9F6F2F9F6F2FAF7F3F9F6F2F9F6F2F8F5F1F8F5F1F8F5F1F8F5F1F7F4
        F0F6F3EFF5F2EEF4F1ECF1EEEAEDEAE6EAE7E3E5E2DEE0DDDAD9D5D4D0CCCBC9
        C4C3C2BEBF918F8F31302D32322B20211A16171312130F12130E13140E14150D
        1D1E143F413546473AABA9A2F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA65F605236362A191A1313150E11140910130A13160F17191320221D
        2627241616156E6E6ED5D5D5D8D7D7E2DEDFE9E4E4ECE7E6EFEAE9F2EDECF3EE
        ECF3EEEBF4EFECF4EFECF4EFEDF5F0EEF6F1EFF6F1EFF7F2EEF7F3EEF7F3EEF8
        F4EFF7F4EFF7F4EFF7F4EFF7F4EFF7F4F0F8F5F1F8F5F1F8F5F1F8F5F1F9F6F2
        F9F6F2F9F6F2F9F5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2FAF5F2F9F5
        F2F9F6F2F9F6F2F9F6F2F9F6F2F9F6F2F9F6F2F8F5F1F8F5F1F8F5F1F7F4F0F6
        F3EFF5F2EFF5F1EFF3F0EDF0ECEAEDEAE7E8E5E1E4E1DDDEDBD7D8D4D2D0CCCB
        C4C0BFC1BDBC83817E2D2C272F2F2A21211C16171213160F12140D12140D1313
        0C1C1B133A392F47473B84847BF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA65151423031221A1C1113160B10130912140B1315
        0F16171320211C23261F191B174D4E4ECDCDCDDAD8D8DFDCDBE6E1E0EBE6E5EF
        EAE9F1ECEAF2EDEAF3EEEBF3EEEBF4EFEDF4EFEEF5F0EFF5F0EFF6F1EEF7F3EE
        F7F3EEF8F4EFF7F4EFF7F4EFF7F4EFF7F4EFF7F4F0F8F5F1F8F5F1F8F5F1F8F5
        F1F8F5F1F8F5F1F8F5F1F8F4F1F9F4F1F9F4F1F9F4F1F9F4F1F9F4F1F9F4F1F9
        F4F1F8F4F1F8F5F1F8F5F1F8F5F1F8F5F1F9F6F2F8F5F1F8F5F1F7F4F0F6F3EF
        F5F2EEF4F1EDF3EFEDF1EDECEEEAE9EAE6E5E6E3E0E1DEDADBD8D4D5D2CECECA
        C8C1BDBCC1BDBC6A66652D2C262E302522221B17161313140F11140B10130912
        150C1B1B1335342B45443A6B6A60F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA64F503E2F301F1C1C1212130D0E
        14090F130B11120E1617131F211A20241D1F221C2E2F2DB5B4B5D7D5D6DDDAD9
        E3E0DEE9E7E3EDE9E5F0EBE8F2EDEAF3EEEBF3EEECF3EEEDF4EFEEF5F0EFF5F0
        EEF6F1EDF6F2EEF6F2EEF7F3EFF7F3EFF7F3EFF7F3EFF7F3EFF8F5F0F8F5F0F8
        F5F0F8F5F0F8F4F0F8F4F0F8F5F0F8F4F1F9F5F1F9F5F1F9F5F1F8F4F0F8F4F0
        F8F4F0F8F4F0F8F4F0F9F5F1F8F4F1F8F4F1F8F4F1F8F5F1F7F4F0F7F4F0F6F3
        EFF4F1EDF4F1EDF1EEEAEFEBE9EBE7E6E9E5E4E4E0DFDFDCD8DAD7D3D2CECCCD
        C8C8C2BEBFADABAB4A48452C2C26292B211F211714160F13140F12130C13150C
        15170D1B1C1232332649483B5F5E54F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA64F4E3E333225
        19191411150F10150D11130E11120D1415111C1D1821231D2728241A1B198C8B
        8BD4D1D2D8D6D6DFDDDCE5E2DFEBE7E4EDE9E6F3EFEBF1EDEBF3EEEDF3EEEDF3
        EEEDF3EEECF5F0EDF5F0EDF6F1EEF6F1EEF6F1EEF7F2EFF7F2EFF7F2EEF8F4EF
        F8F4EFF9F5F0F8F4EFF8F4EFF9F5F0F9F5F0F9F5F1F8F5F1F8F5F1F8F5F1F8F5
        F0F8F5F0F8F5F0F8F5F0F9F5F1F9F4F1F9F4F1F8F3F0F7F3EFF6F3EFF5F2EEF4
        F1EDF4F1EDF2EFEBF0EDE9EDEAE6EAE6E4E7E3E2DDD9D8DCD8D7D6D2CFCCC9C4
        C5C1C0C1BCBE8E8B8D2E2E2D2C2E2925281E1B1F1415181011130B12140C1314
        0C13140C1F1E143433274544355E5E50F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A650504235352A1B1B1612130E11130C11130C11130C1515131717171E1F1C25
        27201617144B4A4DC0BFC3D2D1D7DEDBDEE5E1E0E9E5E4EAE6E5EFEBEAF2EDEC
        F2EDECF3EEEDF3EEECF3EEEBF3EEEBF4EFECF4EFECF5F0EDF5F0EDF5F0EDF6F1
        EDF6F2EDF6F2EDF7F3EEF7F3EEF8F4EFF8F4EFF9F5F0F8F4F0F7F4F0F7F4F0F7
        F4F0F7F4EFF7F4EFF7F4EFF7F4EFF7F3EFF8F3F0F7F2EFF7F2EFF5F1EEF4F1ED
        F3F0ECF2EFEBF1EEEAEDEAE6EAE7E3E7E4E0E2DEDCDBD7D6D8D4D3D0CCCBC7C3
        C3C0BEBEB0AEAD5C5A592424222C2D2A1F211C1B1E1615181110130A10130A12
        140C12130B1D1E143231273E3D3268665DF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA65252453634271F1E1513160D11130A1013090E110A141611
        1819151E1E1C21231F1E221D1A1C1B7F7F83CAC9CDD6D4D4DBD9D9E2E0E0E7E3
        E3EBE6E5EEE9E8F1ECEBF1ECEAF2EDEAF2EDEAF3EEEBF3EEEBF3EEEBF4EFECF4
        EFECF4F0ECF5F1ECF5F1ECF6F2EDF6F2EDF6F2EDF6F2EDF7F3EEF6F3EEF6F3EF
        F6F3EFF6F3EFF5F2EEF5F2EDF5F2EDF5F2EDF5F1EDF5F0EDF5F0EDF4EFECF3EF
        ECF2EFEBEEEBE7EBE8E4E9E6E2E5E2DEE1DEDADCD9D5D5D2CFD1CDCCC9C4C3C4
        C0BFB7B5B67C7B7D2E2F2D282A252729221E201A181A141314110F110B10130A
        12140C14170F1D1F163132283E3D3379786FF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA663645432322326271C15180F10140C1015
        0A0D110611130D1415131819161E211B252724171918333435909092CBCBCDD1
        D2D4DDDADBE3DEDCEAE5E3E9E4E2EFEAE8EFEAE8F1ECEAF2ECEAF4EEEBF3EEEB
        F4EFECF3EEEBF3EEEBF3EFECF4F0EDF4F0EDF5F0EDF5F0EDF5F1EEF5F1EEF5F1
        EEF5F1EFF5F1EFF5F1EFF4F0EEF4F0EDF4F0EDF4F0EDF2EEEBF2EDEBF2EDEBF1
        ECEAF1EBE9EEE8E6E7E3E0E2DFDCE0DDDADBD9D5D6D4D0D1CFCBC7C4C2BAB9B8
        B5B4B38C8B8A3F3F3E2324202A2C2622251C1A1C1514161111130E11120E1013
        0C12140D1315101E22163135253C3C2F999893F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6838477323322282B1E18
        1C1310140C13160C0E12080F110A1314101415121A1B1721221E222521111513
        3438388A8E8FC3C4C5D3D0D1D7D5D5E0DDDEE3E0E0E8E4E3E9E4E3F1EAEAEDE8
        E5EEEAE6F0ECE8F1EDE9F1EDEBF2EEEDF2EEEDF3EFEEF3EFEEF4EFEEF4EFEEF4
        EFEEF4EFEEF4F0EFF4F0EFF4F0EFF3EFEEF3EEEDF2EEEDF1EDECF1ECEBEFEBEA
        ECE7E6E7E2E1E5DFDEE1DBDADDD8D7D8D5D4D0CDCDCBC9C9BFBDBDB9B6B7AFAF
        AF8486863F41411C1E1E2729272425201D1F1A16181311130F0F100D10120D11
        130C101309191C141F211B3337293E412EF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6ACAEA4
        2E32203235271D201415190F12150C11130C0E0F0A11120D1416121719141C1F
        1820251D1E221C151913292D2C717478B0B3B7C4C8CCCBCED0D7D7D7DEDCDCE3
        E0E0E7E2E2E8E4E3EBE7E6EDE9E8EDE9E8EEEAE9EEEAE9EFEBEAF0EBEAF1ECEB
        F1ECEBF1ECEBF1ECEBF0ECEBEFEBEAEEEAE9EDE9E8ECE8E7EAE6E5E8E4E3E5E1
        E0E2DEDDE0DCDBDCD8D7D9D4D4D3CFD0CCCACAC0C0C0B4B4B6AEADB1A7A6AA74
        73773535361F201E2526242526241E1F1E1818181414141010100D0E0B11120D
        12130D14170F1C1F1426281D36372D4F5047F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6484A3630332124281D171B1213160F11130C0F110A0D100812
        130D151711181A151D1E1B2121202123221719191A1C1C4A4D4C878A8AB0B3B4
        BEBFC1C9C7C9D0CECFD5D3D3DBD9D9DFDDDDE2DFDFE5E1E0E6E2E1E8E4E3E9E5
        E4EAE5E4EAE5E4EAE5E4E9E4E3E7E3E2E5E1E0E4E0DFE1DEDDDEDCDBDAD8D7D7
        D5D4D4D2D1D0CECDCAC8C7C1BFBEBDBBBBB0AFB1AAACAD9EA2A38184844E5150
        2123231A1D1C24252223221E1F1E1A19181415151211130E0D0F0A10110C1313
        0F13140E1519101F23182A2C213A3A2D747669F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA67578673033232A2D1F1B1D1216170F12140C
        10130A0F12090C0E0711120E1314121718161E1F1C21211E2323201E1E1B1718
        161C1F1E6E6F6F98999AA8A7A9B3B4B6B9B9BBBEBEC0C5C4C4CCC9C9D0CDCCD1
        CECED4D1CFD5D2CFD5D2CFD5D2CFD5D2D0D3D0CED0CECBCFCCCACBC9C9C4C3C5
        C0BFC1BCBBBDB4B5B5AEAFAEACADACA3A5A4939594747676494B4A2628261A1C
        191E211C2225201E211C1D1E1A1C1C1816161212130D10130A10130A11130913
        140A1517101D1E18272A1E2F3323383B2CA3A49DF0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6B7B7AC494939282A182123
        151A1E1414170E13170E0E12090D10080E100910120B13140F1718141B1C181F
        201C21221E1F201C2425232D2D2D4244442C3031464A4B65696A838687959797
        A4A6A6A9ACABADAFAEAFB2B1AFB2B1AEB1B0ADAFAFADB0AFACAFAEA9ACABA6A8
        A9A3A5A69C9E9F8D8F907B7E7E606564414645262B2A171B1A171A181F201C25
        251F22231D1E201B1B1D1817181313131011130D0F120A0F12090E120810130A
        15170D1D1D122526192C2E213235275F6153F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA68D
        8F8234372726281B272A1C191C0F15180E12150C1013090F13090F110A0E100B
        11120D141511171813191A151C1D1A2122201F21201F21201B1E1D1619180F13
        1212181519201D262D2A303635373C3E404547454A4C454A4C43484A3D424435
        3A3C2E32332527261A1D1C161817141715181B191D201E1E211F1F221F1F231E
        1E201A1C1D15191A1314171011130C0E10090E110A0F120A11130B13170D1519
        0E171B112325182B2B1D303320474C39B1B2ACF0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA68081753333242A2B1C2225181A1E1315190F11140A1013
        0B0F120A0E10090E10090F120A12130D151712171814181915191A151B1D181C
        1D1820221E1F221E1D211C1C1F1B1B1F1A1A1E1A1C1F1B1B1F1B1A1E1A191D19
        1A1E1A1B1F1B1D201C1C201B1D211C1F231E1E211C1E1F1B1C1D191A1B17181A
        1614181315171115160E1113090F12080E11070F120810130A12150C15190F1A
        1E131F241725291D2C2F20424334A1A299F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA67C7F6F303520272B1A2427171C
        1E1118191214151112130D10120B0E10070D10060E11080E10090F110C12130F
        141511151713161713191914191A151B1B181C1D181C1D161C1D161D1E171E1F
        191F201A1E1F1A1D1E191C1E181A1D17181B15191C1617191414161213151112
        130E0F110B0E120A0E11070D0F040D10050F130711140A13150C171A111C1F15
        22251925291A282C1C363A2B96988FF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA685877A
        3334242D2E1D2628182224181B1C131A1A1413150F13160D11130C0E0F0A0D0F
        0A0C0E090D0F0A0D0E090D10090F120A10110C10110E12131014151114151114
        151113131011120E11120E11120E11130E11130D0F110B0E100A0E10090D1008
        0D10080D0F080E100810130910130912150A15170F181A131A1E131F24162529
        1B282B1D2A2D1F3B3E2E92948BF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA69C9F924D523D2E331E2A2D1E24261C2022191C1F1617191315
        171314151112140D10130B0F110A0E11080E11070E10090E0F0A0D0F080C0F07
        0C0F070C0F070C0E080C0E090C0E090C0E090C0E090D0F090E100A0D0F090E10
        090F130911130A12150C13150D151910181C121B1F1320211922231C26281B2B
        2E1D2F3320505344A1A399F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA684867A484B3B2C3120292E1E
        272C1D23271A1E23171B1E14181B12161A1115190F13170D13160D13150E1214
        0D11140B11140B11140B11130B11130C11130C11130C11130D12130E13140F14
        161114171015190F191D131C201520231924271D24281D25291D2A2C1D323322
        49493B8D8D83F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6A1A6986266543C412D2B301D282D1D252A1A2428182124172124192022181F
        21181C1F151A1F131A1F131A1F131A1F141A1F14191E13181D131A1D141C1D18
        1E1F1A1F201B21231A23261825281A282B1D282B1D2D2F21393B2E6E7065A0A3
        98F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6A9AAA17A7C715153463B3E2E313621
        2C301C2A2F1A2A2E1C2A2D1E292B1D282B1C292C1D292C1D272A1B272A1B282C
        1B292D1A282C192B301D3033233C3F315153457F8275A4A59DF0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6B7B9ACA8A99D9E9D919493888D8C818E8C82908F869393899A
        99909F9F94A8AA9FB7B9AEF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FFF0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6
        F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CA
        A6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0
        CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6F0CAA6FF}
      ExplicitHeight = 126
    end
    object RzProgressBar1: TRzProgressBar
      Left = 3
      Top = 182
      Width = 338
      Align = alBottom
      BorderWidth = 0
      InteriorOffset = 0
      NumSegments = 100
      PartsComplete = 0
      Percent = 0
      TotalParts = 0
      ExplicitLeft = 11
    end
    object RzProgressBar2: TRzProgressBar
      Left = 3
      Top = 158
      Width = 338
      Align = alBottom
      BorderWidth = 0
      InteriorOffset = 0
      NumSegments = 100
      PartsComplete = 0
      Percent = 0
      TotalParts = 0
      ExplicitTop = 150
    end
    object Clock: TRzLabel
      Left = 3
      Top = 142
      Width = 75
      Height = 16
      Align = alBottom
      Alignment = taCenter
      BiDiMode = bdLeftToRight
      Caption = '00:00:00.000'
      Color = clSkyBlue
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clNavy
      Font.Height = -13
      Font.Name = 'Arial'
      Font.Style = [fsBold]
      ParentBiDiMode = False
      ParentColor = False
      ParentFont = False
      Transparent = False
      Visible = False
      WordWrap = True
      ShadowColor = clWhite
      TextStyle = tsRecessed
    end
  end
  object ImageList1: TImageList
    DrawingStyle = dsTransparent
    Left = 400
    Top = 72
    Bitmap = {
      494C01016D007400800010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      000000000000360000002800000040000000C0010000010020000000000000C0
      0100000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E2EFF100000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E2EF
      F10000000000CCCCCC00E5E5E500E2EFF1000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000E2EFF10000000000B2B2
      B200999999009999990099999900B2B2B200CCCCCC0000000000E2EFF1000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099999900999999009999
      990099999900FFFFFF00999999009999990099999900B2B2B200000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009999990099999900C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900999999009999990099999900E2EFF1000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900C0C0C000C0C0C00099999900FFFFFF00CCCC
      CC00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900C0C0C000CCCCCC0099999900CCCCCC009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000099999900C0C0C000999999009999
      9900CCCCCC00FFFFFF0099999900CCCCCC00CCCCCC00B2B2B200999999009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000099999900C0C0C00066666600FFFF
      FF00CCCCCC00FFFFFF0099999900CCCCCC00C0C0C00099999900999999009999
      9900999999009999990099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000099999900C0C0C000999999006666
      6600CCCCCC00FFFFFF0099999900E5E5E5009999990099999900999999009999
      9900999999009999990099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900E5E5E5009999990099999900999999009999
      9900999999009999990099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900CCCCCC00E2EFF10099999900999999009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900CCCCCC00E5E5E500CCCCCC00C0C0C0009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009999990099999900C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900CCCCCC00E5E5E5009999990000000000C0C0
      C000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000C0C0C000999999009999
      9900C0C0C000FFFFFF0099999900999999009999990099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CCCC
      CC00999999009999990099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000319CCE0063CEFF00319CCE009CFF
      FF009CFFFF009CFFFF009CFFFF009CFFFF000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE009C9C9C00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E7000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E2EFF100000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000319CCE0063CEFF00319CCE00CEFF
      FF00CEFFFF00CEFFFF00CEFFFF00CEFFFF000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE009C9C9C00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E7000000000000000000000000000000
      0000D6EFFF006BB5FF00429CF700429CF700429CF7004294F7006BADF700D6E7
      FF0000000000000000000000000000000000000000000000000000000000E2EF
      F100E5E5E500CCCCCC00E5E5E500E2EFF1000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000319CCE009CFFFF009CFFFF00319C
      CE00319CCE00319CCE00319CCE00319CCE000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00E7E7E700E7E7E7009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C000000000000000000F7FFFF007BC6
      FF00299CFF002994FF002994FF002994F700298CF700298CF700298CF700298C
      EF007BB5F700F7FFFF00000000000000000000000000E2EFF100E5E5E500B2B2
      B200CC9999009966660099666600B2B2B200CCCCCC00E5E5E500E2EFF1000000
      0000000000000000000000000000000000000000000000000000000000000000
      000084848400000000008484840000000000319CCE00CEFFFF009CFFFF009CFF
      FF009CFFFF00CEFFFF00CEFFFF00CEFFFF000000000000000000000000000000
      0000848484000000000084848400000000009C9C9C00E7E7E700E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E70000000000EFF7FF004AB5FF0031A5
      FF00107BF700107BFF00107BF700107BF700107BF7001084F700107BFF00107B
      F7002184EF003194EF00E7F7FF0000000000E5E5E500CC99990099666600CC99
      9900CC999900FFFFFF00996666009999990099999900B2B2B200E5E5E5000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000319CCE00CEFFFF00CEFF
      FF00CEFFFF00319CCE00319CCE00319CCE000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00E7E7E700E7E7
      E700E7E7E7009C9C9C009C9C9C009C9C9C00FFFFFF0063CEFF00107BDE000863
      D600528CD6007B7B7300A58C4A00D69C2900D6942900A58442006B737300397B
      CE000863D600106BDE004294F700FFFFFF0099666600CC999900FFCC9900FFCC
      9900FFCCCC00FFFFFF0099666600336699003366990033669900E2EFF1000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000848484000000000000000000000000000000000000000000319CCE00319C
      CE00319CCE000000000000000000000000000000000000000000000000000000
      00008484840000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C00000000000000000000000000B5EFFF001073D6006B94CE00D6EF
      FF00FFD67300FFAD1800FFB53100A56B1800945A1000F7A51800FF9C0000EFAD
      3900B5C6DE00427BBD000063D6009CCEFF0099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF009966660066CCCC0066CCCC000099CC00FFFFFF00FFCC
      CC00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000042A5E700CED6EF0000000000FFFF
      EF00E7AD3900F7BD5A0039291000000000000000000010080800EFAD4200E79C
      1800E7D6BD00EFE7D6009CADBD00317BDE0099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF009966660066CCCC0066CCFF003399CC00FFCCCC00CC66
      00000000000000000000000000000000000000000000319CCE0000639C000063
      9C0000639C0000639C0000639C0000639C0000639C0000639C00000000000000
      000000000000000000000000000000000000000000009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
      000000000000000000000000000000000000D6E7F7000000000000000000F7EF
      D600F7CE7300C69C520000000800000000000000000000000000946B2900F7B5
      3900DEBD8C00CED6E700FFE7CE00ADB5C60099666600FFCC9900CC999900CC99
      6600FFCCCC00FFFFFF009966660099CCCC0099CCFF00B2B2B200FF660000CC66
      000000000000000000000000000000000000319CCE0063CEFF00319CCE009CFF
      FF0063CEFF0063CEFF0063CEFF0063CEFF00319CCE009CFFFF0000639C000000
      0000000000000000000000000000000000009C9C9C00CECECE009C9C9C00E7E7
      E700CECECE00CECECE00CECECE00CECECE009C9C9C00E7E7E7009C9C9C000000
      0000000000000000000000000000000000005AA5DE00DEE7F70000000000FFF7
      DE00FFE7B500DECEA5008C8C94005A5A6300080800000000000094733900FFCE
      6B00E7CE9C00F7EFE700CECECE003984D60099666600FFCC990099666600FFFF
      FF00FFCCCC00FFFFFF009966660099CCCC00C0C0C000CC660000CC660000CC66
      0000CC660000CC660000CC66000000000000319CCE0063CEFF00319CCE009CFF
      FF009CFFFF009CFFFF009CFFFF009CFFFF0063CEFF009CFFFF0000639C000000
      0000000000000000000000000000000000009C9C9C00CECECE009C9C9C00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700CECECE00E7E7E7009C9C9C000000
      0000000000000000000000000000000000006BDEFF00106BC6008CADDE00FFFF
      F700FFF7B500FFF7BD00F7EFE700DEDEE7006B737B006B6B5A00FFEFAD00FFF7
      AD00FFEFDE0094ADCE001063C600318CF70099666600FFCC9900CC9999009966
      6600FFCCCC00FFFFFF009966660000000000CC660000CC660000CC660000CC66
      0000CC660000CC660000CC66000000000000319CCE0063CEFF00319CCE009CFF
      FF009CFFFF009CFFFF009CFFFF009CFFFF0063CEFF009CFFFF0000639C000000
      0000000000000000000000000000000000009C9C9C00CECECE009C9C9C00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700CECECE00E7E7E7009C9C9C000000
      000000000000000000000000000000000000C6F7FF006BDEFF001073CE001863
      CE0094ADC600D6DEC600FFEFBD00FFE7BD00F7D6AD00FFF7BD00DEDEC600A5B5
      BD002973CE00005ACE00218CF700A5CEFF0099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF009966660000000000CC999900CC660000CC660000CC66
      0000CC660000CC660000CC66000000000000319CCE0063CEFF00319CCE00CEFF
      FF00CEFFFF00CEFFFF00CEFFFF00CEFFFF009CFFFF0000008400000084000000
      8400000084000000840000000000000000009C9C9C00CECECE009C9C9C00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C000000000000000000FFFFFF0084E7FF0073E7FF0042AD
      EF00006BE700086BDE003184DE004A94DE005294DE00398CDE001073E7000063
      E7001884EF002994FF00429CF700FFFFFF0099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF0099666600CCCCCC00E2EFF100CC999900FF660000CC66
      000000000000000000000000000000000000319CCE009CFFFF009CFFFF00319C
      CE00319CCE00319CCE00319CCE00319CCE00319CCE00319CCE00000084000000
      8400000084000000840000000000000000009C9C9C00E7E7E700E7E7E7009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000000000000EFFFFF007BDEFF0073E7
      FF006BD6FF0042B5FF00299CFF002194FF001894FF002194FF00299CFF0031A5
      FF00299CFF00319CFF00E7F7FF000000000099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF009966660099CCCC000000000099CCCC00FFCC9900CC66
      000000000000000000000000000000000000319CCE00CEFFFF009CFFFF009CFF
      FF009CFFFF00CEFFFF00CEFFFF00CEFFFF0000639C0000000000000000000000
      8400000084000000840000008400000000009C9C9C00E7E7E700E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E7009C9C9C0000000000000000009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000000000000F7FFFF00A5EF
      FF006BD6FF0063D6FF0063D6FF005ACEFF004AC6FF0042B5FF0039ADFF0031A5
      FF007BBDFF00F7FFFF00000000000000000099666600CC999900FFCC9900FFCC
      9900FFCCCC00FFFFFF0099666600CCCCCC00000000003399CC0000000000FFCC
      99000000000000000000000000000000000000000000319CCE00CEFFFF00CEFF
      FF00CEFFFF00319CCE00319CCE00319CCE000000000000000000000000000000
      000000008400000000000000840000008400000000009C9C9C00E7E7E700E7E7
      E700E7E7E7009C9C9C009C9C9C009C9C9C000000000000000000000000000000
      00009C9C9C00000000009C9C9C009C9C9C000000000000000000000000000000
      0000E7F7FF0094E7FF006BD6FF006BCEFF0063C6FF005ABDFF007BCEFF00D6EF
      FF000000000000000000000000000000000000000000C0C0C000CC996600CC99
      9900CCCC9900FFFFFF00996666000099CC000099CC000099CC00000000000000
      0000000000000000000000000000000000000000000000000000319CCE00319C
      CE00319CCE000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000840000000000000000009C9C9C009C9C
      9C009C9C9C000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CCCC
      CC00CC9999009966660099666600000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000C6520000C652000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000BD520000D67B0800C6520000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5008484840000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000BD520000F7BD2100D6730800CE6B18000000
      0000000000000000000000000000000000009C3100009C3100009C3100009C31
      00000000000000000000000000009C3100009C3100009C3100009C3100000000
      0000000000000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C9C000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B5009C9C9C009C9C9C0084848400000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000BD520000E7940000F7AD1000D6730800CE6B
      1800000000000000000000000000000000009C310000CE630000CE630000CE63
      00009C31000000000000000000009C310000CE630000CE630000CE6300009C31
      0000000000000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE009C9C9C0000000000000000009C9C9C00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000B5B5B5009C9C
      9C009C9C9C009C9C9C009C9C9C00848484000000000000000000000000000000
      000000000000000000000000000000000000CE631000C65A0000C65A0000C65A
      0800C6630800C6630800C6630800CE630800EF940000E78C0000F7AD0800D673
      0800CE6B1800000000000000000000000000000000009C310000CE630000CE63
      0000CE6300009C31000000000000000000009C310000CE630000CE630000CE63
      00009C310000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000009C9C9C00CECECE00CECECE00CECE
      CE009C9C9C0000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C008484840000000000000000000000
      000000000000000000000000000000000000DE8C2100FFE76300FFD65200FFCE
      4200FFC63900FFBD3100F7B52100F7AD1800EF9C1000EF940000E78C0000EF9C
      0000CE730800CE6B1000000000000000000000000000000000009C310000CE63
      0000CE630000CE6300009C31000000000000000000009C310000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C0000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000B5B5B5009C9C9C009C9C
      9C0084848400B5B5B5009C9C9C009C9C9C009C9C9C0084848400000000000000
      000000000000000000000000000000000000DE942900FFE77300FFD66300FFCE
      5200F7CE4A00F7C64200F7BD3900F7B52900EFAD2100EFA51800EF9C0800E78C
      0000EF9C0000D67B1000C6631000000000000000000000000000000000009C31
      0000CE630000CE630000CE6300009C31000000000000000000009C310000CE63
      0000CE630000CE6300009C310000000000000000000000000000000000009C9C
      9C00CECECE00CECECE00CECECE009C9C9C0000000000000000009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C000000000000000000B5B5B5009C9C9C008484
      84000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C00848484000000
      000000000000000000000000000000000000E79C2900FFEF8400FFDE6B00FFD6
      6300FFCE5A00F7CE5200F7C64A00F7BD4200F7B53100F7B52900EFAD2100EFA5
      1800E78C0000F7BD2900EFBD6300CE6310000000000000000000000000000000
      00009C310000CE630000CE630000CE6300009C31000000000000000000009C31
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      00009C9C9C00CECECE00CECECE00CECECE009C9C9C0000000000000000009C9C
      9C00CECECE00CECECE00CECECE009C9C9C0000000000B5B5B500848484000000
      0000000000000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C008484
      840000000000000000000000000000000000EFA53100FFF78C00FFE77B00FFDE
      7300FFD66B00FFD66300FFCE5200F7CE4A00F7C64200F7BD3900F7B53100EFA5
      1800F7B52900F7D67300DE943900C66308000000000000000000000000000000
      00009C310000CE630000CE630000CE6300009C31000000000000000000009C31
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      00009C9C9C00CECECE00CECECE00CECECE009C9C9C0000000000000000009C9C
      9C00CECECE00CECECE00CECECE009C9C9C000000000000000000000000000000
      000000000000000000000000000000000000B5B5B5009C9C9C009C9C9C009C9C
      9C0084848400000000000000000000000000EFAD3900FFF79C00FFE78C00FFE7
      8400FFE77B00FFDE7300FFD66B00FFD66300F7CE5200F7CE5200F7BD3100F7BD
      3900FFDE6B00DE942900C65A0800000000000000000000000000000000009C31
      0000CE630000CE630000CE6300009C31000000000000000000009C310000CE63
      0000CE630000CE6300009C310000000000000000000000000000000000009C9C
      9C00CECECE00CECECE00CECECE009C9C9C0000000000000000009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C00000000000000000000000000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C009C9C9C00848484000000000000000000F7BD5A00FFFFFF00FFFFE700FFFF
      E700FFFFDE00FFFFDE00FFFFDE00FFF7C600FFD66300FFCE4200F7D67300FFE7
      8C00E7941800C65A0800000000000000000000000000000000009C310000CE63
      0000CE630000CE6300009C31000000000000000000009C310000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C0000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B5B5B5009C9C
      9C009C9C9C00848484000000000000000000EFA52900EFB54200EFAD3900EFAD
      3900EFAD3900EFAD3900EFA53100E7A53900FFDE6300FFEFA500FFF7B500E79C
      2900C65A0800000000000000000000000000000000009C310000CE630000CE63
      0000CE6300009C31000000000000000000009C310000CE630000CE630000CE63
      00009C310000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000009C9C9C00CECECE00CECECE00CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B5009C9C9C008484840000000000000000000000000000000000000000000000
      0000000000000000000000000000EFA51800FFFFCE00FFFFCE00E7A54200C652
      0000000000000000000000000000000000009C310000CE630000CE630000CE63
      00009C31000000000000000000009C310000CE630000CE630000CE6300009C31
      0000000000000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE009C9C9C0000000000000000009C9C9C00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5008484840000000000000000000000000000000000000000000000
      0000000000000000000000000000F7BD3900FFFFCE00E7A53900C65200000000
      0000000000000000000000000000000000009C3100009C3100009C3100009C31
      00000000000000000000000000009C3100009C3100009C3100009C3100000000
      0000000000000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000FFBD3100E7A54200C6520000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000DE8C2100C652080000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000005200000052000084AD
      8400EFEFEF0073A5730010631000006B0000006B0000006B0000006B0000006B
      0000006B0000006B00004A8C4A00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000006B000008AD290008AD2900007B
      0800427B4200007B080018C6420018C6420018C6420018C6420010BD390010BD
      390010BD390010BD390000630000FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CE00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5008484840000000000000000000000000000000000000000000000
      000000000000000000000000000000000000006B080018C6420010C64200088C
      1800005A000010BD390010C6420010C6420010C6420010C6420008942100006B
      0800006B0800006B080000630000B5CEB5000000000000000000000000000000
      000000CE00000063000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CE
      0000009C0000009C000000630000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B5009C9C9C009C9C9C0084848400000000000000000000000000000000000000
      0000000000000000000000000000000000000073080018C6420010C642000894
      1800005A000018C6420010C6420010C6420010C6420010C6420018C6420018C6
      4A0018C64A0018CE4A0008AD2900528C520000000000000000000000000000CE
      0000009C0000009C000000630000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CE0000009C
      0000009C0000009C0000009C0000006300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B5B5B5009C9C
      9C009C9C9C009C9C9C009C9C9C00848484000000000000000000000000000000
      000000000000000000000000000000000000007B080010C64A0010C642000894
      21000084100010C64A0010C64A0010C64A0010C64A0010C64A0008942100005A
      0000005A0000005A0000006300005A9C5A00000000000000000000CE0000009C
      0000009C0000009C0000009C0000006300000000000000000000000000000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      0000009C0000009C0000009C0000009C00000063000000000000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C008484840000000000000000000000
      000000000000000000000000000000000000399C42006BEF94004ADE7B0021A5
      39000084100010C64A0010C64A0010C64A0010C64A0010C64A0029D65A0039DE
      6B004AE77B006BEF94008CFFAD00399C42000000000000CE0000009C0000009C
      0000009C0000009C0000009C0000009C00000063000000000000000000000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      00000063000000CE0000009C0000009C0000009C000000630000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C0084848400B5B5B5009C9C9C009C9C9C009C9C9C0084848400000000000000
      00000000000000000000000000000000000039A5420084FFAD0084FFAD005AC6
      73000894210084FFAD0084FFAD0084FFAD0084FFAD0084FFAD0039A54A00188C
      2100188C2100188C210018842100188421000000000000CE0000009C0000009C
      00000063000000CE0000009C0000009C0000009C000000630000000000000000
      0000000000000000000000000000000000000000000000CE0000009C00000063
      0000000000000000000000CE0000009C0000009C0000009C0000006300000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C008484
      84000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C00848484000000
      00000000000000000000000000000000000039A54A0084FFB50084FFB5005ACE
      73000894210084FFAD0084FFAD0084FFAD0084FFAD0084FFAD0073E79C0073E7
      9C0073E79C0073E79C005AC67300188C21000000000000CE0000009C00000063
      0000000000000000000000CE0000009C0000009C0000009C0000006300000000
      0000000000000000000000000000000000000000000000CE0000006300000000
      000000000000000000000000000000CE0000009C0000009C0000009C00000063
      00000000000000000000000000000000000000000000B5B5B500848484000000
      0000000000000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C008484
      8400000000000000000000000000000000004AA55200298C3100298C2900188C
      2100087B10007BE79C0084FFB50084FFB50084FFB50084FFB50084FFB50084FF
      B50084FFB50084FFB50084FFBD0039A54A000000000000CE0000006300000000
      000000000000000000000000000000CE0000009C0000009C0000009C00000063
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000CE0000009C0000009C0000009C
      0000006300000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000B5B5B5009C9C9C009C9C9C009C9C
      9C0084848400000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF0042A54A007BE79C0084FFB50084FFB5007BEF9C0031A542002994
      310029943100299431005AB563008CC68C000000000000000000000000000000
      00000000000000000000000000000000000000CE0000009C0000009C0000009C
      0000006300000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      0000009C00000063000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C009C9C9C00848484000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF0031A5420084F7B50084FFBD0063D68400CEE7CE00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      0000009C00000063000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CE0000009C
      0000009C00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B5B5B5009C9C
      9C009C9C9C00848484000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF004AC6630084FFBD007BEFA5006BBD7300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CE0000009C
      0000009C00000063000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CE
      0000009C00000063000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B5009C9C9C00848484000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00189C310084FFB50084FFC60029AD4200FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CE
      0000009C00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CE00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B500848484000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF007BCE8C0084FFBD0084FFC60031B54A00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CE00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF0042BD5A0084FFC6007BFFB5006BCE8400FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00BDEFC60042CE630039CE6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000005200000052000084AD
      8400EFEFEF0073A5730010631000006B0000006B0000006B0000006B0000006B
      0000006B0000006B00004A8C4A00FFFFFF000000000000000000000000000000
      0000000000000000000000000000BDBDEF000000B5000000AD00F7F7FF000000
      00000000000000000000000000000000000000000000CEC6C600FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0000000000005200000052000084AD
      8400EFEFEF0073A5730010631000006B0000006B0000006B0000006B0000006B
      0000006B0000006B00004A8C4A00FFFFFF00006B000008AD290008AD2900007B
      0800427B4200007B080018C6420018C6420018C6420018C6420010BD390010BD
      390010BD390010BD390000630000FFFFFF000000000000000000000000000000
      00000000000000000000000000002929BD001008FF000808EF005A5ACE000000
      000000000000000000000000000000000000F7F7F700B5ADB500B5B5B500FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00006B000008AD290008AD2900007B
      0800427B4200007B080018C6420018C6420018C6420018C6420010BD390010BD
      390010BD390010BD390000630000FFFFFF00006B080018C6420010C64200088C
      1800005A000010BD390010C6420010C6420010C6420010C6420008942100006B
      0800006B0800006B080000630000B5CEB5000000000000000000000000000000
      00000000000000000000000000007B73D6001010F7001818FF000808B5000000
      000000000000000000000000000000000000FFFFFF00EFE7E700B5B5B500BDBD
      BD00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00006B080018C6420010C64200088C
      1800005A000010BD390010C6420010C6420010C6420010C6420008942100006B
      0800006B0800006B080000630000B5CEB5000073080018C6420010C642000894
      1800005A000018C6420010C6420010C6420010C6420010C6420018C6420018C6
      4A0018C64A0018CE4A0008AD2900528C52000000000000000000000000000000
      00000000000000000000000000000000BD001818FF001821FF000808BD000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00DEDEDE00ADAD
      AD00CEC6C600FFFFFF00FFFFFF00CECECE00636363004A4A4A00DEDEDE00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000073080018C6420010C642000894
      1800005A000018C6420010C6420010C6420010C6420010C6420018C6420018C6
      4A0018C64A0018CE4A0008AD2900528C5200007B080010C64A0010C642000894
      21000084100010C64A0010C64A0010C64A0010C64A0010C64A0008942100005A
      0000005A0000005A0000006300005A9C5A000000000000000000000000000000
      00000000000000000000D6D6F7000800D6002129FF001018EF005A5ADE000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00DEDE
      D600CEC6C600ADADAD004242420000000000000000000000000031313100FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00007B080010C64A0010C642000894
      21000084100010C64A0010C64A0010C64A0010C64A0010C64A0008942100005A
      0000005A0000005A0000006300005A9C5A00399C42006BEF94004ADE7B0021A5
      39000084100010C64A0010C64A0010C64A0010C64A0010C64A0029D65A0039DE
      6B004AE77B006BEF94008CFFAD00399C42000000000000000000000000000000
      000000000000000000000800CE001829FF002139FF001018EF00E7DEFF000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00ADADAD00100808000000000000000000000000000000000000000000CECE
      CE00FFFFFF00FFFFFF00FFFFFF00FFFFFF00399C42006BEF94004ADE7B0021A5
      39000084100010C64A0010C64A0010C64A0010C64A0010C64A0029D65A0039DE
      6B004AE77B006BEF94008CFFAD00399C420039A5420084FFAD0084FFAD005AC6
      73000894210084FFAD0084FFAD0084FFAD0084FFAD0084FFAD0039A54A00188C
      2100188C2100188C210018842100188421000000000000000000000000000000
      0000000000002118D6001829F7002139FF002139FF001829FF000800D6000000
      D6000000D6000000D6003931DE008C84EF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0042424200080808000808080000000000000000000000000000000000CECE
      CE00FFFFFF00FFFFFF00FFFFFF00FFFFFF0039A5420084FFAD0084FFAD005AC6
      73000894210084FFAD0084FFAD0084FFAD0084FFAD0084FFAD0039A54A00188C
      2100188C2100188C2100188421001884210039A54A0084FFB50084FFB5005ACE
      73000894210084FFAD0084FFAD0084FFAD0084FFAD0084FFAD0073E79C0073E7
      9C0073E79C0073E79C005AC67300188C21002921DE000800DE000800DE000800
      DE000800DE002129F700294AFF002942FF002942FF002942FF00294AFF00294A
      FF00294AFF002131FF001018F7001008E700FFFFFF00FFFFFF00FFFFFF00ADAD
      AD0031312900292121001010100018101000100808000000000008080800EFEF
      EF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0039A54A0084FFB50084FFB5005ACE
      73000894210084FFAD0084FFAD0084FFAD0084FFAD0084FFAD0073E79C0073E7
      9C0073E79C0073E79C005AC67300188C21004AA55200298C3100298C2900188C
      2100087B10007BE79C0084FFB50084FFB50084FFB50084FFB50084FFB50084FF
      B50084FFB50084FFB50084FFBD0039A54A001010EF003152FF003152FF001829
      F7001008E7003152FF00294AFF00294AFF00294AFF00294AFF00395AFF004A6B
      FF00637BFF00637BFF007394FF000800E700FFFFFF00FFFFFF00FFFFFF00847B
      7B00736B630042423900847B7B00635A5A00101008001010100008000000636B
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF004AA55200298C3100298C2900188C
      2100087B10007BE79C0084FFB50084FFB50084FFB50084FFB50084FFB50084FF
      B50084FFB50084FFB50084FFBD0039A54A00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF0042A54A007BE79C0084FFB50084FFB5007BEF9C0031A542002994
      310029943100299431005AB563008CC68C001818EF003152FF00294AFF001821
      F7000808E7003152FF00314AFF00314AFF00314AFF003152FF002139FF001018
      F7000800E7000800E7000800E7005A52EF00FFFFFF00FFFFFF00FFFFFF008C8C
      8400736B6B004239390084847B00CECEC600635A5A0010101000100808000808
      0000A5A5A500EFEFEF00E7E7E700FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF0042A54A007BE79C0084FFB50084FFB5007BEF9C0031A542002994
      310029943100299431005AB563008CC68C00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF0031A5420084F7B50084FFBD0063D68400CEE7CE00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF004239FF0094ADFF006B8CFF006B73
      FF000000E7004263FF00314AFF003152FF003152FF003152FF00395AFF004A6B
      FF00637BFF00637BFF007394FF004242FF00FFFFFF00FFFFFF00FFFFFF00F7F7
      F7007B73730042424200313131008C848400C6C6C6007B737300211818001010
      0800212121002121210018181800C6C6C600FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF0031A5420084F7B50084FFBD0063D68400CEE7CE00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF004AC6630084FFBD007BEFA5006BBD7300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF004239FF008CA5FF008CA5FF00636B
      FF003121FF0094ADFF008CA5FF008CA5FF008CA5FF0094A5FF007373FF003121
      F7001000F7001000F7001000F7001000F700FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00F7F7F700F7F7F700F7F7F700ADA5A500BDB5B5005A5252004242
      420031313100313131004A4242005A5A5A00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF004AC6630084FFBD007BEFA5006BBD7300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00189C310084FFB50084FFC60029AD4200FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF004239FF0094ADFF008CA5FF00636B
      FF002921FF0094ADFF008CA5FF008CA5FF008CA5FF008CA5FF0094A5FF0094B5
      FF009CB5FF009CB5FF009CB5FF000800F700FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00B5B5B5009C9C94001010
      100008000000181010002921210042424200FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00189C310084FFB50084FFC60029AD4200FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF007BCE8C0084FFBD0084FFC60031B54A00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF004242FF0094ADFF0094ADFF006B73
      FF002921FF0094ADFF008CA5FF008CA5FF008CA5FF008CA5FF008C9CFF003131
      FF003939FF003939FF003931FF00847BFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CECECE004A4A4A000000
      00000808080010101000181818006B6B6B00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF007BCE8C0084FFBD0084FFC60031B54A00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF0042BD5A0084FFC6007BFFB5006BCE8400FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF004242FF0094ADFF0094A5FF006B73
      FF004242FF007373FF009CB5FF009CB5FF009CB5FF009CB5FF0094ADFF0094A5
      FF0094A5FF0094A5FF003931FF00F7F7FF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00BDBDB500000000000000
      0000000000000808080021212100EFEFE700FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF0042BD5A0084FFC6007BFFB5006BCE8400FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00BDEFC60042CE630039CE6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF003931FF000800FF000800FF005A52
      FF0000000000847BFF003129FF004242FF004242FF004242FF004242FF004242
      FF004242FF004242FF002921FF0000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00737373000000
      00000808080073737300EFEFEF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00BDEFC60042CE630039CE6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000800AD000000C6000000C6000000C6000000C6000000C6000000C6000000
      AD000000000000000000000000000000000000000000CEC6C600FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      AD002921F7006363FF006363FF006363FF006363FF006363FF003939FF000000
      F7000000AD00000000000000000000000000F7F7F700B5ADB500B5B5B500FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      00009C3100009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000800B5001818
      F700C6C6FF000000000000000000000000000000000000000000C6C6FF006363
      FF000000F7000000B5000000000000000000FFFFFF00EFE7E700B5B5B500BDBD
      BD00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000009C31
      0000CE630000CE6300009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE009C9C9C00000000000000000000000000000000000000
      000000000000000000000000000000000000000000000808BD002931F7006B73
      FF0000000000000000000000000000000000000000000000000000000000C6C6
      FF003131F7000810F7000000BD0000000000FFFFFF00FFFFFF00DEDEDE00ADAD
      AD00CEC6C600FFFFFF00FFFFFF00CECECE00636363004A4A4A00DEDEDE00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0000000000000000009C310000CE63
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE009C9C9C000000000000000000000000000000
      0000000000000000000000000000000000001010C6003142FF000818F700EFEF
      FF00000000000000000000000000000000000000000000000000000000000000
      00009494FF000810F7001018F7000000C600FFFFFF00FFFFFF00FFFFFF00DEDE
      D600CEC6C600ADADAD004242420000000000000000000000000031313100FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00000000009C310000CE630000CE63
      0000CE630000CE630000CE630000CE6300009C31000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE009C9C9C0000000000000000000000
      0000000000000000000000000000000000003139DE001029F7001021F7000000
      0000000000000000000000000000000000000000000000000000000000000000
      00008C94FF000818F7001021F7000808DE00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00ADADAD00100808000000000000000000000000000000000000000000CECE
      CE00FFFFFF00FFFFFF00FFFFFF00FFFFFF00000000009C310000CE630000CE63
      00009C3100009C310000CE630000CE630000CE6300009C310000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C009C9C9C00CECECE00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000003139DE001839F7001029F7000000
      00000000000000000000000000000000000000000000000000007384FF000000
      0000BDC6FF000821F7001829F7000810DE00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0042424200080808000808080000000000000000000000000000000000CECE
      CE00FFFFFF00FFFFFF00FFFFFF00FFFFFF00000000009C310000CE6300009C31
      000000000000000000009C310000CE630000CE630000CE6300009C3100000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C0000000000000000009C9C9C00CECECE00CECECE00CECECE009C9C9C000000
      0000000000000000000000000000000000003131E7001839F7001031F7000000
      00000000000000000000000000000000000000000000000000006B84FF000000
      0000BDC6FF001029F7001831F7000810DE00FFFFFF00FFFFFF00FFFFFF00ADAD
      AD0031312900292121001010100018101000100808000000000008080800EFEF
      EF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00000000009C3100009C3100000000
      00000000000000000000000000009C310000CE630000CE630000CE6300009C31
      000000000000000000000000000000000000000000009C9C9C009C9C9C000000
      00000000000000000000000000009C9C9C00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000006B73EF00425AFF002142F7000000
      000000000000FFFFFF00000000000000000000000000000000006B84FF000000
      0000BDC6FF001031F700314AFF003942EF00FFFFFF00FFFFFF00FFFFFF00847B
      7B00736B630042423900847B7B00635A5A00101008001010100008000000636B
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF000000000000000000000000000000
      0000000000000000000000000000000000009C310000CE630000CE630000CE63
      00009C3100000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE009C9C9C000000000000000000000000006B73F700637BFF005A73FF000000
      000094A5FF00D6DEFF0094A5FF00000000008494FF00000000006B84FF00FFFF
      FF00BDC6FF005A73FF006373FF00525AEF00FFFFFF00FFFFFF00FFFFFF008C8C
      8400736B6B004239390084847B00CECEC600635A5A0010101000100808000808
      0000A5A5A500EFEFEF00E7E7E700FFFFFF000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000007373F7006B84FF005A73FF000000
      0000B5C6FF00E7EFFF00ADBDFF0000000000ADB5FF00000000006B84FF008C94
      FF008C94FF006373FF00637BFF00525AF700FFFFFF00FFFFFF00FFFFFF00F7F7
      F7007B73730042424200313131008C848400C6C6C6007B737300211818001010
      0800212121002121210018181800C6C6C6000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C310000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C0000000000000000005252F70094ADFF00637BFF000000
      0000B5C6FF00E7EFFF00ADBDFF0000000000ADB5FF00000000006B84FF00637B
      FF00637BFF00637BFF00637BFF00524AF700FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00F7F7F700F7F7F700F7F7F700ADA5A500BDB5B5005A5252004242
      420031313100313131004A4242005A5A5A000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C31
      0000CE6300009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00CECECE009C9C9C000000000000000000000000005252F70094A5FF005A7B
      FF00B5C6FF00E7EFFF00ADBDFF0000000000ADBDFF00000000006B84FF00637B
      FF006B84FF006384FF004A4AF70000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00B5B5B5009C9C94001010
      1000080000001810100029212100424242000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C3100009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C00000000000000000000000000000000005252F70094AD
      FF005A7BFF00F7F7FF00B5C6FF0000000000ADBDFF00000000007B94FF006B84
      FF006B84FF004A4AF7000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CECECE004A4A4A000000
      00000808080010101000181818006B6B6B000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000005252
      F7009CADFF007B94FF00849CFF007B94FF007B94FF007B94FF007B94FF006B8C
      FF004A4AF700000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00BDBDB500000000000000
      0000000000000808080021212100EFEFE7000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00005A52FF00737BFF007373FF006B73FF006B73FF006B73FF00737BFF005A52
      FF0000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00737373000000
      00000808080073737300EFEFEF00FFFFFF000000000000000000000000000000
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
      00009C3100009C3100009C3100009C3100009C31000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000CE630000CE630000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C310000CE630000CE630000CE630000CE6300009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE630000CE630000CE6300009C31
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C310000CE630000CE630000CE630000CE63
      00009C3100000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECE
      CE009C9C9C0000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C310000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C310000CE630000CE630000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C310000CE630000CE630000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000000000000000
      00000000000000000000000000009C310000CE630000CE630000CE630000CE63
      00009C3100000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECE
      CE009C9C9C0000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C310000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE630000CE630000CE6300009C31
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C310000CE630000CE630000CE630000CE6300009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000CE630000CE630000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C3100009C3100009C3100009C3100009C31000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C0000000000000000000000
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
      00000000000000000000000000009C3100009C3100009C3100009C3100009C31
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00009C3100009C3100009C3100009C3100009C31000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE630000CE630000CE6300009C31
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00009C310000CE630000CE630000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C310000CE630000CE630000CE630000CE6300009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C310000CE630000CE630000CE630000CE6300009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000CE630000CE630000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE630000CE630000CE6300009C31
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000009C31
      0000CE630000CE630000CE630000CE6300009C31000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE00CECECE00CECECE009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C310000CE630000CE630000CE630000CE63
      00009C3100000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECE
      CE009C9C9C0000000000000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE009C9C9C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C310000CE630000CE630000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE009C9C9C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C310000CE630000CE630000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000000000009C31
      0000CE630000CE630000CE630000CE6300009C31000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE00CECECE00CECECE009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C310000CE630000CE630000CE630000CE63
      00009C3100000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      00009C310000CE630000CE630000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE630000CE630000CE6300009C31
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000009C310000CE630000CE630000CE630000CE6300009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C310000CE630000CE630000CE630000CE6300009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE630000CE630000CE6300009C31
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00009C310000CE630000CE630000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE00CECECE00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C3100009C3100009C3100009C3100009C31
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00009C3100009C3100009C3100009C3100009C31000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C0000000000000000000000
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
      000000000000000000000000000000000000000000009C3100009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C3100009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE6300009C31
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE6300009C31
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C0000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63009C310000CE630000CE63
      00009C3100000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECECE00CECE
      CE009C9C9C00000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63009C310000CE630000CE63
      00009C3100000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECECE00CECE
      CE009C9C9C00000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE630000CE63
      0000CE6300009C31000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE630000CE63
      0000CE6300009C31000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C310000CE630000CE63
      0000CE630000CE6300009C310000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C310000CE630000CE63
      0000CE630000CE6300009C310000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE630000CE63
      0000CE630000CE630000CE6300009C3100009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE00CECECE009C9C9C00CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE630000CE63
      0000CE630000CE630000CE6300009C3100009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE00CECECE009C9C9C00CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C310000CE630000CE63
      0000CE630000CE6300009C310000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C310000CE630000CE63
      0000CE630000CE6300009C310000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE630000CE63
      0000CE6300009C31000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE630000CE63
      0000CE6300009C31000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C310000CE630000CE63
      00009C3100000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECECE00CECE
      CE009C9C9C00000000000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C310000CE630000CE63
      00009C3100000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECECE00CECE
      CE009C9C9C00000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE6300009C31
      0000000000000000000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000CE6300009C31
      0000000000000000000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C3100009C310000CE9C
      6300000000000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C9C009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C3100009C310000CE9C
      6300000000000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C9C009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300000000000000000000000000000000009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300000000000000000000000000000000009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C
      6300000000000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00000000009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C
      6300000000000000000000000000000000009C9C9C0000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00000000009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300000000000000000000000000000000009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300000000000000000000000000000000009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300000000000000000000000000000000009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C0000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300000000000000000000000000000000009C9C9C0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C0000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300000000000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C0000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300000000000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000FF310000FF310000FF310000FF310000FF310000FF31
      0000FF310000FF310000FF310000FF3100000000000000000000000000000000
      000000000000000000009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C000000000000000000000000000000
      9C00000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF00000000000000000000000000000000009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CECECE00000000000000000000000000000000000000
      00000000000000000000FF310000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FF3100000000000000000000000000000000
      000000000000000000009C9C9C00000000000000000000000000000000000000
      00000000000000000000000000009C9C9C0000000000000000003131CE000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000FF310000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FF3100000000000000000000000000000000
      000000000000000000009C9C9C00000000000000000000000000000000000000
      00000000000000000000000000009C9C9C0000000000000000003131CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      0000000000000000FF00000000000000000000000000000000009C9C9C00E7E7
      E700CECECE009C9C9C0000000000000000000000000000000000000000000000
      000000000000CECECE0000000000000000000000000000000000000000000000
      00000000000000000000FF310000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FF3100000000000000000000000000000000
      000000000000000000009C9C9C00000000000000000000000000000000000000
      00000000000000000000000000009C9C9C000000000000000000000000003131
      CE000063FF000000CE0000000000000000000000000000000000000000000000
      00000000FF000000000000000000000000000000000000000000000000009C9C
      9C00E7E7E7009C9C9C0000000000000000000000000000000000000000000000
      0000CECECE00000000000000000000000000000000000000000000000000FF31
      0000FF310000FF310000FF310000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FF3100000000000000000000000000009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
      00000000000000000000000000009C9C9C000000000000000000000000000000
      00000000CE000000FF0000009C00000000000000000000000000000000000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE009C9C9C0000000000000000000000000000000000CECE
      CE009C9C9C00000000000000000000000000000000000000000000000000FF31
      0000FFFFFF00FFFFFF00FF310000FF310000FF310000FF310000FF310000FF31
      0000FF310000FF310000FF310000FF3100000000000000000000000000009C9C
      9C0000000000000000009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000FF000000
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE009C9C9C000000000000000000CECECE009C9C
      9C0000000000000000000000000000000000000000000000000000000000FF31
      0000FFFFFF00FFFFFF00FF310000FF310000FF310000FF310000FF310000FF31
      0000FFCE9C00FF3100006363FF00FF3100000000000000000000000000009C9C
      9C0000000000000000009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C00CECECE009C9C9C00CECECE009C9C9C000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000FF0000009C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE009C9C9C00CECECE009C9C9C000000
      000000000000000000000000000000000000000000000000000000000000FF31
      0000FFFFFF00FFFFFF00FFCE9C00FF310000FF310000FF310000FF310000FF31
      0000FF310000FF310000FF310000FFCE9C000000000000000000000000009C9C
      9C000000000000000000CECECE009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00CECECE000000000000000000000000000000
      00000000000000000000000000000000CE000000FF0000009C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C00CECECE009C9C9C00000000000000
      000000000000000000000000000000000000FF310000FF310000FF310000FF31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FF3100000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00009C9C9C000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000CE0000009C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE009C9C9C009C9C9C009C9C9C000000
      000000000000000000000000000000000000FF310000FFFFFF00FFFFFF00FF31
      0000FF310000FF310000FF310000FF310000FF310000FF310000FF310000FF31
      0000FF3100000000000000000000000000009C9C9C0000000000000000009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C000000000000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000CE000000
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE009C9C9C0000000000000000009C9C9C009C9C
      9C0000000000000000000000000000000000FF310000FFFFFF00FFFFFF00FF31
      0000FF310000FF310000FF310000FF310000FF310000FFCE9C00FF3100006363
      FF00FF3100000000000000000000000000009C9C9C0000000000000000009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECECE009C9C9C00CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      CE000000FF000000FF0000009C00000000000000000000000000000000000000
      CE0000009C000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE009C9C9C00000000000000000000000000000000009C9C
      9C009C9C9C00000000000000000000000000FF310000FFFFFF00FFFFFF00FFCE
      9C00FF310000FF310000FF310000FF310000FF310000FF310000FF310000FF31
      0000FFCE9C000000000000000000000000009C9C9C000000000000000000CECE
      CE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C00CECECE0000000000000000000000000000000000000000000000CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      00000000CE0000009C00000000000000000000000000000000009C9C9C00E7E7
      E700CECECE009C9C9C0000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C000000000000000000FF310000FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FF310000000000000000
      0000000000000000000000000000000000009C9C9C0000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00000000000000
      000000000000000000000000000000000000000000000000000063639C000000
      CE0063639C000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE00000000000000000000000000CECECE009C9C
      9C00CECECE000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C0000000000FF310000FF310000FF310000FF31
      0000FF310000FF310000FF310000FF310000FF310000FF310000000000000000
      0000000000000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FF310000FF310000FF310000FF31
      0000FF310000FF310000FFCE9C00FF3100006363FF00FF310000000000000000
      0000000000000000000000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00CECECE009C9C9C00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFCE9C00FF310000FF310000FF31
      0000FF310000FF310000FF310000FF310000FF310000FFCE9C00000000000000
      000000000000000000000000000000000000CECECE009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECECE00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECECE009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C0000000000CECECE009C9C9C00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C9C
      9C00000000000000000000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700CECECE009C9C9C00E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C0000000000CECECE009C9C9C00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C9C
      9C00000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700CECECE009C9C9C00E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C0000000000CECECE009C9C9C00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C9C
      9C00000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700CECECE009C9C9C00E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C0000000000CECECE009C9C9C00E7E7E700E7E7
      E700E7E7E700E7E7E700CECECE00CECECE00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C0000000000CECECE009C9C9C00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C9C
      9C00000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C0000000000CECECE009C9C9C00E7E7E700E7E7
      E700E7E7E700CECECE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CECECE009C9C9C00FFFFFF00FFFF
      FF00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C9C
      9C00000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C00CECECE00CECECE009C9C9C0000000000CECECE009C9C9C00E7E7E700E7E7
      E700CECECE00CECECE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C00CECECE009C9C9C0000000000CECECE009C9C9C00FFFFFF00FFFF
      FF00E7E7E7009C9C9C00CECECE009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C000000000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00FFFF
      FF009C9C9C00CECECE009C9C9C0000000000CECECE009C9C9C00E7E7E700CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C00CECECE009C9C9C0000000000CECECE009C9C9C00FFFFFF00CECE
      CE00E7E7E700E7E7E700CECECE00CECECE00CECECE00CECECE00CECECE009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C
      6300CE9C6300CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00000000009C9C9C009C9C
      9C009C9C9C009C9C9C000000000000000000000000009C9C9C00E7E7E7009C9C
      9C00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00FFFF
      FF009C9C9C009C9C9C009C9C9C0000000000CECECE009C9C9C00CECECE00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700CECECE00CECECE00CECECE00CECE
      CE009C9C9C000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7
      E700CE9C630000000000000000000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C000000
      00009C9C9C00000000000000000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C00CECECE009C9C9C0000000000CECECE00CECECE00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700CECECE009C9C
      9C00000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C
      63000000000000000000000000000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C0000000000000000000000000000000000000000009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C000000000000000000CECECE009C9C9C00FFFF
      FF009C9C9C00FFFFFF009C9C9C00FFFFFF009C9C9C00FFFFFF009C9C9C00FFFF
      FF00000000000000000000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C00CECECE009C9C9C00CECECE009C9C9C00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FFFFFF0000000000FFFF
      FF00FFFFFF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C3100009C31000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF008484840063636300636363006363630000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CE00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5008484840000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700CE6300009C310000E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C31000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00848484009C9C9C0063636300636363006363630063636300000000000000
      00000000000000000000000000000000000000000000000000000000000000CE
      0000009C0000009C000000630000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B5009C9C9C009C9C9C0084848400000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700CE6300009C310000E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C31000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C009C9C9C009C9C9C00636363006363630063636300636363000000
      000000000000000000000000000000000000000000000000000000CE0000009C
      0000009C0000009C0000009C0000006300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B5B5B5009C9C
      9C009C9C9C009C9C9C009C9C9C00848484000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700CE6300009C310000E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C31000000000000FFFFFF0000000000FFFFFF000000
      0000CECECE009C9C9C009C9C9C009C9C9C006363630063636300636363006363
      6300000000000000000000000000000000000000000000CE0000009C0000009C
      0000009C0000009C0000009C0000009C00000063000000000000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C008484840000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C310000000000000000000000000000000000000000
      0000CECECE00CECECE009C9C9C009C9C9C009C9C9C0063636300636363009C9C
      9C00636363000000000000000000000000000000000000CE0000009C0000009C
      00000063000000CE0000009C0000009C0000009C000000630000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C0084848400B5B5B5009C9C9C009C9C9C009C9C9C0084848400000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE6300009C3100009C3100009C3100009C3100009C3100009C310000CE63
      0000CE630000CE6300009C310000000000000000000000000000000000000000
      000000000000CECECE00CECECE009C9C9C009C9C9C00636363009C9C9C009C9C
      9C009C9C9C006363630000000000000000000000000000CE0000009C00000063
      0000000000000000000000CE0000009C0000009C0000009C0000006300000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C008484
      84000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C00848484000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE630000CE6300009C310000000000000000000000000000000000000000
      00000000000000000000CECECE00636363009C9C9C00CECECE00CECECE009C9C
      9C009C9C9C009C9C9C0063636300000000000000000000CE0000006300000000
      000000000000000000000000000000CE0000009C0000009C0000009C00000063
      00000000000000000000000000000000000000000000B5B5B500848484000000
      0000000000000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C008484
      840000000000000000000000000000000000000000009C310000CE630000CE63
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      0000CE630000CE6300009C310000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C00CECECE00FFFFFF00C6C6C600CECE
      CE009C9C9C009C9C9C009C9C9C00636363000000000000000000000000000000
      00000000000000000000000000000000000000CE0000009C0000009C0000009C
      0000006300000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000B5B5B5009C9C9C009C9C9C009C9C
      9C0084848400000000000000000000000000000000009C310000CE6300009C31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C310000CE6300009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE00FFFFFF00C6C6
      C600CECECE009C9C9C0063636300636363000000000000000000000000000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      0000009C00000063000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000B5B5B5009C9C9C009C9C
      9C009C9C9C00848484000000000000000000000000009C310000CE6300009C31
      0000FFFFFF009C3100009C3100009C3100009C3100009C3100009C310000FFFF
      FF009C310000CE6300009C310000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00FFFF
      FF00CECECE00636363009C9C9C00636363000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CE0000009C
      0000009C00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B5B5B5009C9C
      9C009C9C9C00848484000000000000000000000000009C310000CE6300009C31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C310000CE6300009C310000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C009C9C9C009C9C9C009C9C9C000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CE
      0000009C00000063000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B5009C9C9C00848484000000000000000000000000009C310000E7E7E7009C31
      0000FFFFFF009C3100009C3100009C3100009C3100009C3100009C310000FFFF
      FF009C3100009C3100009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE009C9C9C009C9C9C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CE00000063000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B500848484000000000000000000000000009C310000CE6300009C31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C310000CE6300009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000063636300CECECE00CECECE009C9C9C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C3100009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C3100009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000063636300CECECE00CECECE000000000000000000000000000000
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
      00000000000000000000000000000000000000000000FFFFFF0000000000FFFF
      FF00FFFFFF000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000063636300636363009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      9C00000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF00000000000000000000000000000000009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CECECE0000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C0084848400636363006363
      6300000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000003131CE000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF008484840000009C0000009C0000009C0000000000000000000000
      0000000000000000000000000000000000000000000084848400848484008484
      8400636363009C9C9C0000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000003131CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      0000000000000000FF00000000000000000000000000000000009C9C9C00E7E7
      E700CECECE009C9C9C0000000000000000000000000000000000000000000000
      000000000000CECECE000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00848484000000CE0000009C0000009C0000009C0000009C00000000000000
      000000000000000000000000000000000000000000009C9C9C00848484008484
      840084848400636363009C9C9C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000003131
      CE000063FF000000CE0000000000000000000000000000000000000000000000
      00000000FF000000000000000000000000000000000000000000000000009C9C
      9C00E7E7E7009C9C9C0000000000000000000000000000000000000000000000
      0000CECECE00000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF000000CE000000CE000000CE0000009C0000009C0000009C0000009C000000
      0000000000000000000000000000000000000000000000000000848484008484
      8400E7E7E700CECECE00CECECE009C9C9C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000CE000000FF0000009C00000000000000000000000000000000000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE009C9C9C0000000000000000000000000000000000CECE
      CE009C9C9C00000000000000000000000000FFFFFF0000000000FFFFFF000000
      00000000FF000000CE000000CE000000CE0000009C0000009C0000009C00009C
      9C000000000000000000000000000000000000000000000000009C9C9C008484
      8400E7E7E700E7E7E700CECECE00CECECE009C9C9C00CECECE00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000FF000000
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE009C9C9C000000000000000000CECECE009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000FF000000FF000000CE000000CE000000CE0000009C00009C9C0000CE
      CE00009C9C00000000000000000000000000000000000000000000000000CECE
      CE00FFFFFF00E7E7E700E7E7E700E7E7E700CECECE00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000FF0000009C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE009C9C9C00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000FF000000FF000000CE000000CE00009C9C0000CECE0000CE
      CE0000CECE00009C9C000000000000000000000000000000000000000000CECE
      CE00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700CECECE00CECECE009C9C
      9C00CECECE000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000CE000000FF0000009C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF000000840000CECE0000FFFF0000FFFF0000CE
      CE0000CECE0000CECE00009C9C00000000000000000000000000000000000000
      0000CECECE00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700CECECE00CECE
      CE00636363006363630000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000CE0000009C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000CECE0000FFFF00FFFFFF00C6C6C60000FF
      FF0000CECE0000CECE0000CECE00009C9C000000000000000000000000000000
      0000CECECE00FFFFFF00E7E7E700E7E7E700CECECE0084848400848484006363
      6300636363006363630063636300000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000CE000000
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE009C9C9C0000000000000000009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000CECE0000FFFF00FFFFFF00C6C6
      C60000FFFF0000CECE00009C9C009C3100000000000000000000000000000000
      000000000000CECECE00FFFFFF00E7E7E7008484840084848400848484008484
      8400636363006363630063636300636363000000000000000000000000000000
      CE000000FF000000FF0000009C00000000000000000000000000000000000000
      CE0000009C000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE009C9C9C00000000000000000000000000000000009C9C
      9C009C9C9C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000CECE0000FFFF00FFFF
      FF0000FFFF00009C9C00CE6300009C3100000000000000000000000000000000
      000000000000CECECE00FFFFFF00CECECE008484840084848400848484008484
      84008484840063636300636363006363630000000000000000000000CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      00000000CE0000009C00000000000000000000000000000000009C9C9C00E7E7
      E700CECECE009C9C9C0000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CECE0000FF
      FF0000CECE00CE630000CE630000CE6300000000000000000000000000000000
      000000000000000000009C9C9C009C9C9C008484840084848400848484008484
      840084848400848484006363630063636300000000000000000063639C000000
      CE0063639C000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE00000000000000000000000000CECECE009C9C
      9C00CECECE000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CE
      CE00FF9C0000FF9C0000CE630000CE6300000000000000000000000000000000
      00000000000000000000636363009C9C9C009C9C9C0084848400848484008484
      8400848484008484840084848400636363000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C310000FF9C0000FF9C0000CE6300000000000000000000000000000000
      0000000000000000000000000000636363009C9C9C009C9C9C00848484008484
      8400848484008484840084848400848484000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C310000FF9C0000FF9C00000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000735A4200634A
      3100634A3100634A3100634A3100634A3100634A31006B5239006B5239006B52
      39006B52390000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000031313100313131009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000005A6B6B004A5A
      52004A5A52004A5A52004A5A52004A5A52004A5A52004A5A52004A5A52004A5A
      52004A5A52000000000000000000000000000000000000000000846B5A00E7CE
      BD00DEBDAD00DEBDAD00DEBDAD00DEBDAD00DEBDAD00DEBDAD00DEBDAD00DEBD
      AD006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000CECECE0063636300313131003131
      3100000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000873A5000873A5000873
      A5000873A5000873A5000873A5000873A5000873A5000873A5000873A5000873
      A5000873A50042524A0000000000000000000000000000000000947B6B00FFEF
      EF00FFEFE700F7E7DE00F7E7D600F7DED600F7DED600F7DED600F7DED600DEBD
      AD006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000063636300636363006363
      6300313131009C9C9C0000000000000000000000000000000000000000000000
      000000000000000000000000000000000000189CC600189CC6009CFFFF006BD6
      FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6
      FF00299CBD000873A5004A5A520000000000000000000000000094846B00FFF7
      EF00B59C9400AD948C00A58C84009C847300947B6B00947B6B00947B6B00DEBD
      AD006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C009C9C9C009C9C9C00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000CECECE00636363006363
      63006363630031313100009C9C00000000000000000000000000000000000000
      000000000000000000000000000000000000189CC600189CC6007BE7EF009CFF
      FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BDE
      FF0042B5DE00187B9C0042524A000000000000000000000000009C847300FFF7
      F700FFF7EF00FFEFEF00FFEFE700F7E7DE00F7E7D600FFEFEF00F7DED600DEBD
      AD006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECECE00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000636363006363
      63009CFFFF009CCECE009CCECE00009C9C000000000000000000000000000000
      000000000000000000000000000000000000189CC60021A5CE0042B5D6009CFF
      FF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084E7
      FF0042BDEF00189CC60042524A005A736B000000000000000000A58C7B00FFFF
      FF00BDA59C00B59C9400AD948400A58C7B009C847300947B6B00947B6B00DEBD
      AD006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C009C9C9C00CECECE009C9C9C009C9C9C009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000CECECE008484
      8400CEFFFF009CFFFF009CCECE009CCECE00009C9C009CCECE00000000000000
      000000000000000000000000000000000000189CC60042B5E700219CCE00A5FF
      FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7
      FF0052BDE7005ABDCE000873A5004A5A5A000000000000000000AD948400FFFF
      FF00FFFFFF00FFF7F700FFF7EF00FFEFEF00FFEFE700FFEFEF00F7DED600DEBD
      AD006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C00CECECE00CECECE00CECECE009C9C9C009C9C9C009C9C9C00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000000000000063CE
      CE00FFFFFF00CEFFFF009CFFFF009CFFFF009CCECE0063CECE00009C9C000000
      000000000000000000000000000000000000189CC60073D6FF00189CC6008CEF
      F7009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFF
      FF005AC6FF0094FFFF00187B9C004A5A5A000000000000000000AD9C8C00FFFF
      FF00C6AD9C00BDA59400B59C8C00AD948400A58C7B00947B6B00947B6B00DEBD
      AD006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C9C00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000000000000063CE
      CE00FFFFFF00CEFFFF00CEFFFF009CFFFF009CFFFF009CCECE009CCECE00009C
      9C0063CECE00000000000000000000000000189CC60084D6FF00189CC6006BBD
      DE00FFFFFF00FFFFFF00F7FFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0084E7FF00FFFFFF00187BA500637373000000000000000000B5A59400FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFF7F700FFF7EF00FFEFEF00F7DED600DEBD
      AD006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000000000000000
      00009CCECE00FFFFFF00CEFFFF00CEFFFF009CFFFF009CFFFF009CCECE00FFCE
      CE009C3100009C3100000000000000000000189CC60084EFFF0052C6E700189C
      C600189CC600189CC600189CC600189CC600189CC600189CC600189CC600189C
      C600189CC600189CC600188CB500000000000000000000000000BDA59C00FFFF
      FF00C6B5A500BDAD9C00BDA59400B59C8C00E7D6CE00FFF7EF00FFEFEF00DEBD
      AD006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000000000000000
      000063CECE00FFFFFF00CEFFFF00CEFFFF00FFCECE00CE630000CE6300009C31
      00009C3100009C3100009C31000000000000189CC6009CF7FF008CF7FF008CF7
      FF008CF7FF008CF7FF008CF7FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00189CC600187B9C0000000000000000000000000000000000BDAD9C00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00948473006B5239006B52
      39006B52390000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      0000000000009CCECE00FFFFFF00CEFFFF00CE630000CE630000CE630000CE63
      00009C3100009C3100009C3100009C310000189CC600FFFFFF009CFFFF009CFF
      FF009CFFFF009CFFFF00FFFFFF00189CC600189CC600189CC600189CC600189C
      C600189CC6000000000000000000000000000000000000000000C6B5A500FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0094847300F7EFE7009484
      73000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      00000000000063CECE00FFFFFF00FFCECE00CE630000CE630000CE630000CE63
      0000CE6300009C3100009C3100009C3100000000000021A5CE00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00189CC600000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CEB5AD00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0094847300948473000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000FF9C0000FF9C0000CE630000CE630000CE630000CE63
      0000CE630000CE6300009C3100009C310000000000000000000021A5CE0021A5
      CE0021A5CE0021A5CE0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000C6B5AD00CEB5
      AD00C6B5A500BDADA500BDAD9C00B5A59400AD9C8C0094847300000000000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CE630000FF9C0000FF9C0000CE630000CE630000CE63
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000CE630000FF9C0000FF9C0000CE630000CE63
      0000CE630000CE630000CE630000CE6300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000B5A59400634A3100634A3100634A
      3100634A4200634A3100634A3100634A3100634A3100634A3100634A3100634A
      3100634A3100634A3100634A3100634A31000000000000000000635239006352
      4200634A3100735242007363520073524200634A3100634A3100634A3100634A
      3100634A31000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000C6ADA500D6BDA500C6A58400B58C
      7300E7BDA500D6AD9400B5947300E7BDA500C6A58400B58C7300D6BDA500C6A5
      8400B58C7300D6AD9400C69C8400634A310000000000C6ADA500F7F7F700E7DE
      D600E7D6C600E7CEC6009494B500D6C6B500E7BDA500D6B5A500D6B5A500D6AD
      9400D6A59400634A3100000000000000000000000000735A4A006B524200634A
      3900634A3100634A3100634A3100634A3100634A3100634A3100634A3100634A
      3100634A3100634A3100634A3100634A310000000000000000004A6363003952
      5200395252003952520039525200395252003952520039525200395252003952
      520039525200395252004A63630000000000C6ADA500FFFFFF00FFFFFF00C69C
      8400FFFFFF00FFFFF700C69C8400FFF7F700FFF7F700C69C8400FFEFE700FFEF
      E700C6A58400FFE7D600D6C6B500634A310000000000C6ADA500FFF7F700F7F7
      F700F7EFE7003152C6001039B500737BC600E7D6D600F7D6C600E7D6C600E7CE
      B500D6AD9400634A31000000000000000000B5A59400EFDED600EFDECE00E7CE
      BD00E7C6B500DEBDAD00DEBDAD00DEBDAD00DEBDA500DEBDA500DEBDA500DEB5
      9C00DEB59400E7AD9400E7AD8C00634A3100000000001884B5001884B500187B
      B500107BAD00107BAD001073AD000873A5000873A500086BA500006B9C00006B
      9C00006B9C0000639C00293939004A636300C6ADA500FFFFFF00FFFFFF00D6AD
      9400FFFFFF00FFFFFF00D6A58400FFFFF700FFF7F700D6A58400FFEFE700FFEF
      E700D6A58400FFE7D600D6C6B500634A310000000000C6ADA500FFF7F700D6D6
      E7003152C600315AF700214AE7001039B500A59CC600F7D6C600F7D6C600E7CE
      B500D6AD9400634A31000000000000000000BDA59400FFF7EF00ADB5C600085A
      C6001052AD000042940021528C00ADA5A500FFE7D600F7DECE00F7D6C600F7D6
      C600F7D6C600F7D6C600DEB59400634A31002184BD0063CEFF002184BD009CFF
      FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6
      FF0039A5D6009CFFFF0000639C0039524A00C6B5A500D6B59400C69C8400B58C
      7300D6A58400C69C8400B58C7300D6A58400C69C84001042E7001039E7001039
      C6000031B500D6A58400C69C8400634A310000000000C6B5A500FFFFF7002142
      C600315AF7006384FF00527BF7004263F7002142B500D6C6C600F7DED600E7CE
      C600D6B5A500634A31000000000000000000BDAD9C00E7EFF7001863C6006BA5
      F7004284DE000042A5001063CE0000399400FFEFDE00DEBDAD00C69C8C00C69C
      8400C6948400BD947B00DEB59C00634A3100218CBD0063CEFF00218CBD009CFF
      FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7
      FF0042ADDE009CFFFF00006B9C0039524A00C6B5A500FFFFFF00FFFFFF00C69C
      8400FFFFFF00FFFFFF00C69C8400FFFFFF00FFFFF7003163F700FFFFF700FFFF
      F7001039C600FFEFE700D6C6B500634A310000000000C6B5A500FFFFF70084A5
      FF00849CFF008494F700D6D6E700849CF7004263E700425AB500F7DED600F7DE
      D600D6BDA500635242000000000000000000C6AD9C00EFEFF700316BC60073A5
      E700185AB5002173DE000852B5001852A500FFEFE700FFE7D600FFDECE00F7DE
      CE00F7DEC600F7D6C600DEBDA500634A3100298CC60063CEFF002994C6009CFF
      FF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EF
      FF004AB5E7009CFFFF00006B9C0039524A00C6B5A500FFFFFF00FFFFFF00D6A5
      8400FFFFFF00FFFFFF00D6A58400FFFFFF00FFFFFF006384FF00FFFFFF00FFFF
      F7001039E700FFEFE700D6CEC600634A310000000000D6B5A500FFFFFF00E7EF
      FF00C6CEF700F7F7F700F7F7E700E7DEE7008494F700315AE700526BB500F7E7
      D600E7CEB500735A42000000000000000000C6B5A500FFFFFF00DEDEDE003152
      8C009C9C9400848C9C0029529400D6D6DE00FFF7EF00EFD6C600C69C8C00C69C
      8400BD948400BD947B00D6BDAD00634A3100298CC60063CEFF00319CCE009CFF
      FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7
      FF0052BDEF009CFFFF00006B9C0039524A00D6B5A500D6B59400C69C8400B58C
      7300D6A58400C69C8400B58C7300D6A58400C69C8400849CFF006384FF003163
      F7001042E700D6A58400C69C8400634A310000000000D6BDA500FFFFFF00FFFF
      FF00FFFFF700FFFFF700FFF7F700F7F7E700F7E7E700738CF7002152D6009494
      C600E7D6C600847363000000000000000000C6B5A500FFFFFF00636363002929
      2100B5B5B5007B7B7B0063636B00FFFFFF00FFFFF700FFF7EF00FFEFE700FFEF
      E700FFEFDE00FFE7D600D6BDAD00634A31002994C6006BD6FF00319CCE009CFF
      FF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFF
      FF0063C6FF009CFFFF00086BA50039524A00D6BDA500FFFFFF00FFFFFF00C69C
      8400FFFFFF00FFFFFF00C69C8400FFFFFF00FFFFFF00C69C8400FFFFFF00FFFF
      F700C69C8400FFF7F700E7DED6006352420000000000D6BDB500FFFFFF00FFFF
      FF00FFFFFF00FFFFF700FFFFF700F7F7F700F7E7E700F7EFE7008494F700214A
      D600A59CC600A59484000000000000000000CEB5AD00FFFFFF004A4A4A004A4A
      4A00E7E7E700C6C6C6007B7B7300DEDEDE00FFF7F700FFCEA500FFB58C00FFAD
      8400FFA57B00F79C7300D6C6B500634A31002994C6007BE7FF002994C600FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0084E7FF00FFFFFF000873A5004A635A00D6BDA500FFFFFF00FFFFFF00D6A5
      8400FFFFFF00FFFFFF00D6A58400FFFFFF00FFFFFF00D6A58400FFFFFF00FFFF
      FF00D6A58400FFFFF700FFF7F700634A310000000000D6C6B500FFFFFF00FFFF
      FF0084A5B500638C9400638C9400637B9400637B84007384940094A5B50094A5
      F7003152D600B59C94000000000000000000CEBDAD00FFFFFF006B6B6B007373
      73009C9C9C00949494007B7B7B00E7E7DE00FFFFFF00FFFFF700FFFFFF00FFFF
      F700FFF7EF00FFF7EF00D6C6BD00634A39003194CE0084EFFF0084E7FF002994
      C6002994C6002994C6002994C6002994C6002994C600298CC600218CBD002184
      BD001884B5001884B5001884B50000000000F7AD9400F7AD9400F7AD8400F7AD
      8400F7A58400F7A57300E79C7300E7947300E7946300E78C6300E7845200E784
      5200E77B4200E77B4200E7734200BD63390000000000D6C6B500FFFFFF00FFFF
      FF0084ADB50094DEE70094EFF70084DEF70063CEE700529CB50073849400F7EF
      E700E7DED600A59C94000000000000000000D6BDB500FFFFFF00E7E7E7007373
      73008484840073737300C6C6C600FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFF700FFFFF700CEC6C600735A4200319CCE0094F7FF008CF7FF008CF7
      FF008CF7FF008CF7FF008CF7FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00107BAD004A635A000000000000000000F7AD9400FFEFE700FFEFE700FFEF
      E700FFEFE700FFEFE700FFEFE700FFB59400FFAD8400F7AD8400F7AD8400F7A5
      8400F7A58400F7A58400F7A57300CE63390000000000CEC6B500FFFFFF00FFFF
      FF00F7FFFF0084ADB500A5ADA5009484730084CED60052738400F7F7F700F7E7
      E700F7E7E700847363000000000000000000D6C6B500FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF007B635200319CCE00FFFFFF009CFFFF009CFF
      FF009CFFFF009CFFFF00FFFFFF00218CBD002184BD001884B5001884B5001884
      B500187BB500000000000000000000000000F7AD9400F7AD9400F7AD8400E7A5
      8400E7A58400E79C7300E7947300E7946300E78C6300E7845200D6845200D67B
      5200D6734200D6734200D6734200D66B31000000000000000000CEC6B500D6C6
      B500D6C6B50073ADB500A5EFF700A5EFF70094D6E700426B7300C6ADA500C6AD
      A500C6AD9400000000000000000000000000D6C6B500D6C6B500D6BDB500CEBD
      AD00CEBDAD00CEB5AD00C6B5A500C6B5A500C6AD9C00BDAD9C00BDA59C00BDA5
      9400B5A5940000000000000000000000000000000000319CCE00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00298CC600000000000000000000000000000000000000
      0000000000000000000000000000000000009CA5A500FFFFFF0094949400FFFF
      FF00848C8C00FFFFFF0084848400FFFFFF0084848400FFFFFF0073737300FFFF
      FF0063636300FFFFFF00635A6300000000000000000000000000000000000000
      0000000000000000000084B5C60084A5B5007394A50000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000319CCE00319C
      CE003194CE002994C60000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000021292100000000002129
      2100000000002129210000000000212921000000000021292100000000002129
      2100000000002129210000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000009C000000
      FF00319CFF003131CE0000000000000000000000000000000000000000000000
      00000000CE00319CFF000000CE00000000000000000000000000000000000000
      0000000000000000000000000000000000009C3100009C310000000000009C31
      00009C310000000000009C3100009C3100000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C009C9C9C00000000009C9C
      9C009C9C9C00000000009C9C9C009C9C9C00000000006BF76B006BF763006BEF
      630063EF630063EF630063EF5A005AEF5A005AEF5A005AE7520052E7520052E7
      520052E7520052E74A0052E7520039D639000000000000000000000000000000
      9C000000FF000063FF000000CE00000000000000000000000000000000000000
      00000000FF000000FF0000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE6300009C31000000000000CE63
      00009C31000000000000CE6300009C3100000000000000000000000000000000
      000000000000000000000000000000000000B5B5B5009C9C9C0000000000B5B5
      B5009C9C9C0000000000B5B5B5009C9C9C0042B5390039B5390039AD390039AD
      390039AD310031A5310031A53100319C3100299C2900299C2900219421002194
      2100218C2100188C180021942100219C21000000000000000000000000000000
      000000009C000000CE000000FF000000CE000000000000000000000000000000
      CE000000FF0000009C0000000000000000000000000000000000000000000000
      00000000000000000000000000000000FF000000840000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000B5B5B5009C9C9C0000000000000000000000
      000000000000000000000000000000000000299C290029942900299429002194
      2100218C2100218C2100218C2100188C180018841800107B100021842100398C
      3100318431002984290021842100108410000000000000000000000000000000
      0000000000000000000000009C000000FF000000CE00000000000000CE000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF0000009C0000009C0000008400000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000002994290029942900298429002184
      2900218421002184210021842100217B210010731000317B31009CD69C009CD6
      9C0094D69400ADDEAD006BB56B000884080000000000000000002121B5001008
      A50010088400100873000000000000009C000000FF000000CE000000FF000000
      9C00000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF0000009C000000840000009C00000084000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000002194210052AD5200A5D6A50094D6
      940094D6940094D6940094D694008CCE8C0094BD9400D6E7D600CEEFCE00BDE7
      BD00ADCEAD007BB57B0018841800108C1000000000004239A5008473C6008473
      C6008473C60010087300000000000000000000009C000000FF0000009C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF0000009C0000009C000000840000009C000000
      8400000000000000000000000000000000000000000000000000000000000000
      00000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C000000000000000000000000000000000021942100218C210084BD8400ADD6
      AD008CC684008CC68C007BBD7B0094B59400DEEFDE00CEE7CE00BDDEBD00CEE7
      CE00CEEFCE0029842900087B0800188C1800000000004231A500736BC600846B
      D6007363C60010087300524AC600000000000000FF0000009C000000CE000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF00CE9C630000009C0000009C0000009C000000FF000000
      9C00000084000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00B5B5B5009C9C
      9C009C9C9C00000000000000000000000000218C2100218C2100188418007BB5
      7B00A5D6A50073B573008CB58C00DEEFDE00C6E7C600BDDEBD00D6E7D600C6DE
      C6009CD69C0094D69400298C2900108C1000000000004231A5007363C6007363
      C600100894006352B500312184000000FF0000009C000000000000009C000000
      CE00000000000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF00FFCE9C00FFCE9C0000009C000000FF000000FF000000
      FF0000009C000000840000000000000000000000000000000000000000000000
      000000000000FFFFFF00CECECE00CECECE009C9C9C00B5B5B500B5B5B500B5B5
      B5009C9C9C009C9C9C000000000000000000218C2100218C2100188418001884
      18006BAD6B00A5BDA500DEEFDE00C6DEBD00BDDEBD00D6E7D600B5D6B50094C6
      940094C694009CCE9C0052A54A00108C100000000000000000005242A5003129
      A500E7E7E700FFFFF7000000FF0000009C000000000000000000000000000000
      9C000000CE000000000000000000000000000000000000000000000000000000
      0000FFFFFF00FFCE9C00FFCE9C00FFFFFF00FFFFFF000000FF00319CFF00319C
      FF00319CFF0000009C0000000000000000000000000000000000000000000000
      0000FFFFFF00CECECE00CECECE00FFFFFF00FFFFFF00B5B5B500CECECE00CECE
      CE00CECECE009C9C9C0000000000000000001884180018841800188418000873
      0800398C3900CEEFCE00D6E7D600B5D6B500D6EFD600B5DEB50018731800087B
      08001084100018841800188C2100189418000000000000000000737394006363
      6300525A52000000FF0000009C00000000000000000000000000000000000000
      000000009C000000CE000000000000000000000000000000000000000000FFFF
      FF00FFCE9C00FFCE9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF0000009C000000
      9C0000009C00000000000000000000000000000000000000000000000000FFFF
      FF00CECECE00CECECE00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C9C9C009C9C
      9C009C9C9C000000000000000000000000001884180018841800087308004294
      42009CDE9C0084BD8400ADCEAD00DEEFDE00B5D6B50094CE94007BC67B00187B
      180018841800218C2100218C2100219C210000000000738C8C0000000000C6C6
      C6000000FF00848C8400525A52007B7B7B000000000000000000000000000000
      00000000000000009C0000000000000000000000000000000000FFFFFF00FFCE
      9C00FFCE9C00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C6300000000000000
      0000000000000000000000000000000000000000000000000000FFFFFF00CECE
      CE00CECECE00FFFFFF00FFFFFF00FFFFFF009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000001884180008730800429442009CDE
      9C0084BD84007BB57B009CC69C00B5D6AD009CC69C007BB57B009CD6940084CE
      840021842100188C180021942100219C210000000000423942000000FF00D6DE
      D600C6C6C600A5A5A500848C8400636B63000000000000000000000000000000
      000000000000000000000000CE000000000000000000FFFFFF00FFCE9C00FFCE
      9C00FFFFFF00FFFFFF00FFFFFF00CE9C63000000000000000000000000000000
      00000000000000000000000000000000000000000000FFFFFF00CECECE00CECE
      CE00FFFFFF00FFFFFF00FFFFFF009C9C9C000000000000000000000000000000
      00000000000000000000000000000000000010731000429C42009CDE9C0084BD
      840084B58400A5CEA5007BB57B00107B100073B57300A5CEA50084BD84009CD6
      9C008CCE8C00298C29002194210021A521000000000052525200524A5200B5BD
      B500D6DED600C6C6C600A5A5A500737B73000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFCE9C00FFCE9C00FFFF
      FF00FFFFFF00FFFFFF00CE9C63000000FF000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00CECECE00CECECE00FFFF
      FF00FFFFFF00FFFFFF009C9C9C00B5B5B5000000000000000000000000000000
      00000000000000000000000000000000000021842100A5D6A500B5DEBD00B5D6
      B500B5D6B5007BB57B00107B1000107B10001884180073B57300BDDEB500B5D6
      B500BDE7BD007BBD7B002194210021A5210000000000737B7300636363006363
      630073737300635A6300C6C6C600848C84000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300FFCE9C00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000FF00000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE00FFFFFF00FFFF
      FF00FFFFFF009C9C9C00B5B5B500000000000000000000000000000000000000
      000000000000000000000000000000000000107B10002984290029842900298C
      290029842900107B10001884180018841800188418001884180031943100399C
      3900399C3900319C3100299C290029A52900000000008C9C9C00737373008484
      8400A5A5A50094949400525A5200848C8C000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00CE9C63000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00FFFFFF00FFFF
      FF009C9C9C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000001884180010841000108410001884
      180018841800218C2100218C210021942100219421002994290021942100299C
      2900299C2900299C290031A5310031B531000000000000000000949C9C009494
      9400948C940084848400949C9C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CE9C6300CE9C
      6300000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000042B542004ABD4A004ABD4A0052BD
      4A0052C6520052C6520052C652005ACE5A005ACE5A005ACE5A005AD65A0063D6
      630063D6630063D663006BDE6B005AE752000000000000000000000000000000
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
      00000000000000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C31000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C000000000000000000000000000000000000000000000000000000
      0000CE9C63009C3100009C310000CE9C63000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5009C9C9C009C9C9C00B5B5B5000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00CE9C
      6300CE9C63009C310000000000000000000000000000B5B5B500CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00B5B5
      B500B5B5B5009C9C9C0000000000000000000000000000000000000000009C31
      00009C310000CE630000CE6300009C3100000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C009C9C9C00CECECE00CECECE009C9C9C000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      63009C310000CE9C63009C31000000000000B5B5B500B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5
      B5009C9C9C00B5B5B5009C9C9C000000000000000000000000009C310000CE63
      0000CE6300009C3100009C310000CE9C63000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C009C9C9C00B5B5B5000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE
      9C00CE9C63009C3100009C31000000000000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00B5B5B5009C9C9C009C9C9C000000000000000000CE9C63009C310000CE63
      00009C310000CE9C630000000000000000009C3100009C3100009C3100009C31
      00009C3100009C3100009C3100000000000000000000B5B5B5009C9C9C00CECE
      CE009C9C9C00B5B5B50000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C0000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C0000CE0000009C0000FFCE9C000000FF000000CE00FFCE
      9C00CE9C6300CE9C63009C31000000000000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00B5B5B5009C9C9C00CECECE00B5B5B5009C9C9C00CECE
      CE00B5B5B500B5B5B5009C9C9C0000000000000000009C310000CE6300009C31
      0000CE9C63000000000000000000000000009C310000CE630000CE630000CE63
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C00B5B5B5000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300CE9C6300CE9C63009C310000B5B5B50000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B500B5B5B500B5B5B5009C9C9C00000000009C310000CE6300009C31
      000000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C0000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE
      9C00CE9C6300CE9C6300CE9C63009C310000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00B5B5B500B5B5B500B5B5B5009C9C9C00000000009C310000CE6300009C31
      0000CE9C630000000000000000000000000000000000CE9C63009C310000CE63
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C00B5B5B50000000000000000000000000000000000B5B5B5009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300FFCE
      9C00FFCE9C00CE9C6300CE9C63009C31000000000000B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500CECE
      CE00CECECE00B5B5B500B5B5B5009C9C9C0000000000CE9C63009C310000CE63
      00009C310000CE9C630000000000CE9C63009C3100009C310000CE6300009C31
      0000CE630000CE6300009C3100000000000000000000B5B5B5009C9C9C00CECE
      CE009C9C9C00B5B5B50000000000B5B5B5009C9C9C009C9C9C00CECECE009C9C
      9C00CECECE00CECECE009C9C9C00000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300FFCE9C00FFCE9C00CE9C63009C3100000000000000000000B5B5B5000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B500CECECE00CECECE00B5B5B5009C9C9C0000000000000000009C310000CE63
      0000CE6300009C3100009C3100009C310000CE630000CE6300009C310000CE9C
      63009C310000CE6300009C3100000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C009C9C9C009C9C9C00CECECE00CECECE009C9C9C00B5B5
      B5009C9C9C00CECECE009C9C9C0000000000000000000000000000000000CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C
      6300CE9C6300CE9C63009C31000000000000000000000000000000000000B5B5
      B50000000000CECECE00CECECE00CECECE00CECECE00CECECE0000000000B5B5
      B500B5B5B500B5B5B5009C9C9C00000000000000000000000000000000009C31
      00009C310000CE630000CE630000CE6300009C3100009C310000000000000000
      0000000000009C3100009C310000000000000000000000000000000000009C9C
      9C009C9C9C00CECECE00CECECE00CECECE009C9C9C009C9C9C00000000000000
      0000000000009C9C9C009C9C9C0000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300000000000000000000000000000000000000000000000000B5B5
      B500000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5000000000000000000000000000000000000000000000000000000
      0000CE9C63009C3100009C3100009C310000CE9C630000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5009C9C9C009C9C9C009C9C9C00B5B5B50000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CE9C6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFF
      FF00CE9C63000000000000000000000000000000000000000000000000000000
      0000B5B5B50000000000CECECE00CECECE00CECECE00CECECE00CECECE000000
      0000B5B5B5000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CE9C6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C630000000000000000000000000000000000000000000000
      0000B5B5B5000000000000000000000000000000000000000000000000000000
      000000000000B5B5B50000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C630000000000000000000000000000000000000000000000
      000000000000B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B50000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E7EFF700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000004239A5008473C6008473C6008473C6001008
      7300738CC6000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000A5522100A552
      3100000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000002121B5001008A5001008
      8400100873007394AD000000000000000000000000000000000000000000E7EF
      F70000000000CECECE00E7E7E700E7EFF7000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000004231A500736BC600846BD6007363C6001008
      7300524AC60094A5BD00A59C9C00000000000000000000000000000000000000
      00000000000000000000D6846300944A2100A54A2100A5522100B55A3100C66B
      4200A55231000000000000000000000000003131310000000000000000000000
      0000000000000000000000000000000000004239A5008473C6008473C6008473
      C60010087300738CC600000000000000000000000000E7EFF70000000000B5B5
      B5009C9C9C009C9C9C009C9C9C00B5B5B500CECECE0000000000E7EFF7000000
      00000000000000000000000000000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C63004231A5007363C6007363C600100894006352
      B500312184005242C60021188400000000000000000000000000000000000000
      00000000000000000000D68C6300FFB59400F7946300F78C5200E7845200D67B
      5200C6734200A55A310000000000000000006363630031313100313131000000
      0000000000000000000000000000000000004231A500736BC600846BD6007363
      C60010087300524AC60094A5BD00A59C9C00000000009C9C9C009C9C9C009C9C
      9C009C9C9C00FFFFFF009C9C9C009C9C9C009C9C9C00B5B5B500000000000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF005242A5003129A500E7E7E700FFFF
      F700100873001008630000000000000000000000000000000000000000000000
      00000000000000000000E7947300FFBD9400FFAD8400FF946300F7946300E78C
      5200E77B5200C6734200C6734200000000006363630063636300636363003131
      3100000000000000000000000000000000004231A5007363C6007363C6001008
      94006352B500312184005242C600211884009C9C9C009C9C9C00C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00E7EFF7000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E7007373940063636300525A52006363
      630031398C0000000000000000000000000000000000000000002121B5001008
      A5001008840010087300E79C7300FFC6A500FFC6A500FFB58400FFAD8400FFA5
      7300E7845200B55A310000000000000000000000000063636300636363006363
      630031313100009C9C000000000000000000000000005242A5003129A500E7E7
      E700FFFFF7001008730010086300000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00C6C6C600C6C6C6009C9C9C00FFFFFF00CECE
      CE000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00738C8C0000000000C6C6C600A5A5A500848C
      8400525A52007B7B7B000000000000000000000000004239A5008473C6008473
      C6008473C60010087300F7A57300E79C7300E7947300D68C6300E7947300F79C
      7300B55A31000000000000000000000000000000000063636300636363009CFF
      FF009CCECE009CCECE00009C9C0000000000000000007373940063636300525A
      52006363630031398C0000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00C6C6C600CECECE009C9C9C00CECECE009C9C
      9C000000000000000000000000000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E7004239420031313100D6DED600C6C6C600A5A5
      A500848C8400636B63000000000000000000000000004231A500736BC600846B
      D6007363C60010087300524AC60094A5BD00A59C9C0000000000E79C7300C67B
      520000000000000000000000000000000000000000000000000084848400CEFF
      FF009CFFFF009CCECE009CCECE00009C9C00738C8C0000000000C6C6C600A5A5
      A500848C8400525A52007B7B7B00000000009C9C9C00C6C6C6009C9C9C009C9C
      9C00CECECE00FFFFFF009C9C9C00CECECE00CECECE00B5B5B5009C9C9C009C9C
      9C000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF0052525200524A5200B5BDB500D6DED600C6C6
      C600A5A5A500737B73000000000000000000000000004231A5007363C6007363
      C600100894006352B500312184005242C6002118840000000000F7A573000000
      000000000000000000000000000000000000000000000000000063CECE00FFFF
      FF00CEFFFF009CFFFF009CFFFF009CCECE004239420031313100D6DED600C6C6
      C600A5A5A500848C8400636B6300000000009C9C9C00C6C6C60063636300FFFF
      FF00CECECE00FFFFFF009C9C9C00CECECE00C6C6C6009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700737B7300636363006363630073737300635A
      6300C6C6C600848C8400000000000000000000000000000000005242A5003129
      A500E7E7E700FFFFF70010087300100863000000000000000000000000000000
      000000000000000000000000000000000000000000000000000063CECE00FFFF
      FF00CEFFFF00CEFFFF009CFFFF009CFFFF0052525200524A5200B5BDB500D6DE
      D600C6C6C600A5A5A500737B7300000000009C9C9C00C6C6C6009C9C9C006363
      6300CECECE00FFFFFF009C9C9C00E7E7E7009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF008C9C9C007373730084848400A5A5A5009494
      9400525A5200848C8C0000000000000000000000000000000000737394006363
      6300525A52006363630031398C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009CCE
      CE00FFFFFF00CEFFFF00CEFFFF009CFFFF00737B730063636300636363007373
      7300635A6300C6C6C600848C8400000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00E7E7E7009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700949C9C0094949400948C94008484
      8400949C9C0000000000000000000000000000000000738C8C0000000000C6C6
      C600A5A5A500848C8400525A52007B7B7B000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000063CE
      CE00FFFFFF00CEFFFF00CEFFFF00FFCECE008C9C9C007373730084848400A5A5
      A50094949400525A5200848C8C00000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7EFF7009C9C9C009C9C9C009C9C
      9C000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300000000000000000000000000000000004239420031313100D6DE
      D600C6C6C600A5A5A500848C8400636B63000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009CCECE00FFFFFF00CEFFFF00CE630000CE630000949C9C0094949400948C
      940084848400949C9C009C310000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7E7E700CECECE00C6C6C6009C9C
      9C000000000000000000000000000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C6300CE9C
      6300CE9C63000000000000000000000000000000000052525200524A5200B5BD
      B500D6DED600C6C6C600A5A5A500737B73000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000063CECE00FFFFFF00FFCECE00CE630000CE630000CE630000CE630000CE63
      00009C3100009C3100009C310000000000009C9C9C009C9C9C00C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7E7E7009C9C9C0000000000C6C6
      C6000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7E700CE9C
      63000000000000000000000000000000000000000000737B7300636363006363
      630073737300635A6300C6C6C600848C84000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FF9C0000FF9C0000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C3100009C3100000000000000000000C6C6C6009C9C9C009C9C
      9C00C6C6C600FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C63000000
      000000000000000000000000000000000000000000008C9C9C00737373008484
      8400A5A5A50094949400525A5200848C8C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CE630000FF9C0000FF9C0000CE630000CE630000CE630000CE63
      0000CE630000CE6300009C31000000000000000000000000000000000000CECE
      CE009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300000000000000
      0000000000000000000000000000000000000000000000000000949C9C009494
      9400948C940084848400949C9C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CE630000FF9C0000FF9C0000CE630000CE630000CE63
      0000CE630000CE630000CE630000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E7EFF700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E7947300944A
      2100944A21008442210084422100844221008439210084392100844221008442
      2100944A2100944A2100D67B5200000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000944A21000000000000000000000000000000000000000000000000006321
      6300000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E7EF
      F700E7E7E700CECECE00E7E7E700E7EFF7000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300CE9C6300E7947300C68C
      7300C6845200D6AD9400E7CEB500C6846300C6525200B56B3100E7CEB500D6AD
      9400B5947300C68C7300D67B5200000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000A5522100A552310000000000000000000000000000000000632163006321
      6300000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000E7EFF700E7E7E700B5B5
      B500CE9C9C009C6363009C636300B5B5B500CECECE00E7E7E700E7EFF7000000
      000000000000000000000000000000000000CE9C6300FFFFFF00E7947300B594
      8400D6C6B500D6B5A500E7CEC600B58C7300C6735200B5734200E7CEC600D6B5
      A500E7D6C600B5948400D6845200000000000000000000000000000000000000
      000000000000000000000000000000000000D6846300944A2100A54A2100A552
      2100B55A3100C66B4200A5523100000000000000000073216300A54294006321
      6300632163006321630063216300632163000000000000000000000000000000
      000000000000000000000000000000000000E7E7E700CE9C9C009C636300CE9C
      9C00CE9C9C00FFFFFF009C6363009C9C9C009C9C9C00B5B5B500E7E7E7000000
      000000000000000000000000000000000000CE9C6300FFFFFF00E7947300E7D6
      D600E7BDA500C6845200D6BDA500E7B59400B5735200B57B5200D6BDA500C684
      5200C68C6300E7D6C600D68C6300000000000000000000000000000000000000
      000000000000000000000000000000000000D68C6300FFB59400F7946300F78C
      5200E7845200D67B5200C6734200A55A3100944A8400A552A500C65AB500B552
      A500B54AA5009442940084398400632163000000000000000000000000000000
      0000000000000000000000000000000000009C636300CE9C9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630031639C0031639C0031639C00E7EFF7000000
      000000000000000000000000000000000000CE9C6300FFFFFF00E7947300FFFF
      FF00D69C8400C68C6300E7DED600C69C8400B5735200C6845200E7DED600C68C
      6300D68C6300FFFFFF00E7947300000000000000000000000000000000000000
      000000000000000000000000000000000000E7947300FFBD9400FFAD8400FF94
      6300F7946300E78C5200E77B5200C6734200D6A5D600D684C600C66BC600C65A
      B500B552B500B552A500A5429400732163000000000000000000000000000000
      0000000000000000000000000000000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630063CECE0063CECE00009CCE00FFFFFF00FFCE
      CE0000000000000000000000000000000000CE9C6300FFFFFF00E7947300E7D6
      D600F7CEB500D68C6300F7DED600C69C8400B5845200C68C6300F7DED600D68C
      6300D69C7300E7D6D600E79C7300000000000000000000000000000000000000
      0000314A5200316B9400217BB500217BB500E79C7300FFC6A500FFC6A500FFB5
      8400FFAD8400FFA57300E7845200B55A3100C67BB500D6ADD600D69CD600D68C
      C600D684C600C684C600C67BB50073297300217BB500217BB500316B9400314A
      5200000000000000000000000000000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630063CECE0063CEFF00319CCE00FFCECE00CE63
      000000000000000000000000000000000000CE9C6300FFFFFF00E7947300B5A5
      9400E7CEC600F7CEB500E7B5A500F7CEB500C69C8400D6AD9400E7B5A500F7CE
      B500F7E7E700B5A59400E7A584000000000000000000314A520021739400314A
      520031ADF70031C6FF0042D6FF00C6F7F700F7A57300E79C7300E7947300D68C
      6300E7947300F79C7300B55A31000000000000000000C67BB500D6A5D600A54A
      9400B56BB500B563B500B55AA500B54AA500C6F7F70042D6FF0031C6FF0031AD
      F700314A520021739400314A5200000000009C636300FFCE9C00CE9C9C00CE9C
      6300FFCECE00FFFFFF009C6363009CCECE009CCEFF00B5B5B500FF630000CE63
      000000000000000000000000000000000000CE9C6300FFFFFF00E7947300A58C
      8400B5948400D6C6B500FFF7E700FFF7F700F7F7F700F7F7F700FFF7E700D6C6
      B500B5A59400A58C8400E7A5840000000000425A730042BDF70042D6FF0073D6
      F7008484840094A5A500A5C6C600A5CED60094CEBD0031425200316B9400217B
      B500E79C7300C67B520000000000000000000000000000000000C673B500A542
      9400217BB500316B94003142520094CEBD00A5CED600A5C6C60094A5A5008484
      840073D6F70042D6FF0042BDF700425A73009C636300FFCE9C009C636300FFFF
      FF00FFCECE00FFFFFF009C6363009CCECE00C6C6C600CE630000CE630000CE63
      0000CE630000CE630000CE63000000000000CE9C6300FFFFFF00E7947300E7A5
      8400E7A58400E79C8400E79C7300D6947300C6846300D68C7300E79C7300E79C
      8400E7A58400E7A58400E7A58400000000000000000021394200215A73001073
      A500107BB5000000000000000000000000001039520031B5F70031C6FF0042D6
      FF00F7A5730094B5C6000000000000000000000000000000000094B5C600B56B
      B50042D6FF0031C6FF0031B5F70010395200000000000000000000000000107B
      B5001073A500215A730021394200000000009C636300FFCE9C00CE9C9C009C63
      6300FFCECE00FFFFFF009C63630000000000CE630000CE630000CE630000CE63
      0000CE630000CE630000CE63000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C
      630000000000000000000000000000000000315A630042BDF70042D6FF0063DE
      FF00D6FFFF0094B5C600000000000000000000000000848C940094A5A500A5C6
      C60094B5C60000000000000000000000000000000000000000000000000094B5
      C600A5C6C60094A5A500848C940000000000000000000000000094B5C600D6FF
      FF0063DEFF0042D6FF0042BDF700315A63009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630000000000CE9C9C00CE630000CE630000CE63
      0000CE630000CE630000CE63000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300000000000000000000000000000000000000000021394200215A73001073
      A500106BA5000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000106B
      A5001073A500215A730021394200000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C636300CECECE00E7EFF700CE9C9C00FF630000CE63
      000000000000000000000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C6300CE9C6300CE9C
      630000000000000000000000000000000000214A630042BDF70042D6FF0063DE
      FF00D6FFFF0084C6D60000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000084C6D600D6FF
      FF0063DEFF0042D6FF0042BDF700214A63009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C6363009CCECE00000000009CCECE00FFCE9C00CE63
      000000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7E700CE9C63000000
      0000000000000000000000000000000000000000000021314200215A73001073
      A500006BA5000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000006B
      A5001073A500215A730021314200000000009C636300CE9C9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C636300CECECE0000000000319CCE0000000000FFCE
      9C0000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C6300000000000000
      0000000000000000000000000000000000002152730031ADF70031C6FF0042D6
      FF00C6F7F70084BDE70000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000084BDE700C6F7
      F70042D6FF0031C6FF0031ADF7002152730000000000C6C6C600CE9C6300CE9C
      9C00CECE9C00FFFFFF009C636300009CCE00009CCE00009CCE00000000000000
      000000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C630000000000000000000000
      000000000000000000000000000000000000000000007384A500849CB500A5C6
      D60084B5E7000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000084B5
      E700A5C6D600849CB5007384A50000000000000000000000000000000000CECE
      CE00CE9C9C009C6363009C636300000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      00000000000000000000217BB500217BB500316B9400314A5200000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000002121B5001008A50010088400100873007394
      AD00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00000000000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300B5DEF700C6F7F70042D6FF0031C6FF0031ADF700314A52002173
      9400314A52000000000000000000000000000000000000000000000000000000
      000000000000000000004239A5008473C6008473C6008473C60010087300738C
      C6000000000000000000000000000000000000000000D67B5200944A2100944A
      2100944A21008442210084422100844221008439210084392100843921008442
      21008442210084422100944A2100944A210000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C00000000000000000000000000217BB500217BB500316B
      94003142520094CEBD00A5CED600A5C6C60094A5A5008484840073D6F70042D6
      FF0042BDF700425A730000000000000000000000000000000000000000000000
      000000000000000000004231A500736BC600846BD6007363C60010087300524A
      C60094A5BD00A59C9C00000000000000000000000000D67B5200C68C7300C684
      5200B5947300D6AD9400E7CEB500C6846300B56B3100C6525200B56B3100C684
      6300E7CEB500D6AD9400B5947300C684520000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00000000000000000000000000C6F7F70042D6FF0031C6
      FF0031B5F70010395200E7E7E700E7E7E700E7E7E700107BB5001073A500215A
      73002139420000000000000000000000000000000000000000002121B5001008
      A50010088400100873004231A5007363C6007363C600100894006352B5003121
      84005242C60021188400000000000000000000000000D6845200B5948400D6C6
      B500E7D6C600D6B5A500E7CEC600B58C7300B5734200C6735200B5734200B58C
      7300E7CEC600D6B5A500E7D6C600D6C6B50000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C0000000000000000000000000094B5C600A5C6C60094A5
      A500848C9400FFFFFF00FFFFFF00FFFFFF0094B5C600D6FFFF0063DEFF0042D6
      FF0042BDF700315A63000000000000000000000000004239A5008473C6008473
      C6008473C60010087300738CC6005242A5003129A500E7E7E700FFFFF7001008
      730010086300000000000000000000000000944A2100D68C6300E7D6C600E7BD
      A500C68C6300C6845200D6BDA500E7B59400B57B5200B5735200B57B5200E7B5
      9400D6BDA500C6845200C68C6300E7BDA50000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00000000000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700106BA5001073A500215A
      730021394200000000000000000000000000000000004231A500736BC600846B
      D6007363C60010087300524AC6007373940063636300525A5200636363003139
      8C0000000000000000000000000000000000C6845200E7947300FFFFFF00D69C
      8400D68C6300C68C6300E7DED600C69C8400C6845200B5735200C6845200C69C
      8400E7DED600C68C6300D68C6300D69C840000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C00000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0084C6D600D6FFFF0063DEFF0042D6
      FF0042BDF700214A63000000000000000000000000004231A5007363C6007363
      C600100894006352B500738C8C0000000000C6C6C600A5A5A500848C8400525A
      52007B7B7B00000000000000000000000000D6C6B500E79C7300E7D6D600F7CE
      B500D69C7300D68C6300F7DED600C69C8400C68C6300B5845200C68C6300C69C
      8400F7DED600D68C6300D69C7300F7CEB50000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00000000000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700006BA5001073A500215A
      73002131420000000000000000000000000000000000000000005242A5003129
      A500E7E7E700FFFFF7004239420031313100D6DED600C6C6C600A5A5A500848C
      8400636B6300000000000000000000000000E7BDA500E7A58400B5A59400E7CE
      C600F7E7E700F7CEB500E7B5A500F7CEB500D6AD9400C69C8400D6AD9400F7CE
      B500E7B5A500F7CEB500F7E7E700E7CEC60000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C00000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0084BDE700C6F7F70042D6FF0031C6
      FF0031ADF7002152730000000000000000000000000000000000737394006363
      6300525A52006363630052525200524A5200B5BDB500D6DED600C6C6C600A5A5
      A500737B7300000000000000000000000000D69C8400E7A58400A58C8400B594
      8400B5A59400D6C6B500FFF7E700FFF7F700F7F7F700F7F7F700F7F7F700FFF7
      F700FFF7E700D6C6B500B5A59400B594840000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00000000000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E70084B5E700A5C6D600849C
      B5007384A50000000000000000000000000000000000738C8C0000000000C6C6
      C600A5A5A500848C8400737B7300636363006363630073737300635A6300C6C6
      C600848C8400000000000000000000000000F7CEB500E7A58400E7A58400E7A5
      8400E7A58400E79C8400E79C7300D6947300D68C7300C6846300D68C7300D694
      7300E79C7300E79C8400E7A58400E7A5840000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00000000009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300000000000000000000000000000000004239420031313100D6DE
      D600C6C6C600A5A5A5008C9C9C007373730084848400A5A5A50094949400525A
      5200848C8C00000000000000000000000000E7CEC600F7E7E700F7CEB500E7B5
      A500F7CEB500D6AD9400C69C8400D6AD9400F7CEB500E7B5A500F7CEB500F7E7
      E700E7CEC600B5A59400E7A584000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C000000
      00009C9C9C0000000000000000000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C6300CE9C
      6300CE9C63000000000000000000000000000000000052525200524A5200B5BD
      B500D6DED600C6C6C600A5A5A500949C9C0094949400948C940084848400949C
      9C0000000000000000000000000000000000B5948400B5A59400D6C6B500FFF7
      E700FFF7F700F7F7F700F7F7F700F7F7F700FFF7F700FFF7E700D6C6B500B5A5
      9400B5948400A58C8400E7A584000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7E700CE9C
      63000000000000000000000000000000000000000000737B7300636363006363
      630073737300635A6300C6C6C600848C84000000000000000000000000000000
      000000000000000000000000000000000000E7A58400E7A58400E79C8400E79C
      7300D6947300D68C7300C6846300D68C7300D6947300E79C7300E79C8400E7A5
      8400E7A58400E7A58400E7A584000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C63000000
      000000000000000000000000000000000000000000008C9C9C00737373008484
      8400A5A5A50094949400525A5200848C8C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300000000000000
      0000000000000000000000000000000000000000000000000000949C9C009494
      9400948C940084848400949C9C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000084000000840000008400000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000008400000084000000840000008400000084
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000217BB500217BB500316B9400314A52000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000008400003994420039944200399442000084
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000840000399442003994420039944200399442003994
      4200008400000000000000000000000000000000000000000000000000000000
      00000000000000000000B5DEF700C6F7F70042D6FF0031C6FF0031ADF700314A
      520021739400314A520000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C630000000000000000000000000000000000000000000000
      0000000000000000000000840000399442003994420039944200399442003994
      4200008400000000000000000000000000000000000000000000000000000000
      0000000000000084000039944200399442003994420039944200399442003994
      4A00399442000084000000000000000000000000000000000000217BB500217B
      B500316B94003142520094CEBD00A5CED600A5C6C60094A5A5008484840073D6
      F70042D6FF0042BDF700425A7300000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C630000000000000000000000000000000000000000000000
      000000000000000000003994420039944200399442003994420039944A003994
      4200399442000084000000000000000000000000000000000000000000000000
      000073D6F7003994420039944200399442003994420039944200399442003994
      4200399442003994420000840000000000000000000094B5C600C6F7F70042D6
      FF0031C6FF0031B5F70010395200000000000000000000000000107BB5001073
      A500215A73002139420000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000000000000000000073D6
      F70073D6F70073D6F70039944200399442003994420039944200399442003994
      42003994420039944200008400000000000000000000000000000000000073D6
      F70073D6F7003994420039944200399442003994420084C68C00399442003994
      420039944200399442003994420000840000000000000000000094B5C600A5C6
      C60094A5A500848C940000000000000000000000000094B5C600D6FFFF0063DE
      FF0042D6FF0042BDF700315A6300000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000000084000073D6
      EF0073D6F70073D6F70039944200399442003994420084C68C00399442004294
      4A003994420039944200399442000084000000000000000000000084000073D6
      F70073D6F70039944200399442003994420084C68C0084C68C0084C68C003994
      4200399442003994420039944200399442000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000106BA5001073
      A500215A73002139420000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000008400003994420073D6
      F70073D6F70073D6F700399442008CCE94008CCE940084C68C00399442004294
      4A003994420039944200399442000084000000000000008400003994420073D6
      F70073D6F70039944200399442008CCE940084C68C0084C68C0084C68C0084C6
      8C00399442003994420039944200399442000000000000000000000000000000
      0000000000000000000000000000000000000000000084C6D600D6FFFF0063DE
      FF0042D6FF0042BDF700214A6300000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000840000399442003994420073D6
      F70073D6F700ADEFFF008CCE94008CCE940094CE9C008CCE940084C68C003994
      42003994420039944200399442000084000000840000399442003994420073D6
      F700ADEFFF00ADDEB5008CCE94008CCE940094CE9C008CCE940084C68C0084C6
      8C0084C68C00399442003994420039944200D67B5200944A2100944A2100944A
      2100844221008442210084422100843921008439210084392100006BA5001073
      A500215A73002131420084392100842121000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000840000399442003994420073D6
      F70073D6F700B5EFFF008CCE9400A5D6A5008CCE940094CE9C0084C68C007BC6
      84003994420039944200399442000084000039944200399442003994420073D6
      F700B5EFFF00B5EFFF008CCE9400A5D6A5008CCE940094CE9C008CCE940084C6
      8C0084C68C0084C68C003994420039944200D67B5200C68C7300C6845200B594
      7300D6AD9400E7CEB500C6846300B56B3100C652520084BDE700C6F7F70042D6
      FF0031C6FF0031ADF70021527300842121000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000000000000000008400003994420039944200B5EF
      FF00B5EFFF00B5EFFF00B5EFFF00ADEFF700A5D6AD009CCE9C008CCE940084C6
      8C007BC6840073BD7B003994420000840000399442003994420039944200B5EF
      FF00B5EFFF00B5EFFF00B5EFFF00ADEFF700A5D6AD009CCE9C008CCE94008CCE
      94007BC6840073BD7B0084C68C0039944200D6845200B5948400D6C6B500E7D6
      C600D6B5A500E7CEC600B58C7300B5734200C6735200D6BDA50084B5E700A5C6
      D600849CB5007384A500D6BD9400842121000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C630000000000000000000084000039944200399442008CCE
      9400B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF00A5DEC6008CCE94008CCE
      940084C68C007BBD8400008400000000000039944200399442008CCE94008CCE
      9400B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF00A5DEC60094CE9C008CCE
      940084C68C007BBD840073BD7B0000840000D68C6300E7D6C600E7BDA500C68C
      6300C6845200D6BDA500E7B59400B57B5200B5735200E7AD8400C69C9400945A
      3100A5634200B5A59400C69C8400842921000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000840000399442008CCE94008CCE
      94008CCE9400B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF0094CE9C008CCE
      94008CCE94008CCE94000000000000000000399442008CCE94008CCE94008CCE
      94008CCE9400B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EF
      FF0094CE9C00008400000000000000000000E7947300FFFFFF00D69C8400D68C
      6300C68C6300E7DED600C69C8400C6845200B5735200C6947300C6BDB500A55A
      3100945A3100A5633100C6C6C600842921000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C
      6300CE9C6300CE9C6300000000000000000000000000008400008CCE94008CCE
      94008CCE94008CCE94008CCE9400B5EFFF00B5EFFF00B5EFFF00B5EFFF000000
      0000000000000000000000000000000000008CCE94008CCE94008CCE94008CCE
      94008CCE94008CCE94008CCE9400B5EFFF00B5EFFF00B5EFFF00BDEFFF00B5EF
      FF0000000000000000000000000000000000E79C7300E7D6D600F7CEB500D69C
      7300D68C6300F7DED600C69C8400C68C6300B5845200C6947300D6C6B500A563
      3100A5633100B58C7300C6948400843121000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7
      E700CE9C63000000000000000000000000000000000000000000008400000084
      00008CCE94008CCE94008CCE9400ADCEB5008CCE9400B5EFFF00000000000000
      000000000000000000000000000000000000000000008CCE94008CCE94008CCE
      94008CCE94008CCE94008CCE94008CCE94008CCE9400B5EFFF00000000000000
      000000000000000000000000000000000000E7A58400B5A59400E7CEC600F7E7
      E700F7CEB500E7B5A500F7CEB500D6AD9400C69C8400E7BDA500C6948400C6A5
      9400D6BDB500B59C8400A5633100843121000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C
      6300000000000000000000000000000000000000000000000000000000000000
      000000840000008400008CCE94008CCE94000084000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008CCE
      94008CCE94008CCE94008CCE94008CCE94008CCE940000000000000000000000
      000000000000000000000000000000000000E7A58400A58C8400B5948400B5A5
      9400D6C6B500FFF7E700FFF7F700F7F7F700F7F7F700F7E7E700F7DEC600C6AD
      9400A57B6300945A3100A55A2100843921000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000840000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000008CCE94008CCE9400000000000000000000000000000000000000
      000000000000000000000000000000000000E7A58400E7A58400E7A58400E7A5
      8400E79C8400E79C7300D6947300D68C7300C6846300C67B6300B57B5200B573
      5200B56B4200A5634200A55A4200945231000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000848C8400000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000EFC69400EFCE9400F7D6A500F7DE
      BD00FFEFDE0000000000000000000000000000000000000000000000000000FF
      FF0000FFFF0000FFFF0000FFFF000084840000848400000000000000000000FF
      FF0000FFFF0000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      0000000000000000000000000000848C84005AA5630039944200396B42000000
      00000000000000000000000000000000000039DEFF0039DEFF0039DEFF0039DE
      FF0039DEFF0039DEFF0039DEFF00BDD6CE00F7D6A500FFE7B500FFDEB500FFDE
      B500F7DEBD00F7D6AD00F7D6B500000000000000000000848400008484000000
      000000000000000000000000000000000000000000000000000000FFFF0000FF
      FF0000FFFF0000848400000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C0000000000000000000000000000000000000000000000
      00000000000000000000000000005AB563005AB563003994420039944A004294
      4A000000000000000000000000000000000039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0084C6BD00F7CE9400F7D6A500FFEFC600FFF7DE00FFF7
      E700FFD6AD00FFF7D600FFE7B500F7D6A5000000000000000000008484000084
      84000084840000848400008484000084840000FFFF0000FFFF0000FFFF000084
      840000FFFF0000FFFF0000FFFF000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C0000000000000000000000000000000000000000000000
      000000000000848C8C005AA563005AB563005AB563003994420039944A00429C
      4A00428C4A0000000000000000000000000039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF00BDC6A500F7CE9400F7D6A500FFE7B500FFE7B500FFEF
      C600FFE7CE00FFF7DE00FFE7B500F7D6A5000000000000848400008484000084
      84000084840000848400008484000084840000FFFF0000FFFF000084840000FF
      FF0000FFFF000084840000FFFF000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C0000000000000000000000000000000000000000000000
      000073D6F7006BCED6005AB563005AB5630063B56B0039944200399442004294
      4A004A9C520052A55A0052A55A000000000039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF00E7CE9C00FFDEA500F7CE9C00F7D6A500FFDEB500F7DE
      C600F7CE9C00F7CE9C00F7D6A500EFCE9C0000848400000000000000000000FF
      FF0000FFFF0000FFFF00008484000084840000FFFF0000FFFF000084840000FF
      FF00000000000084840000FFFF000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C00000000000000000000000000000000004263520073D6
      EF0073D6F7006BCECE005AB563005AB56B007BC6840039944200399442004294
      4A004A9C52004AA55A0052A55A00426B4A0039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0052CEF70042ADE700CEBD9C00F7DEAD00FFE7BD00F7D6
      A500EFCE9400F7D6A500F7EFDE00000000000084840000848400008484000084
      84000084840000848400008484000084840000FFFF00008484000084840000FF
      FF0000FFFF0000FFFF0000FFFF000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000000000004A9452005AB5730073D6
      F70073D6F7006BCECE005AB563008CCE94008CCE940084C68C0052A55A004294
      4A004A9C52004AA55A0052A55A005273520039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0084FFFF0042B5F700219CE7007BBDBD00BDC6A500EFD6
      A500FFDEAD00EFD6AD0000000000000000000000000000000000008484000084
      840000000000000000000000000000000000000000000084840000FFFF000084
      84000084840000FFFF00000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C000000000000000000000000005AB5630063B57B0073D6
      F70073D6F7006BCEC6007BC6840094CE9C0094CE940084C68C007BC684007BC6
      84004A9C52004AA55A0052A55A005A735A0039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0042A5FF0031A5FF0042B5F70084FFFF0084FFFF0039DE
      FF00EFCE9C00000000000000000000000000000000000000000000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF000084840000FF
      FF0000FFFF0000000000000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000525252005AB5630063BD7B0073D6
      F70073D6F700ADEFFF00ADDEB5009CD6A50094CE9C0084C68C0084C68C007BBD
      84006BB573004AA5520052A55A005A635A0039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0039A5FF0084FFFF0063C6FF0084FFFF0084FFFF0084FFFF0039DE
      FF00000000000000000000000000000000000000000000000000000000000000
      000000FFFF00C6C6C600C6C6C600C6C6C600C6C6C60000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C0000000000000000004A524A005AB5630063BD840073D6
      F700B5EFFF00B5EFFF00B5EFFF00A5D6A5009CCEA5008CCE940084C68C007BC6
      840073BD7B0073BD7B005AAD63005A5A5A0039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0042A5FF004AADFF0052B5FF0084FFFF0084FFFF0039DE
      FF0000000000000000000000000000000000000000000000000000848400C6C6
      C6000000000000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF000000
      00000000000000000000000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000396342005AB563006BC69400ADEF
      FF00B5EFFF00B5EFFF00B5EFFF00ADEFF700A5D6AD0094CE9C008CCE940084C6
      8C0073BD7B006BBD730063B573006B6B6B0039DEFF0039DEFF0039DEFF0039DE
      FF0039DEFF0084FFFF0084FFFF004AADFF0084FFFF0084FFFF0084FFFF0039DE
      FF00000000000000000000000000000000000000000000000000000000000084
      840000848400FFFFFF00FFFFFF00FFFFFF000084840000848400008484000084
      84000084840000000000000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00000000009C9C9C009C9C
      9C009C9C9C009C9C9C000000000000000000528C52008CCE8C00DEEFDE00CEEF
      E700B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF0094CE9C008CCE94008CC6
      94007BBD840073BD7B00639C6B00000000000000000039DEFF0084FFFF0084FF
      FF0039DEFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0039DE
      FF00000000000000000000000000000000000000000000000000000000000000
      0000008484000084840000FFFF0000FFFF0000FFFF0000FFFF0000FFFF000084
      84000000000000000000000000000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C000000
      00009C9C9C00000000000000000000000000636B6300E7F7E700E7F7E700E7F7
      E700D6EFD600CEE7D600B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF008CC6
      B5000000000000000000000000000000000000000000000000000000000084FF
      FF0039DEFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0039DE
      FF00000000000000000000000000000000000000000000000000000000000000
      00000084840000FFFF0000FFFF0000FFFF0000FFFF0000FFFF00008484000084
      84000000000000000000000000000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C0000000000000000000000000000000000000000006B736B00DEEFE700E7F7
      E700D6EFDE00D6EFD600CEE7CE00B5EFFF00B5EFFF00BDEFFF00000000000000
      00000000000000000000000000000000000000000000000000000000000039DE
      FF0039DEFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0039DE
      FF00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000008C94
      8C00DEEFDE00D6EFDE00CEEFD600ADCEB500BDCED60000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000039DEFF0039DEFF0039DEFF0039DEFF0039DEFF0039DEFF0039DEFF0039DE
      FF00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000ADADA500DEEFDE00B5C6B500000000000000000000000000000000000000
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
      0000000000000000000000000000000000000000000000000000C6948400C694
      9400C6948400C6848400B5848400B57B7300B57B7300B57B7300B5737300B573
      7300A5736300A56B6300A563630000000000000000000000000000000000C694
      8400C6949400C6948400C6848400B5848400B57B7300B57B7300B57B7300B573
      7300B5737300A5736300A56B6300A5636300000000000000000000000000C694
      8400C6949400C6948400C6848400B5848400B57B7300B57B7300B57B7300B573
      7300B5737300A5736300A56B6300A56363000000000000000000000000000000
      000000000000000000000000000000000000000000009CA58C00000000000000
      000000000000000000000000000000000000000000000000000000CE00000063
      0000FFFFD600FFF7C600FFEFB500FFDEA500FFD6A500FFC69400F7B58400F7AD
      7300E7946300C6846300A56B630000000000000000000000000000000000C694
      9400F7DEC600FFFFD600FFF7C600FFEFB500FFDEA500FFD6A500FFC69400F7B5
      8400F7AD7300E7946300C6846300A56B6300000000000000000000000000C694
      9400F7DEC600FFFFD600FFF7C600FFEFB500FFDEA500FFD6A500FFC69400F7B5
      8400F7AD7300E7946300C6846300A56B63000000000000000000000000000000
      00000000000000000000000000000000000094735200944A2100000000000000
      000000000000000000000000000000000000738C940000CE0000009C0000009C
      000000630000FFFFF700FFFFE700FFFFD600FFF7C600FFEFB500FFDEA500FFD6
      9400F7B58400C6736300A56B630000000000000000000000000000000000C69C
      9400D6948400FFF7E700FFFFF700FFFFE700FFFFD600FFF7C600FFEFB500FFDE
      A500FFD69400F7B58400C6736300A56B6300000000000000000000000000C69C
      9400D6948400FFF7E700FFFFF700FFFFE700FFFFD600FFF7C600FFEFB500FFDE
      A500FFD69400F7B58400C6736300A56B63000000000000000000000000000000
      0000000000000000000000000000A56B4A00D67B5200D6734200B56331000000
      00000000000000000000000000000000000000CE0000009C0000009C0000009C
      0000009C000000630000FFFFF700FFFFE700FFFFE700FFF7D600FFEFB500F7D6
      A500C6846300F7BD9400A573730000000000C6948400C6949400C6948400D69C
      9400FFEFB500D6948400F7F7E700FFFFF700FFFFE700FFFFE700FFF7D600FFEF
      B500F7D6A500C6846300F7BD9400A5737300738C9400737B840063737300D69C
      9400FFEFB500D6948400F7F7E700FFFFF700FFFFE700FFFFE700FFF7D600FFEF
      B500F7D6A500C6846300F7BD9400A5737300000000002121B5001008A5001008
      8400100873007394AD00A5523100E7845200F7946300DE9C7300D68C6300AD6B
      420000000000000000000000000000000000009C0000009C0000009C0000009C
      0000009C0000009C000000630000C67B7300C67B7300C67B7300C67B7300C67B
      7300F7D6B500F7D6A500A57B730000000000C6949400F7DEC600FFFFD600D6A5
      9400FFFFE700F7DEB500C6A5A500F7F7E700FFF7E700FFF7E700F7EFD600F7D6
      B500C67B7300F7D6B500F7D6A500A57B7300738C9400C6F7FF00C6F7FF00D6A5
      9400FFFFE700F7DEB500C6A5A500F7F7E700FFF7E700FFF7E700F7EFD600F7D6
      B500C67B7300F7D6B500F7D6A500A57B73004239A5008473C6008473C6008473
      C60010087300738CC600D6A59400F7AD9400DEAD8C0000000000DEAD8400D68C
      6300A57B6300000000000000000000000000009C0000009C00000063000000CE
      0000009C0000009C0000009C000000630000FFFFE700FFFFE700FFFFF700F7F7
      E700D6948400FFEFB500D69C940000000000C69C9400D6948400FFF7E700D6AD
      A500F7EFC600D69C9400A5FFFF00C6A59400C69C9400C68C8400C68C8400B594
      940073DEFF00B59C9400F7D6B500B5848400848C9400C6F7FF0094EFFF00D6AD
      A500F7EFC600D69C9400A5FFFF00C6A59400C69C9400C68C8400C68C8400B594
      940073DEFF00B59C9400F7D6B500B58484004231A500736BC600846BD6007363
      C60010087300524AC60094A5BD00A59C9C00000000000000000000000000D6AD
      8400D67B52009C9473000000000000000000009C000000630000A56B6300C673
      630000CE0000009C0000009C0000009C000000630000FFFFD600FFFFE700FFFF
      F700FFF7E700D6948400C69C940000000000D69C9400FFEFB500D6948400D6AD
      A500D6B5A500C6FFFF00C6FFFF00B5FFFF00B5FFFF00A5F7FF0094EFFF0084E7
      FF0073DEFF0073DEFF00B5948400A57B73008494A500C6F7FF00A5EFFF00D6AD
      A500D6B5A500C6FFFF00C6FFFF00B5FFFF00B5FFFF00A5F7FF0094EFFF0084E7
      FF0073DEFF0073DEFF00B5948400A57B73004231A5007363C6007363C6001008
      94006352B500312184005242C600211884000000000000000000000000000000
      0000D6AD8400C67342009C9C84000000000000630000C6F7FF00A56B6300C684
      6300E794630000CE0000009C0000009C0000009C000000630000FFEFB500FFF7
      C600FFFFD600F7DEC600C694940000000000D6A59400FFFFE700F7DEB500D6AD
      A500A5EFFF00A5EFFF00A5EFFF00A5EFFF0094E7FF0084DEFF0084DEF70073D6
      F70073CEF70063CEF70063CEF700B57B84008494A500B5F7FF00B5F7FF00D6AD
      A500A5EFFF00A5EFFF00A5EFFF00A5EFFF0094E7FF0084DEFF0084DEF70073D6
      F70073CEF70063CEF70063CEF700B57B8400000000005242A5003129A500E7E7
      E700FFFFF7001008730010086300000000000000000000000000000000000000
      000000000000CEAD8C00C67342009C947B00849CA500C6F7FF00A5636300A56B
      6300A5736300B573730000CE0000009C0000009C0000009C000000630000C684
      8400C6948400C6949400C694840000000000D6ADA500F7EFC600D69C9400D6DE
      DE00C6A59C00E7FFFF00E7FFFF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7
      FF0084EFFF0084E7FF00B58C8400D6DEDE00849CA500C6F7FF00B5F7F700C6F7
      FF00C6A59C00E7FFFF00E7FFFF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7
      FF0084EFFF0084E7FF00B58C840000000000000000007373940063636300525A
      52006363630031398C0000000000000000000000000000000000000000000000
      00000000000000000000DEB59C00C673520094A5A500C6F7FF00C6F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0000CE0000009C0000009C0000009C00000063
      000052BDF700219CD6006373840000000000D6ADA500D6B5A500C6FFFF00C6FF
      FF00D6DEDE00C6A5A500F7FFFF00F7FFFF0084E7FF00F7FFFF00D6FFFF00B5FF
      FF0094EFFF00B57B8400D6DEE70000000000849CA500C6F7FF00B5F7FF00C6F7
      FF00C6F7FF00CEA5A500F7FFFF00F7FFFF00F7FFFF00F7FFFF00D6FFFF00B5FF
      FF0094EFFF00B57B84006373840000000000738C8C0000000000C6C6C600A5A5
      A500848C8400525A52007B7B7B00000000000000000000000000000000000000
      00000000000000000000000000000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00B5F7FF00A5EFFF0000CE0000009C0000009C00000063
      000073CEF70063BDF7006373840000000000D6ADA500A5EFFF00A5EFFF00A5EF
      FF00A5EFFF00D6DEDE00C6A5A500F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FF
      FF00B57B8400D6DEDE00000000000000000094A5A500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700C6F7FF00CEA5A500F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FF
      FF00B57B8400C6F7FF0063738400000000004239420031313100D6DED600C6C6
      C600A5A5A500848C8400636B6300000000000000000000000000000000000000
      00000000000000000000000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA50000CE0000009C00000063
      0000849CA5008494A5000000000000000000D6DEDE00C6A59C00E7FFFF00E7FF
      FF00F7FFFF00F7FFFF00D6DEDE00C6A59C00C6A5A500C6A5A500C69C9400C69C
      9400D6D6D60000000000000000000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00C6F7FF00C6A59C00C6A5A500C6A5A500C69C9400C69C
      9400C6F7FF0063BDF700637384000000000052525200524A5200B5BDB500D6DE
      D600C6C6C600A5A5A500737B7300000000000000000000000000000000000000
      00000000000000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF00B5F7F70094E7F70094A5B50000000000000000000000000000CE00000063
      00000000000000000000000000000000000000000000D6DEDE00C6A5A500F7FF
      FF00F7FFFF0000000000F7FFFF00D6FFFF00B5FFFF0094EFFF00B57B8400D6DE
      E7000000000000000000000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA500849CA500849CA500849C
      A500849CA5008494A5000000000000000000737B730063636300636363007373
      7300635A6300C6C6C600848C8400000000000000000000000000000000000000
      0000000000000000000000000000000000000000000094ADB50094ADB50094AD
      B50094ADB50094ADB50000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000D6DEDE00C6A5
      A500F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FFFF00B57B8400D6DEDE000000
      00000000000000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF00C6F7FF00C6F7FF0094A5B500000000000000000000000000000000000000
      0000000000000000000000000000000000008C9C9C007373730084848400A5A5
      A50094949400525A5200848C8C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000D6DE
      DE00C6A59C00C6A5A500C6A5A500C69C9400C69C9400D6D6D600000000000000
      0000000000000000000000000000000000000000000094ADB50094ADB50094AD
      B50094ADB50094ADB50000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000949C9C0094949400948C
      940084848400949C9C0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000008484840084848400848484000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000084848400B5B5B5009C9C9C00B5B5B5008484840084848400000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000944A
      210000000000000000000000000000000000000000000000000000000000C6AD
      9400735A420073524200634A3100634A3100634A3100634A3100634A3100634A
      3100634A3100634A3100634A3100634A31000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008484
      8400B5B5B5009C9C9C00FFFFFF00FFFFFF00B5B5B500B5B5B500848484008484
      8400000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000A552
      2100A5523100000000000000000000000000000000000000000000000000C6AD
      9400FFFFF700F7E7E700F7DEC600E7D6C600E7CEB500E7C6B500E7BDA500E7B5
      A500D6AD9400D6A59400D6A58400634A31000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000008484
      84009C9C9C00FFFFFF009C9C9C009C9C9C00FFFFFF00FFFFFF00B5B5B500B5B5
      B500848484008484840000000000000000000000000000000000000000000000
      0000000000000000000000000000D6846300944A2100A54A2100A5522100B55A
      3100C66B4200A55231000000000000000000000000000000000000000000C6AD
      A500FFFFFF00FFFFF700FFFFF700F7F7E700F7EFE700F7E7D600F7DED600F7DE
      C600F7D6C600F7D6C600D6AD9400634A3100000000000000000000000000C694
      8400C6949400C6948400C6848400B5848400B57B7300B57B7300B57B7300B573
      7300B5737300A5736300A56B6300A5636300000000000000000084848400B5B5
      B5009C9C9C00FFFFFF0084848400B5B5B5009C9C9C00FFFFFF00FFFFFF00FFFF
      FF00B5B5B500B5B5B5008484840000000000C6948400C6948400C6948400C68C
      8400C68C8400B58C8400C6A5A500D68C6300FFB59400F7946300F78C5200E784
      5200D67B5200C6734200A55A310000000000738C9400737B840063737300C6AD
      A50000000000C6B5A500B5A59400B59C9400B59C8400A5948400F7E7D600F7DE
      D600F7DEC600F7D6C600E7B5A500634A310000000000000000000000000000CE
      000000630000FFFFD600FFF7C600FFEFB500FFDEA500FFD6A500FFC69400F7B5
      8400F7AD7300E7946300C6846300A56B63000000000000000000848484009C9C
      9C00FFFFFF00B5B5B50084848400B5B5B5009C9C9C00FFFFFF00848484008484
      8400FFFFFF00FFFFFF008484840000000000C6949400F7DEC600FFFFD600FFF7
      C600FFEFB500FFDEA500FFE7B500E7947300FFBD9400FFAD8400FF946300F794
      6300E78C5200E77B5200C6734200B55A3100738C9400A5E7F70073D6F700C6B5
      A50000000000D6C6B500C6B5A500C6ADA500C6AD9400B5A59400B5A59400F7E7
      D600F7DED600F7DEC600E7B5A500634A3100000000000000000000CE0000009C
      0000009C000000630000FFFFF700FFFFE700FFFFD600FFF7C600FFEFB500FFDE
      A500FFD69400F7B58400C6736300A56B63000000000084848400B5B5B5009C9C
      9C00FFFFFF00B5B5B500E7E7E700B5B5B500FFFFFF00FFFFFF00FFFFFF00B5B5
      B50084848400FFFFFF008484840000000000C69C9400D6948400FFF7E700FFFF
      F700FFFFE700FFFFD600FFF7D600E79C7300FFC6A500FFC6A500FFB58400FFAD
      8400FFA57300E7845200B55A310000000000848C9400B5EFF70094EFFF00C6B5
      A5000000000000000000FFFFFF00FFFFF700FFFFF700FFF7F700F7EFE700F7EF
      E700F7E7D600F7DED600E7BDA500634A31000000000000CE0000009C0000009C
      0000009C0000009C000000630000FFFFF700FFFFE700FFFFE700FFF7D600FFEF
      B500F7D6A500C6846300F7BD9400A573730000000000848484009C9C9C00FFFF
      FF00B5B5B500E7E7E700E7E7E700B5B5B500FFFFFF008484840084848400FFFF
      FF00FFFFFF00FFFFFF008484840000000000D69C9400FFEFB500D6948400F7F7
      E700FFFFF700FFFFE700FFFFE700F7A57300E79C7300E7947300D68C6300E794
      7300F79C7300B55A310000000000000000008494A500B5EFF700A5EFFF00D6B5
      A500000000000000000000000000FFFFFF00FFFFFF00FFFFF700FFF7F700FFEF
      E700214AD6002142A500E7C6B500634A310000CE0000009C0000009C0000009C
      0000009C0000009C0000009C000000630000C67B7300C67B7300C67B7300C67B
      7300C67B7300F7D6B500F7D6A500A57B730084848400B5B5B5009C9C9C00FFFF
      FF00FFFFFF00FFFFFF00B5B5B500FFFFFF00FFFFFF00FFFFFF00B5B5B5008484
      8400FFFFFF00848484000000000000000000D6A59400FFFFE700F7DEB500C6A5
      A500F7F7E700FFF7E700FFF7E700F7F7E700F7EFE700F7E7E700FFF7E700E79C
      7300C67B52000000000000000000000000008494A500B5F7FF00B5F7FF00D6BD
      A50000000000000000000000000000000000FFFFFF00FFFFFF00FFFFF700FFF7
      F7004263F700214AD600F7D6D6007352420000CE0000009C0000009C00000063
      000000CE0000009C0000009C0000009C000000630000FFFFE700FFFFE700FFFF
      F700F7F7E700D6948400FFEFB500D69C9400848484009C9C9C00FFFFFF00FFFF
      FF009C3100009C310000FFFFFF00FFFFFF008484840084848400FFFFFF00FFFF
      FF00FFFFFF00848484000000000000000000D6ADA500F7EFC600D69C9400A5FF
      FF00C6A59400C6949400C68C8400B5949400B59C9400C6ADB500E7C6C600F7A5
      7300D6B5A500000000000000000000000000849CA500C6F7FF00B5F7F700D6BD
      A500000000000000000000000000000000000000000000000000FFFFFF00FFFF
      F700FFFFF700FFF7F700F7EFE700735A420000CE0000009C000000630000A56B
      6300C673630000CE0000009C0000009C0000009C000000630000FFFFD600FFFF
      E700FFFFF700FFF7E700D6948400C69C9400000000009C9C9C009C9C9C00FFFF
      FF00FFFFFF00B5B5B5009C3100009C310000FFFFFF00FFFFFF0084848400FFFF
      FF0084848400000000000000000000000000D6ADA500D6B5A500C6FFFF00C6FF
      FF00B5FFFF00B5FFFF00A5F7FF0094EFFF0084E7FF0084DEFF00A5E7FF00D6C6
      B500C6ADB500000000000000000000000000849CA500C6F7FF00B5F7FF00D6BD
      A500D6BDA500D6BDA500C6B5A500C6B5A500C6B5A500C6ADA500C6ADA500C6AD
      A500C6AD9400C6AD9400C6AD9400C6AD940000CE00000063000000000000A56B
      6300C6846300E794630000CE0000009C0000009C0000009C000000630000FFEF
      B500FFF7C600FFFFD600F7DEC600C69494000000000000000000000000009C9C
      9C009C9C9C00FFFFFF00FFFFFF00B5B5B5009C3100009C310000FFFFFF00FFFF
      FF0084848400000000000000000000000000D6ADA500A5EFFF00A5EFFF00A5EF
      FF00A5EFFF0094E7FF0084DEFF0084DEF70073D6F70073CEF70063CEF70073CE
      F700B57B840000000000000000000000000094A5A500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD6006373840000000000000000000000000000000000A563
      6300A56B6300A5736300B573730000CE0000009C0000009C0000009C00000063
      0000C6848400C6948400C6949400C69484000000000000000000000000000000
      0000000000009C9C9C009C9C9C00FFFFFF00FFFFFF00B5B5B500FFFFFF008484
      84000000000000000000000000000000000000000000BDA59C00E7FFFF00E7FF
      FF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7FF0084EFFF0084E7FF00B58C
      84000000000000000000000000000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00B5F7FF00A5EFFF0094EFFF0094E7FF0084DEFF0073D6
      FF0073CEF70063BDF70063738400000000000000000000000000000000000000
      00000000000000000000000000000000000000CE0000009C0000009C0000009C
      0000006300000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C009C9C9C00FFFFFF00FFFFFF008484
      8400000000000000000000000000000000000000000000000000BD9C9C00F7FF
      FF00F7FFFF0000000000F7FFFF00D6FFFF00B5FFFF0094EFFF00B57B84000000
      00000000000000000000000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA500849CA500849CA500849C
      A500849CA5008494A500EFEFF700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      0000006300000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C009C9C9C000000
      000000000000000000000000000000000000000000000000000000000000C6A5
      9C00F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FFFF00B57B8400000000000000
      00000000000000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF00B5F7F70094E7F70094A5B500BDD6D6000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CE0000009C
      0000006300000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000C6A59C00C6A5A500C6A5A500C69C9400C69C940000000000000000000000
      000000000000000000000000000000000000E7F7F70094ADB50094ADB50094AD
      B50094ADB50094ADB500E7EFEF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CE
      0000006300000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000736352004231210042312100423121005239
      310063524A00ADA5940000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000FF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000B59C9400E7CEB500FFF7D600FFFFE700FFF7D600FFEF
      C600F7D6B500735A4A0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000003131CE000000
      FF00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000084AD
      C6005273840042739400316B8400316B840031638400315A7300315A7300315A
      7300315A73003152630031526300314A63000000000000000000000000000000
      00000000000000000000A58C840000000000FFFFFF00FFFFF700FFF7E700FFF7
      D600FFE7C600846B5200BDADA500000000000000000000000000000000000000
      00000000000094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE000000000000000000000000003131CE00319C
      FF0000009C0094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE000000000000000000000000000000000084AD
      C600D6FFFF00A5EFFF0084E7F70084DEF70073D6F70073D6F70073CEF70073CE
      F70073CEF70063CEF70063C6F700315263000000000000000000000000000000
      000000000000D6CEC600B5ADA500F7FFE70073BD630000630000004A0000004A
      0000F7DEB500B5947300947B7300000000000000000000000000000000000000
      00000000000094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE000000000000000000000000003131CE00319C
      FF0000009C0094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE000000000000000000000000000000000084AD
      C600C6EFF700B5FFFF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7
      FF0094F7FF0084E7FF0063BDE70031526300738C9400737B8400637373005263
      630031394200BDADA500E7DED600D6F7D600219C2100FFFFF700FFFFF700FFFF
      F700C6CE9400E7BDA50063524A00000000000000000000000000000000000000
      00000000000094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00000000000000000000000000000000003131
      CE000000CE0094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE000000
      FF00BDC6CE00BDC6CE00BDC6CE0000000000738C9400737B84006373730084B5
      C60084BDD60094E7F70094FFFF0094F7FF0084EFFF0073E7FF0084EFFF0084EF
      FF0094F7FF0073DEF700428CB500425A6300738C9400A5E7F70073D6F70052BD
      E70031A5C600A58C8400F7F7F700F7FFF70084DE840000840000FFFFF7003184
      3100FFE7C600F7D6B500634A3100000000000000000000000000000000000000
      0000000000009494940094949400949494009494940094949400949494009494
      9400949494009494940094949400000000000000000000000000000000000000
      00000000FF0000009C00949494009494940094949400949494000000FF000000
      9C0094949400949494009494940000000000738C9400A5E7F70073D6F70094B5
      C600B5EFF70063BDD60084EFFF0073E7F70052B5E70031A5D6003194C60073D6
      F70073DEF700429CC60063C6E700425A7300848C9400B5EFF70094EFFF0084E7
      FF00E7DED600B59C9400FFF7E700FFEFE700F7DEC60021C62100FFFFF7000063
      1000FFF7D600FFE7B50073635200000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000CE000000FF0000009C0000000000000000000000FF0000009C000000
      000000000000000000000000000000000000848C9400B5EFF70094EFFF0094BD
      D600D6FFFF00A5EFF70073CEF70052B5E70084DEF70084EFFF0084EFF70042A5
      C60052C6E70084E7F70073CEF700426373008494A500B5EFF700A5EFFF0094EF
      FF00BDADA500C6B5B500FFFFF700FFF7F700FFEFE700E7FFD60010B5100094DE
      9400FFF7D600FFEFC600A58C730094847B000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C000000FF0000009C00000000000000
      0000000000000000000000000000000000008494A500B5EFF700A5EFFF0094C6
      D600D6FFFF0094EFF70063BDE70084E7F700A5FFFF0094F7FF0094F7FF0094EF
      FF0052ADD60084E7F70073D6F700426373008494A500B5F7FF00B5F7FF00A5EF
      FF00A58C8400E7D6D60000000000FFFFF700FFF7F700FFEFE700FFFFF700FFFF
      F700FFF7E700FFF7D600D6B59400736352000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C000000FF0000009C00000000000000
      0000000000000000000000000000000000008494A500B5F7FF00B5F7FF0094C6
      D600C6FFFF0063C6E70094E7F700A5FFFF00A5FFFF00A5FFFF00A5FFFF0094F7
      FF0094EFFF0052A5C60063C6E700526B7300849CA500C6F7FF00B5F7F700A5F7
      FF00A58C8400F7F7F700FFFFFF0000000000FFFFF700FFF7E700FFFFF700FFFF
      F700FFF7E700FFF7E700F7D6B5005A4A39000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C0000000000000000000000
      000000000000000000000000000000000000849CA500C6F7FF00B5F7F70094CE
      D600A5E7F700E7FFFF00E7FFFF00E7FFFF00E7FFFF00E7FFFF00E7FFFF00D6FF
      FF00D6FFFF00B5FFFF00429CC60052738400849CA500C6F7FF00B5F7FF00B5F7
      FF00A58C8400A58C8400A5948400948C8400A5948400A5948400A5948400A594
      8400A58C8400A58C840073635200524231000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000094949400BDC6CE00BDC6CE00BDC6
      CE00BDC6CE000000CE000000FF0000009C000000CE0000009C00000000000000
      000000000000000000000000000000000000849CA500C6F7FF00B5F7FF0094CE
      D60094CED60094CED60094CED60094C6D60094C6D60094BDD60094BDC60084B5
      C60084B5C60084ADC60084ADC60084ADC60094A5A500C6F7FF00B5F7FF00B5F7
      FF00A5F7FF008C7B730084736300B5A59400E7DED600F7F7F700FFFFF700FFFF
      F700F7F7F700D6CEC600E7D6D6007B6B630094949400BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00000000000000
      00000000000000000000000000000000000094949400BDC6CE00BDC6CE00BDC6
      CE000000CE000000FF0000009C00BDC6CE00BDC6CE000000CE0000009C000000
      00000000000000000000000000000000000094A5A500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600637384000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00B5F7FF009C948400A5947B00C6C6C600F7F7F700FFFFFF00FFFFF700FFFF
      F700E7E7E700D6C6C60094846B000000000094949400BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00000000000000
      0000000000000000000000000000000000009494940094949400949494000000
      CE000000FF0000009C00949494009494940094949400949494000000CE000000
      9C000000000000000000000000000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00B5F7FF00A5EFFF0094EFFF0094E7FF0084DEFF0073D6
      FF0073CEF70063BDF700637384000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5A500A5A5940094847B00947B730094847300947B7300947B
      7300735A420073635200000000000000000094949400BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00000000000000
      0000000000000000000000000000000000009494940094949400949494000000
      CE000000FF0000009C00949494009494940094949400949494000000CE000000
      9C000000000000000000000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA500849CA500849CA500849C
      A500849CA5008494A500EFEFF7000000000094ADB500B5EFF700B5F7FF00B5F7
      FF0094E7F70094A5B500BDD6D600000000000000000000000000000000000000
      0000000000000000000000000000000000009494940094949400949494009494
      9400949494009494940094949400949494009494940094949400000000000000
      00000000000000000000000000000000000000000000000000000000CE00319C
      FF0000009C000000000000000000000000000000000000000000000000000000
      CE000000000000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF00B5F7F70094E7F70094A5B500BDD6D6000000000000000000000000000000
      0000000000000000000000000000000000000000000094ADB50094ADB50094AD
      B50094ADB500E7EFEF0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009494940094949400949494009494
      9400949494009494940094949400949494009494940094949400000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      CE00000000000000000000000000000000000000000000000000000000000000
      00000000CE00000000000000000000000000E7F7F70094ADB50094ADB50094AD
      B50094ADB50094ADB500E7EFEF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006321
      6300000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      9C00000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000632163006321
      6300000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000009C0000009C0000009C0000009C0000009C
      0000009C0000009C0000009C0000000000000000000000000000000000000000
      00000000000000000000000000000000000084848400C6C6C600C6C6C600C6C6
      C600C6C6C600C6C6C600000000000000000000000000000000003131CE000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000073216300A54294006321
      6300632163006321630063216300632163000000000000000000000000000000
      00000000000000000000009C000000FF000000CE000000CE000000CE000000CE
      000000CE0000009C000000CE0000009C00000000000000000000000000000000
      00000000000000000000000000000000000084848400C6C6C600C6C6C600C6C6
      C600C6C6C600C6C6C600000000000000000000000000000000003131CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      0000000000000000FF000000000000000000C6948400C6948400C6948400C68C
      8400C68C8400B58C8400C6949400C69CA500944A8400A552A500C65AB500B552
      A500B54AA5009442940084398400632163000000000000000000000000000000
      0000000000000063CE00009C000000CE000000FF000000CE000000CE000000CE
      000000CE000000CE0000009C0000009C00000000000000000000848484008484
      8400848484008484840084848400000000008484840084848400848484008484
      8400848484008484840000000000000000000000000000000000000000003131
      CE000063FF000000CE0000000000000000000000000000000000000000000000
      00000000FF00000000000000000000000000C6949400F7DEC600FFF7D600FFEF
      C600FFE7B500FFE7B500FFE7C600B56BA500D6A5D600D684C600C66BC600C65A
      B500B552B500B552A500A5429400732163000000000000000000000000000000
      00000063CE0000CEFF00009C000000FF000000CE000000FF000000CE000000CE
      000000CE000000CE000000CE0000009C00000000000084848400000000000000
      000000000000C6C6C600000000000000000084848400C6C6C600C6C6C600C6C6
      C600C6C6C600C6C6C60000000000000000000000000000000000000000000000
      00000000CE000000FF0000009C00000000000000000000000000000000000000
      FF0000009C00000000000000000000000000C69C9400D6948400FFF7E700FFFF
      F700FFFFE700FFFFE700FFFFE700F7EFE700C67BB500D6ADD600D69CD600D68C
      C600D684C600C684C600C67BB50073297300000000000000000000000000009C
      9C000063CE00009CFF00009C000000FF000000FF000000CE000000FF000000CE
      000000CE000000CE000000CE0000009C00000000000084848400C6C6C600C6C6
      C600C6C6C600C6C6C600C6C6C600C6C6C60084848400C6C6C600C6C6C600C6C6
      C600C6C6C600C6C6C60000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000FF000000
      9C0000000000000000000000000000000000D69C9400FFEFB500D69C9400F7F7
      E700FFFFF700FFFFE700FFFFE700FFFFE700FFEFE700C67BB500D6A5D600A54A
      9400B56BB500B563B500B55AA500B54AA5000000000000000000009C9C0000FF
      FF000063CE0000CEFF00009C00009CFF9C0000FF000000FF000000CE000000FF
      000000CE000000CE000000CE0000009C00000000000084848400000000000000
      000000000000C6C6C60000000000000000008484840084848400848484000000
      FF00848484008484840000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000FF0000009C000000
      000000000000000000000000000000000000D6A59400FFFFE700F7DEB500D6A5
      A500F7F7E700FFFFE700FFFFF700FFF7F700F7EFE700E7C6C600C673B500A542
      9400D6BDB500000000000000000000000000000000009C006300009C9C0000CE
      CE000063CE0000CEFF00009C00009CFF9C009CFF9C0000FF000000FF000000CE
      000000FF000000CE000000CE0000009C00000000000084848400C6C6C600C6C6
      C600C6C6C600C6C6C600C6C6C600C6C6C60084848400C6C6C6000000FF000000
      FF000000FF00C6C6C60000000000000000000000000000000000000000000000
      00000000000000000000000000000000CE000000FF0000009C00000000000000
      000000000000000000000000000000000000D6ADA500F7EFC600D69C9400A5F7
      F700D6A59400D6ADA500D6B5A500D6BDB500D6BDB500C6D6E700D6C6C600B56B
      B500D6BDB5000000000000000000000000009C006300CE639C00009C9C0000FF
      FF000063CE009CCEFF0000CEFF00009C0000009C0000009C0000009C0000009C
      0000009C0000009C0000009C0000000000000000000084848400000000000000
      000000000000C6C6C6000000000000000000848484000000FF000000FF000000
      FF000000FF000000FF0000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000CE0000009C000000
      000000000000000000000000000000000000D6ADA500D6B5A500C6FFFF00C6FF
      FF00B5FFFF00B5FFFF00B5F7FF00B5EFFF00A5EFFF00A5EFFF00B5EFFF00D6C6
      C600C6ADA5000000000000000000000000009C0063009C316300009C9C0000FF
      FF000063CE009CCEFF009CCEFF0000CEFF0000CEFF00009CFF0000CEFF00009C
      FF00009CFF00009CFF000063CE00000000000000000084848400C6C6C600C6C6
      C600C6C6C600C6C6C600C6C6C600C6C6C6008484840084848400848484000000
      FF00848484008484840000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000CE000000
      9C0000000000000000000000000000000000D6ADA500A5EFFF00A5EFFF00A5EF
      FF00A5EFFF0094E7FF0094E7FF0084DEF70084D6F70084D6F70084D6F70094D6
      F700BD9494000000000000000000000000009C006300CE639C00009C9C0000FF
      FF0000FFFF000063CE000063CE000063CE000063CE000063CE000063CE000063
      CE000063CE000063CE0000000000000000000000000084848400000000000000
      000000000000C6C6C600000000000000000000000000C6C6C600000000000000
      FF00000000000000000000000000000000000000000000000000000000000000
      CE000000FF000000FF0000009C00000000000000000000000000000000000000
      CE0000009C0000000000000000000000000000000000BDA59C00E7FFFF00E7FF
      FF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7FF0084EFFF0084E7FF00B58C
      9400000000000000000000000000000000009C006300CE639C00009C9C0000FF
      FF0000FFFF0000FFFF0000FFFF0000CECE0000FFFF0000CECE0000CECE0000CE
      CE00009C9C000000000000000000000000000000000084848400848484008484
      84008484840084848400848484008484840084848400848484000000FF008484
      84008484840000000000000000000000000000000000000000000000CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      00000000CE0000009C0000000000000000000000000000000000BD9C9C00F7FF
      FF00F7FFFF0000000000F7FFFF00D6FFFF00B5FFFF0094EFFF00B57B84000000
      0000000000000000000000000000000000009C006300FF9CCE00CE639C00009C
      9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C
      9C00000000000000000000000000000000000000000084848400C6C6C600C6C6
      C600C6C6C600848484000000FF000000FF000000FF000000FF00C6C6C600C6C6
      C600C6C6C600000000000000000000000000000000000000000063639C000000
      CE0063639C000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE0000000000000000000000000000000000C6A5
      9C00F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FFFF00B57B8400000000000000
      0000000000000000000000000000000000009C006300FF9CCE00FF9CCE00CE63
      9C00CE639C009C316300CE639C009C3163009C3163009C3163009C0063000000
      0000000000000000000000000000000000000000000084848400C6C6C600C6C6
      C600C6C6C60084848400C6C6C600C6C6C600C6C6C60084848400C6C6C600C6C6
      C600C6C6C6000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000C6A59C00C6A5A500C6A5A500C69C9400C69C940000000000000000000000
      000000000000000000000000000000000000000000009C0063009C0063009C00
      63009C0063009C0063009C0063009C0063009C0063009C006300000000000000
      0000000000000000000000000000000000000000000084848400848484008484
      8400848484008484840084848400848484008484840084848400848484008484
      8400848484000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000F7F7F700000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000009C0000009C0000009C0000009C0000009C0000009C
      0000009C0000009C0000009C0000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C630000000000000000000000000000000000000000000000
      00000000000000000000F7F7F700A59C8C005A42290052392100EFE7E7000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006321
      6300000000000000000000000000000000000000000000000000000000000000
      000000000000009C000000CE000000CE000000CE000000CE000000CE0000009C
      0000009C0000009C0000009C0000009C00000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C630000000000000000000000000000000000000000000000
      000000000000BDB5AD005239210063523900C6947300E7AD9400845A42000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000632163006321
      6300000000000000000000000000000000000000000000000000000000000000
      00000063CE00009C000000FF000000CE000000CE000000CE000000CE000000CE
      000000CE0000009C0000009C0000009C00000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C63000000000000000000000000000000000000000000B5B5
      AD0052392100735A4A00D6AD9400FFD6B500FFD6B500FFD6B500735A5200DEDE
      D600000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000073216300A54294006321
      6300632163006321630063216300632163000000000000000000000000000000
      0000009CFF00009C000000CE000000FF000000CE000000CE000000CE000000CE
      0000009C000000CE0000009C0000009C00000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000B5ADA500523921005239
      2100E7D6C600FFEFD600FFE7D600FFDEC600FFDEC600FFD6B500F7C6B500B594
      840000000000000000000000000000000000C6948400C6948400C6948400C68C
      8400C68C8400B58C8400C6949400C69CA500944A8400A552A500C65AB500B552
      A500B54AA500944294008439840063216300000000000000000000000000009C
      9C0000CEFF00009C000000FF000000CE000000FF000000CE000000CE000000CE
      000000CE0000009C000000CE0000009C00000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C630000000000000000000000000052392100F7F7F700FFFF
      FF00FFFFF700FFF7E700FFEFE700FFEFD600FFEFD600FFE7D600FFE7D600D6B5
      A500E7DED600000000000000000000000000C6949400F7DEC600FFF7D600FFEF
      C600FFE7B500FFE7B500FFE7C600B56BA500D6A5D600D684C600C66BC600C65A
      B500B552B500B552A500A5429400732163000000000000000000009C9C0000CE
      CE00009CFF00009C000000FF000000FF000000CE000000FF000000CE000000CE
      000000CE000000CE0000009C0000009C00000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000000000000000000000008C737300000000000000
      0000FFFFFF00FFFFF700FFF7E700738C9400738C9400738C9400738C9400738C
      9400738C9400738C94003142520000000000C69C9400D6948400FFF7E700FFFF
      F700FFFFE700FFFFE700FFFFE700F7EFE700C67BB500D6ADD600D69CD600D68C
      C600D684C600C684C600C67BB50073297300000000009C006300009C9C0000FF
      FF0000CEFF00009C00009CFF9C0000FF000000FF000000CE000000FF000000CE
      000000CE000000CE000000CE0000009C00000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000A5949400E7E7E700F7F7
      F700F7F7F700FFFFF700FFFFF7008494A500FFF7F700D6C6B5000094D600526B
      7300D6B5A500D6B5A500425A630000000000D69C9400FFEFB500D69C9400F7F7
      E700FFFFF700FFFFE700FFFFE700FFFFE700FFEFE700C67BB500D6A5D600A54A
      9400B56BB500B563B500B55AA500B54AA5009C0063009C316300009C9C0000CE
      CE0000CEFF00009C00009CFF9C009CFF9C0000FF000000FF000000CE000000FF
      000000CE000000CE000000CE0000009C00000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000BDB5B500524A42002129
      210042394200B5BDB500FFFFF70094A5A500FFFFF700F7F7F70010B5F700424A
      5200F7DEC600D6B5A5005273840000000000D6A59400FFFFE700F7DEB500D6A5
      A500F7F7E700FFFFE700FFFFF700FFF7F700F7EFE700E7C6C600C673B500A542
      9400D6BDB5000000000000000000000000009C0063009C316300009C9C0000CE
      CE0000CEFF00009C00009CFF9C009CFF9C0000FF000000FF000000CE000000FF
      000000CE000000CE000000CE0000009C00000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C63000000000000000000BDBDBD0063636300E7D6C600F7CE
      B500D6B5A50084848400D6CED60094ADB50000000000F7FFF7001094C600216B
      9400FFE7D600D6B5A5006384940000000000D6ADA500F7EFC600D69C9400A5F7
      F700D6A59400D6ADA500D6B5A500D6BDB500D6BDB500C6D6E700D6C6C600B56B
      B500D6BDB5000000000000000000000000009C006300CE639C00009C9C0000FF
      FF009CCEFF0000CEFF00009C0000009C0000009C0000009C0000009C0000009C
      0000009C0000009C0000009C0000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000084848400D6CEC600FFF7F700FFEF
      D600FFD6C600D6C6B5000094D6000094D60084C6D60000000000FFFFF700FFF7
      F700FFEFE700C6C6C6004252630021739400D6ADA500D6B5A500C6FFFF00C6FF
      FF00B5FFFF00B5FFFF00B5F7FF00B5EFFF00A5EFFF00A5EFFF00B5EFFF00D6C6
      C600C6ADA5000000000000000000000000009C0063009C316300009C9C0000FF
      FF009CCEFF009CCEFF0000CEFF0000CEFF00009CFF0000CEFF00009CFF00009C
      FF00009CFF000063CE0000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C
      6300CE9C6300CE9C63000000000000000000A5A5A500FFFFF700FFFFF7002129
      210021212100F7DEC60010B5F700A5EFF7000094D60084C6D60000000000FFFF
      F700C6CED60042526300A5EFF70000ADE700D6ADA500A5EFFF00A5EFFF00A5EF
      FF00A5EFFF0094E7FF0094E7FF0084DEF70084D6F70084D6F70084D6F70094D6
      F700BD9494000000000000000000000000009C006300CE639C00009C9C0000FF
      FF000063CE000063CE000063CE000063CE000063CE000063CE000063CE000063
      CE000063CE000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7
      E700CE9C6300000000000000000000000000A59C9400F7F7F700000000004239
      4200FFFFF700D6C6C6006384940031C6F700A5EFF7000094D60084C6D600C6DE
      E70042526300A5EFF70000ADE700ADDEF70000000000BDA59C00E7FFFF00E7FF
      FF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7FF0084EFFF0084E7FF00B58C
      9400000000000000000000000000000000009C006300CE639C00009C9C0000FF
      FF0000FFFF0000FFFF0000CECE0000FFFF0000CECE0000CECE0000CECE0000CE
      CE00000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C
      630000000000000000000000000000000000F7F7F70094949400F7F7F700FFFF
      F700E7D6D600424A4200D6CEC600C6DEE70031C6F700A5EFF7000094D6004252
      6300A5EFF7000084D60010299400000000000000000000000000BD9C9C00F7FF
      FF00F7FFFF0000000000F7FFFF00D6FFFF00B5FFFF0094EFFF00B57B84000000
      0000000000000000000000000000000000009C006300FF9CCE00CE639C00009C
      9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C
      9C00000000000000000000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63000000
      00000000000000000000000000000000000000000000EFEFEF00949C9400948C
      940084848400CEC6C600F7EFEF0000000000D6F7FF0031C6F700A5F7FF00A5EF
      F70000ADE7001039C6001039B50000000000000000000000000000000000C6A5
      9C00F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FFFF00B57B8400000000000000
      0000000000000000000000000000000000009C006300FF9CCE00FF9CCE00CE63
      9C009C316300CE639C009C3163009C3163009C3163009C3163009C0063000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000D6F7FF0021C6F70000AD
      E700BDE7F7001052FF00104AF700000000000000000000000000000000000000
      0000C6A59C00C6A5A500C6A5A500C69C9400C69C940000000000000000000000
      000000000000000000000000000000000000000000009C0063009C0063009C00
      63009C0063009C0063009C0063009C0063009C0063009C006300000000000000
      00000000000000000000000000000000000000000000FF9C0000CE630000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE6300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300FF9C0000CE630000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE63
      0000000000000000000000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C630000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00CE9C6300FF9C0000CE630000E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700CE63
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000737B8400738C9400738C
      9400738C9400738C9400738C9400738C9400738C9400738C9400738C9400738C
      9400738C9400738C94000000000000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00CE9C6300FF9C0000CE630000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE63
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF009C310000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000000000000000738C9400A5E7F70073D6F700B5F7
      FF00B5EFF700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700429CC600738C940000000000000000000000000000000000CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700E7E7E700E7E7E700FFFFFF00CE9C6300FF9C0000CE630000E7E7E700E7E7
      E700E7E7E700E7E7E700CECECE00CECECE00CECECE00CECECE00CECECE00CE63
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF009C3100009C3100009C310000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000000000000000848C9400B5EFF70094EFFF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C940000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00CE9C6300FF9C0000CE630000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700CE63
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF009C3100009C3100009C3100009C3100009C310000FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C630000000000000000008494A500B5EFF700A5EFFF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C940000000000CE9C6300CE9C6300CE9C6300CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700E7E7E700E7E7E700FFFFFF00CE9C6300FF9C0000CE630000E7E7E700E7E7
      E700E7E7E700CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CE63
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF009C3100009C310000FFFFFF009C3100009C3100009C310000FFFFFF00FFFF
      FF00FFFFFF00CE9C630000000000000000008494A500B5F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C940000000000CE9C6300FFFFFF00FFFFFF00CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00CE9C6300FF9C0000CE630000FFFFFF00FFFF
      FF00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700CE63
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF009C310000FFFFFF00FFFFFF00FFFFFF009C3100009C3100009C310000FFFF
      FF00FFFFFF00CE9C63000000000000000000849CA500C6F7FF00B5F7F700B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C940000000000CE9C6300FFFFFF00FFFFFF00CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00FFFF
      FF00CE9C6300CE9C6300CE9C6300CE9C6300FF9C0000CE630000E7E7E700E7E7
      E700CECECE00CECECE00CE630000CE630000CE630000CE630000CE630000CE63
      0000CE630000CE630000CE630000CE6300000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C3100009C310000FFFF
      FF00FFFFFF00CE9C63000000000000000000849CA500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C940000000000CE9C6300FFFFFF00E7E7E700CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300E7E7E700CE9C630000000000FF9C0000CE630000FFFFFF00FFFF
      FF00E7E7E700CE630000FF9C0000CE630000CE630000CE630000CE630000CE63
      0000CE630000CE630000CE630000CE6300000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000FFFF
      FF00FFFFFF00CE9C6300000000000000000094A5A500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD6006373840000000000CE9C6300FFFFFF00FFFFFF00CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300CE9C6300CE9C630000000000FF9C0000CE630000E7E7E700CECE
      CE00FF9C0000FF9C0000FF9C0000FF9C0000FF9C0000CE630000CE630000CE63
      0000CE630000CE630000CE630000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00B5F7FF00A5EFFF0094EFFF0094E7FF0084DEFF0073D6
      FF0073CEF70063BDF7006373840000000000CE9C6300FFFFFF00E7E7E700CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300000000000000000000000000FF9C0000CE630000FFFFFF00FF9C
      0000FF9C6300FF9C6300FF9C0000FF9C0000FF9C0000FF9C0000FF9C0000CE63
      0000CE630000CE63000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C
      6300CE9C6300CE9C6300000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA500849CA500849CA500849C
      A500849CA5008494A5000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300000000000000000000000000FF9C0000CE630000FF9C0000FF9C
      6300FF9C6300FF9C6300FF9C6300FF9C6300FF9C0000FF9C0000FF9C0000FF9C
      0000CE6300000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7
      E700CE9C630000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF00B5F7F70094E7F70094A5B500000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C6300CE9C
      6300CE9C6300000000000000000000000000FF9C0000FF9C0000FF9C6300FF9C
      6300FF9C6300FF9C6300FF9C6300FF9C6300FF9C6300FF9C6300FF9C0000CE63
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C
      6300000000000000000000000000000000000000000094ADB50094ADB50094AD
      B50094ADB50094ADB50000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7E700CE9C
      63000000000000000000000000000000000000000000FF9C00009C9C9C00FFFF
      FF009C9C9C00FFFFFF009C9C9C00FFFFFF009C9C9C00FFFFFF009C9C9C00FFFF
      FF00000000000000000000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C63000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C00CECECE009C9C9C00CECECE009C9C9C00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C630000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000C00100000100010000000000000E00000000000000000000
      000000000000000000000000FFFFFF00FDFF000000000000E8FF000000000000
      A05F000000000000803F000000000000001F000000000000000F000000000000
      000F000000000000000F00000000000000010000000000000001000000000000
      0001000000000000000F000000000000000F000000000000002F000000000000
      803F000000000000E1FF000000000000FF00FF00FFFFFDFFFF00FF00F00FE0FF
      FF00FF00C003801FF500F5008001001FFF80FF800000001FF7C7F7C70000000F
      FFFFFFFF2000000F803F803F6000000F001F001F20000001001F001F00000101
      001F001F00000101000300030000000F000300038001008F00610061C00300AF
      80F480F4F00F803FC7FEC7FEFFFFE1FFFFFFFE7FFFFFFFFFFFFFFE3FFFFFFFFF
      F3FFFE1F0E1F0E1FE1FFFE0F060F060FC0FF000783078307807F0003C183C183
      803F0001E0C1E0C18C1F0000F060F0609E0F0000F060F060FF070001E0C1E0C1
      FF830003C183C183FFC3000783078307FFE3FE0F060F060FFFF3FE1F0E1F0E1F
      FFFFFE3FFFFFFFFFFFFFFE7FFFFFFFFFFFFFFFFF8000FFFFFFFFFFFF0000FFFF
      F3FFF3FF0000F3FFE1FFE1FF0000E1FFC0FFC0FF0000C0FF807F807F0000807F
      803F803F0000803F8C1F8C1F00008C1F9E0F9E0F00009E0FFF07FF070000FF07
      FF83FF830000FF83FFC3FFC30000FFC3FFE3FFE30000FFE3FFF3FFF30000FFF3
      FFFFFFFF0000FFFFFFFFFFFF0000FFFF8000FE1F800080000000FE1F00000000
      0000FE1F000000000000FE1F000000000000FC1F000000000000FC1F00000000
      0000F80000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000080100000000FFFFFFFFF00F8000FFFFFFFFE0070000
      F3FFF3FFC7C30000E1FFE1FF8FE10000C0FFC0FF0FF00000807F807F1FF00000
      803F803F1FD000008C1F8C1F1FD000009E0F9E0F1BD00000FF07FF0711400000
      FF83FF8311400000FFC3FFC311400000FFE3FFE381410000FFF3FFF3C1430000
      FFFFFFFFE0070000FFFFFFFFF00F0000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      F07FF07FFFFFFFFFF03FF03FFFFFFFFFF81FF81FFFFFFFFFFC0FFC0FFFFFFFFF
      FE07FE07C003C003FF03FF03C003C003FF03FF03C003C003FE07FE07C003C003
      FC0FFC0FFFFFFFFFF81FF81FFFFFFFFFF03FF03FFFFFFFFFF07FF07FFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FE0FFE0FF07FF07FFC0FFC0FF03FF03FF81FF81FF81FF81FF03FF03FFC0FFC0F
      E07FE07FFE07FE07C0FFC0FFFF03FF03C0FFC0FFFF03FF03E07FE07FFE07FE07
      F03FF03FFC0FFC0FF81FF81FF81FF81FFC0FFC0FF03FF03FFE0FFE0FF07FF07F
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF9FFF9FFF9FFF9FFF8FFF8FFF8FFF8F
      000700070007000700037F8300037F83000140010001400100007F8000007F80
      000140010001400100037F8300037F830007400700074007000F7F8F000F7F8F
      000F400F000F400F000F7FEF000F7FEF000F402F000F402F000F7FEF000F7FEF
      000F7FEF000F7FEF000F000F000F000FFFFFFFFFFC00FC00EFFDEFFDFC00FDFE
      C7FFC7FFFC00FDFEC3FBC3FBFC00FDFEE3F7E3F7E000E1FEF1E7F1E7E000EC00
      F8CFF8CFE000EC00FC1FFC1FE000EC00FE3FFE3F00070FF7FC1FFC1F00076007
      F8CFF8CF00076007E1E7E1E700076007C3F3C3F3003F7FBFC7FDC7FD003F003F
      FFFFFFFF003F003FFFFFFFFF003F003FFFFF801FFFFFFFFFC001000FC003C003
      8001000FC003DFFB8001000FC003D00B8001000FC003DFFB8001000FC003D00B
      8001000FC003DFFB8001000FC003D00B80010000C003DFFB80010000C003D00B
      80010001C003DFFB80010003C003D04380010007C007DFD78001000FC00FDFCF
      8001800FC01FC01FFFFFC01FFFFFFFFFA7FFFFFFFFFFFFFF01FFFFFFFFFFC001
      007FF3FFF3FF8001003FE1FFE1FF8001001FC0FFC0FF8001500F807F807F8001
      F007803F803F8001F8038C1F8C1F8001FC019E0F9E0F8001FE00FF07FF078001
      FF00FF83FF838001FF80FFC3FFC38001FFC0FFE3FFE38001FFE0FFF3FFF38001
      FFF0FFFFFFFF8001FFF8FFFFFFFFFFFFFFFFFFFFFFFFA7FF1FFFEFFDEFFD01FF
      0FFFC7FFC7FF007F83FFC3FBC3FB003F81FFE3F7E3F7001FC0FFF1E7F1E7500F
      C03FF8CFF8CFF007E01FFC1FFC1FF803E007FE3FFE3FFC01F003FC1FFC1FFE00
      F001F8CFF8CFFF00F800E1E7E1E7FF80F800C3F3C3F3FFC0FC00C7FDC7FDFFE0
      FC00FFFFFFFFFFF0FE00FFFFFFFFFFF8FFFFFFFFFFFFFFFFFFFFC007C0031FFF
      C007C007C0030FFF8003C007C00383FF0001C007C00381FF0001C007C003C0FF
      0000C007C003C03F0000C007C003E01F0000C007C003E0070000C007C003F003
      0001C007C003F0010003C007C003F8000007C00FC007F80081FFC01FC00FFC00
      C3FFC03FC01FFC00FFFFFFFFFFFFFE00FFFFFFFFFFFFFFFF0000C007FFFFFFFF
      000080038000C001000080030000800000008003000000000000800300000000
      0000800300000000000080030000000000008003000000000000800300000000
      0000800300000001000080030000000300008003000000070000C007000781FF
      0001FC7FFFFFC3FFAAABFFFFFFFFFFFFC3F1FF24FF248000E1F3FF24FF240000
      F0E3FE7FFE7F0000FC47FC3FFC3F0000C20FFC1FFC1F0000831FFC0FFC0F0000
      811FF807F8070000804FF803F8030000C0E7F003F0030000C1F3E007E0070000
      80FBC03FC03F000080FD80FF80FF000080FF00FF00FF000080FF01FF01FF0000
      80FF87FF87FF0000C1FFCFFFCFFF0000FFFFFFFFFFFFFFFFFFFFFFFFC007C007
      F0FFF0FF80038003E0FFE0FF00010001C0FFC0FF000140018301830100014001
      8701870100007FF08F818F8100004000878187818000800082018201C000DFE0
      C001C001E001E821E039E039E007EFF7F07FF07FF007F417FFFFFFFFF003F7FB
      FFFFFFFFF803F803FFFFFFFFFFFFFFFFFDFFFE07FFCFFF83E8FFFE01FC077F03
      A05F8001FC031F00803F8003FC010F00001F8007C0038381000F800380078183
      000F8003804FC001000F8003805FC00100018003C0FFC00100018003C1FFE001
      0001800780FFE001000F800780FFF001000F800780FFF001002F800F80FFF801
      803F801F80FFF801E1FF803FC1FFFC01FFFFFFFFFFFFFDFFC001FFF7EFFFE0FF
      0001FFF3CFFF801F0001FF0180FF001F0001FF0000FF001F0001FF0000FF000F
      0001F000000F000F000180018001000F00010003C000000100018703C0E10101
      000F0387E1C00101000F87FFFFE1000F000F03FFFFC0008F001F87FFFFE100AF
      003F03FFFFC0803F007F87FFFFE1E1FFFFFFFFFFFFFFFFFFC003FC3FFE0FFFFF
      DFFB8007FC0F8000D00B8003FC038000DFFB8007C0038000D00B800380070000
      DFFB8007800F0000D00B800380070000DFFB8007C0070000D00B8003C0070000
      DFFB800780070000D043800780070001DFD78007800F0001DFCF800F80FF0001
      C01F801F80FFFFFFFFFF803FC1FFFFFFFF1FFE0FFE1FFFFFFE0FFC07FC03C003
      FC07F803C001C003FC03F00181C3C003E001E000C381C003C000C000FFC3C003
      80008000FF81C003000000000000C003000000000000C003000000000000C003
      000100000000C003000300030000C003801F000F0000C007C03F803F0000C00F
      F07FE07F0000C01FFDFFF9FF0000FFFFFFFFFFFFFFBFFF07C003C003FE1F0001
      8001DFFBFE0F00008001D00BF80700000001DFFBF00100000001D00BC0000001
      0001DFFB800000038001D00B800000078003DFFB0000000F800FD00B0000000F
      800FDFFB0000000FC007D0430001800FE007DFD7000FE00FE007DFCF803FE00F
      F81FC01FE07FF00FFFFFFFFFF1FFFFFFFFFFFFFFFFFFFFFFC001E000E000FFBF
      C001E000E000FF3F0001E000E000FE1F000100000000800F0001000000000047
      00010000000000E300010000000000F100010000000081F800010000000183FC
      00010001000101FF00010003000101FF00030007000101FF01CF840F000301FF
      83FFC01F01FF01FFFFFFE03F83FF83FFF8FFFFFFFFFFFFFFF03FFFEFE000FFFF
      E00FFFE7E000FFFFE003FE03E000E000C00100010800E000C00100000800C000
      800100010C008000800100030E000000000300070F000000000300070FC00000
      8007000700002000E00700070001E000F80F800F0001FF07FE0FC41F0001FF87
      FF9FE03F00FFFFC7FFFFF07F01FFFFE7FE03F800EFF7FFFFFC03F800C800E000
      FD01F800C000E000F801F800C000E0000001F800E00000000001F800F0000000
      0001FF7FF11F00000000FF7FF83F00000200FEFFF83F00000100FEFF001F0000
      0000001F001F00000000001F001F00010001001F000F00010003001F000F0001
      01FF001FC7EF00FF83FF001FEFF701FFFFFFFFFFFFFFFFFFFFEFFFFFFF01EFFD
      FFCFFE01FF01C7FFFF80FC00FF01C3FB0000F800C001E3F70000F000BB01F1E7
      0000E0008001F8CF0000C000BB01FC1F000780008001FE3F00070001BB01FC1F
      000700018001F8CF00070003BBABE1E7800F00078003C3F3C41F000F8003C7FD
      E03F001F8003FFFFF07F803F8003FFFFFFFFFFBFFFFFFC01C003FC1FFFEFF800
      C003F81FFFCFF000C003E00FFF80F000C003800F0000E000C00380070000C000
      C003B00100008000C003800100000000C003800100070000C003008100070001
      C003004000070003C003002000070007C0072000800F000FC00F0001C41F000F
      C01F8101E03F001FFFFFFF81F07F803F801FFFFFFFFFE000000FC003FFFFE000
      000FC0038003E000000FC0030001E000000FC0030001E000000FC00300010000
      000FC00300010000000FC003000100000000C003000100010000C00300010001
      0001C003000100070003C003000300070007C00701FF0007000FC00F83FF000F
      800FC01FFFFF001FC01FFFFFFFFF007F00000000000000000000000000000000
      000000000000}
  end
  object TmNE_DO: TTimer
    Enabled = False
    Interval = 350
    OnTimer = TmNE_DOTimer
    Left = 496
    Top = 645
  end
  object QNE_DO: TADOQuery
    AutoCalcFields = False
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    SQL.Strings = (
      
        'select l.idn, l.idAdvProduceClass, l.IdAdvCond, l.IdAdvPriseList' +
        ', l.idProductOffer, l.IdIns, l.DateIns, l.IdDel, l.DateDel'
      ',p.NAME,p.OFFER_ID'
      ''
      'from dbo.all_AdvProduceLinkProductOffer l'
      'left join dbo.bm_ProductOffer p on p.ID=l.idProductOffer'
      'where l.idn>0'
      ''
      '/*'
      
        'SELECT A.Idn,B.NameRaspDetail, C.iText ['#1058#1080#1087' '#1087#1088#1086#1076#1091#1082#1090#1072'], E.iText [' +
        #1055#1088#1086#1076#1091#1082#1090'],J.iText ['#1058#1077#1084#1072#1090#1080#1095#1077#1089#1082#1086#1077' '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077'], A.NameRaspDetail ,A' +
        '.NumbNE ['#1053#1086#1084#1077#1088'],A.[Year] ['#1043#1086#1076'],isnull(A.ItemId,'#39#39') ['#1050#1086#1076']'
      
        ', A.IdnAxapta, A.NameAxapta, A.ItemIdAxapta , isnull(A.fState,0)' +
        'fState ,H.NumbRaspName'
      ''
      'FROM bm_RaspDetail A'
      'LEFT JOIN bm_RaspDetail B ON B.Idn=A.PIdn'
      'LEFT JOIN spl_LbText24 C ON C.Idn=B.Id24TypeProduceIndex'
      'LEFT JOIN all_AdvProduceClass D ON D.Idn=B.idAdvProduceClass'
      'LEFT JOIN spl_LbText512 E ON E.Idn=D.id512Name'
      'LEFT JOIN all_AdvProduceClass F ON F.Idn=B.idAdvTNClass'
      'LEFT JOIN spl_LbText512 J ON J.Idn=F.id512Name'
      'LEFT JOIN bm_Rasp H ON H.Idn=A.IdRasp'
      '--LEFT JOIN ax_Nomenclatura K ON K.Idn=A.IdnAxapta'
      '--LEFT JOIN bm_Rasp B2 ON B2.Idn=A.IdRasp'
      'WHERE A.fType=3 AND A.DateDel IS NULL AND B.DateDel IS NULL'
      
        'AND H.Id24NameStatus IN (5448350,5448352,5448428) AND B.NameRasp' +
        'Detail<>'#39#1053#1086#1074#1099#1081' '#1087#1086#1076#1087#1080#1089#1085#1086#1081' '#1080#1085#1076#1077#1082#1089#39' '
      'AND A.NameRaspDetail<>'#39#1053#1086#1074#1072#1103' '#1085#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1085#1072#1103' '#1077#1076#1077#1085#1080#1094#1072#39
      '--AND B2.Id24NameStatus IN (5448350,5448352,5448428)'
      'AND H.DateDel is null'
      
        '--GROUP BY C.iText , E.iText ,J.iText, A.NameRaspDetail ,A.NumbN' +
        'E,A.[Year],A.ItemId,A.IdnAxapta,K.ItemName,K.ItemId,isnull(A.fSt' +
        'ate,0)'
      
        'AND ((A.DateLastExport is null) OR (A.DateLastExport is not null' +
        ' AND (coalesce(A.DateDel,A.DateMod,A.DateIns)>A.DateLastExport))' +
        ' )'
      'ORDER BY A.NameRaspDetail'
      '*/')
    Left = 371
    Top = 643
    object QNE_DOidn: TIntegerField
      FieldName = 'idn'
    end
    object QNE_DOidAdvProduceClass: TIntegerField
      FieldName = 'idAdvProduceClass'
    end
    object QNE_DOIdAdvCond: TIntegerField
      FieldName = 'IdAdvCond'
    end
    object QNE_DOIdAdvPriseList: TIntegerField
      FieldName = 'IdAdvPriseList'
    end
    object QNE_DOidProductOffer: TIntegerField
      FieldName = 'idProductOffer'
    end
    object QNE_DOIdIns: TIntegerField
      FieldName = 'IdIns'
    end
    object QNE_DODateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object QNE_DOIdDel: TIntegerField
      FieldName = 'IdDel'
    end
    object QNE_DODateDel: TDateTimeField
      FieldName = 'DateDel'
    end
    object QNE_DONAME: TMemoField
      FieldName = 'NAME'
      BlobType = ftMemo
    end
    object QNE_DOOFFER_ID: TStringField
      FieldName = 'OFFER_ID'
      Size = 100
    end
  end
  object DSNE_DO: TDataSource
    AutoEdit = False
    DataSet = QNE_DO
    Left = 435
    Top = 645
  end
  object TmNE_Axapta: TTimer
    Enabled = False
    Interval = 350
    OnTimer = TmNE_AxaptaTimer
    Left = 888
    Top = 309
  end
  object QNE_Axapta: TADOQuery
    AutoCalcFields = False
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    SQL.Strings = (
      ''
      'select DISTINCT'
      'p.ID, p.OFFER_ID, ltrim( p.NAME)NAME, p.PERIOD_ID, p.TARIFF_ID'
      ',t.ID, t.TARIFF_ID, t.NAME, t.CONTENTBLOCK_ID'
      '/* --,c.ID,  */'
      ',c.ContentBlockId, c.Name'
      '/* --, DA_ID    */'
      
        ',(select count (idn) from dbo.all_AdvProduceLinkProductOffer l w' +
        'here l.datedel is null and l.idProductOffer=l.Idn)as FRasp'
      'from dbo.bm_ProductOffer p /* --4 */'
      'left join dbo.bm_Tariff t on t.TARIFF_ID=p.TARIFF_ID /*--3 */'
      
        'left join dbo.bm_ContentBlock c on c.ContentBlockId=t.CONTENTBLO' +
        'CK_ID /*--2 */'
      'order by 3')
    Left = 891
    Top = 203
    object QNE_AxaptaID: TAutoIncField
      FieldName = 'ID'
      ReadOnly = True
    end
    object QNE_AxaptaOFFER_ID: TStringField
      FieldName = 'OFFER_ID'
      Size = 100
    end
    object QNE_AxaptaNAME: TMemoField
      FieldName = 'NAME'
      BlobType = ftMemo
    end
    object QNE_AxaptaPERIOD_ID: TIntegerField
      FieldName = 'PERIOD_ID'
    end
    object QNE_AxaptaTARIFF_ID: TStringField
      FieldName = 'TARIFF_ID'
      Size = 100
    end
    object QNE_AxaptaID_1: TAutoIncField
      FieldName = 'ID_1'
      ReadOnly = True
    end
    object QNE_AxaptaTARIFF_ID_1: TStringField
      FieldName = 'TARIFF_ID_1'
      Size = 100
    end
    object QNE_AxaptaNAME_1: TMemoField
      FieldName = 'NAME_1'
      BlobType = ftMemo
    end
    object QNE_AxaptaCONTENTBLOCK_ID: TStringField
      FieldName = 'CONTENTBLOCK_ID'
      Size = 100
    end
    object QNE_AxaptaContentBlockId: TStringField
      FieldName = 'ContentBlockId'
      Size = 100
    end
    object QNE_AxaptaName_2: TMemoField
      FieldName = 'Name_2'
      BlobType = ftMemo
    end
    object QNE_AxaptaFRasp: TIntegerField
      FieldName = 'FRasp'
      ReadOnly = True
    end
  end
  object DSNE_Axapta: TDataSource
    AutoEdit = False
    DataSet = QNE_Axapta
    Left = 891
    Top = 261
  end
  object Qw: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    Prepared = True
    Left = 843
    Top = 104
  end
  object cxStyleRepository1: TcxStyleRepository
    Left = 120
    Top = 272
    PixelsPerInch = 96
    object cxStyle1: TcxStyle
      AssignedValues = [svColor]
      Color = 15329769
    end
    object cxStyle2: TcxStyle
      AssignedValues = [svFont]
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
    end
    object cxStyle3: TcxStyle
    end
    object cxStyle4: TcxStyle
      AssignedValues = [svTextColor]
      TextColor = clMaroon
    end
    object cxStyle5: TcxStyle
      AssignedValues = [svFont]
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = []
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 576
    Top = 424
    object N1: TMenuItem
      Bitmap.Data = {
        36030000424D3603000000000000360000002800000010000000100000000100
        1800000000000003000000000000000000000000000000000000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC05500C05500FFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFBF
        5400D47A0BC05500FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFBE5100F4BA23D57708C9681AFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFBE
        5100E69101F0AD15D47608C96819FFFFFFFFFFFFFFFFFFFFFFFFCA6713C45E06
        C45E07C55F08C56009C5600AC5610BCA6709E99300E18B00F0A90ED0730AC968
        18FFFFFFFFFFFFFFFFFFDC8C25FFE767FFD555FDCD47FCC63EF8BC33F5B427F3
        AB1CED9F12E99505E48C00ED9E02CE720CC96817FFFFFFFFFFFFDE9128FFE676
        FAD063F8CD56F7CA4DF6C443F4BD39F2B32FEFA824EEA41AEC9C0EE68F02EF9B
        00D27C16C76312FFFFFFE3982EFFEB83FBDA6FF9D365F9CF5CF7C952F6C749F5
        BF40F3B635F1B02CEFA921EDA418E68A00F6BF29EDBD65C96511E9A231FFF08E
        FDE17AFCDC72FBD769F9D260F8CB55F7C84EF5C547F4BD3CF3B534EFA71BF2B6
        2BF5D675DD963BC5600DEDAC38FFF49DFEE789FEE380FDE07AFBDC71FBD769FA
        D261F7CD55F6C951F5BD36F2BD38FCDC6EDE922CC45D0BFFFFFFF1BC5AFFFFFA
        FFFFE3FFFFE0FFFEDDFFFCD8FFFDD9FFF7C7FBD463F8C947F7D474FEE68CE393
        1FC45D0DFFFFFFFFFFFFEEA42AEEB144EDAB3EECAA3DEBA83CEAA83DE8A037E7
        A33BFDDE67FDE9A2FFF3B1E59F2EC25809FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFECA01AFFFBC8FFFCCCE5A540C15707FFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF3
        B83BFFFEC8E5A63FC15605FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF8BE33E4A541C15505FFFFFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDA
        8A26C15708FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF}
      Caption = #1042#1099#1076#1077#1083#1077#1085#1085#1086#1077' '#1074' '#1091#1090#1074#1077#1088#1078#1076#1072#1077#1084#1086#1077
      SubMenuImages = ImageList1
    end
    object N2: TMenuItem
      Bitmap.Data = {
        36040000424D3604000000000000360000002800000010000000100000000100
        2000000000000004000000000000000000000000000000000000FF00FF00FFFF
        FF00FF00FF00FFFFFF00FFFFFF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FFFFFF00FFFF
        FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FF00FF00FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FFFFFF00FFFF
        FF00FFFFFF00FFFFFF00FFFFFF0080808000000099000000990000009900FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FFFFFF00FFFF
        FF00FFFFFF00FFFFFF00808080000000CC000000990000009900000099000000
        9900FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FFFFFF00FFFF
        FF00FFFFFF00FFFFFF000000CC000000CC000000CC0000009900000099000000
        990000009900FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FFFFFF00FF00
        FF00FFFFFF00FF00FF000000FF000000CC000000CC000000CC00000099000000
        99000000990000999900FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
        FF00FF00FF00FF00FF000000FF000000FF000000CC000000CC000000CC000000
        99000099990000CCCC0000999900FF00FF00FF00FF00FF00FF00FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF000000FF000000FF000000CC000000CC000099
        990000CCCC0000CCCC0000CCCC0000999900FF00FF00FF00FF00FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF000000FF000000800000CCCC0000FF
        FF0000FFFF0000CCCC0000CCCC0000CCCC0000999900FF00FF00FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF0000CCCC0000FFFF00FFFF
        FF00C0C0C00000FFFF0000CCCC0000CCCC0000CCCC0000999900FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF0000CCCC0000FF
        FF00FFFFFF00C0C0C00000FFFF0000CCCC000099990099330000FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF0000CC
        CC0000FFFF00FFFFFF0000FFFF0000999900CC66000099330000FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
        FF0000CCCC0000FFFF0000CCCC00CC660000CC660000CC660000FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
        FF00FF00FF0000CCCC00FF990000FF990000CC660000CC660000FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
        FF00FF00FF00FF00FF0099330000FF990000FF990000CC660000FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00FF00
        FF00FF00FF00FF00FF00FF00FF0099330000FF990000FF990000}
      Caption = #1042#1099#1076#1077#1083#1077#1085#1085#1086#1077' '#1091#1076#1072#1083#1080#1090#1100
      SubMenuImages = ImageList1
    end
    object N3: TMenuItem
      Bitmap.Data = {
        36030000424D3603000000000000360000002800000010000000100000000100
        1800000000000003000000000000000000000000000000000000FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAD6B2CE1A53CE7C690F3E1C4F9F1
        E3FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE5CEBBB6
        B7BA975C1ADF9C1FCC891BCD8A1BCD8A1BD7A24AE6BF74E5CEB8FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFB36624121019804A09E39C20CB891CCD8A1CCD8A
        1CCC891CD6941CAC641DFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC77C2D13
        111A864F09E49A21CD8A1DCF8B1DCF8B1DCE8A1DD8941BB4702BFFFFFFFFFFFF
        FFFFFFFEFEFF2121CBFFFFFFD7924114111B8A530BE69E22CE8C1FCF8D1FCF8D
        1FCE8C1FD6941DB77430FFFFFFFFFFFFFFFFFFFFFFFF1614D9242AF5AE6E4125
        1A008E530ED89220CF8C1FD08F23D08F22CF8E22D79620BB79343039E81D2AE8
        232CE8222EEB2430EF2032FF1B25F900002FAA6F06E4EAF1BC7418D69324D292
        27D29127D89925BF7E36616EF0152EF4223AF42137F42338F2273AEF213CFF2B
        3FFF895645FAD273D29A3DD6982ED39229D4932BDA9C2DC383396B7BF54565F7
        4A67F64E69F6425CF31F3CF25E7FFF1F28B9A46820F0BA4DDEAE56DFAF58DBA7
        49D59A36DB9F31C6893E5A61F0656FF1636DF16670F0495FF1638AFF8667B40D
        0300AA7628F2C46DE0B05DE0B25EE2B462E2B261E1AE4BCB8C3FFFFFFFFFFFFF
        FFFFFFFFFFFF3B40F05461FFEAA94F22180BA8793AF5CA77E2B768E3B869E3B8
        69E4B86AEAC377D2994DFFFFFFFFFFFFFFFFFFFBFBFF2222FFFFFFFFF7B64D1C
        1014B2803FF8D284E6BF73E7C074E7C074E7BF73ECCB80D69E53FFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFF6B2451D1212B98949FDD991EAC681EAC581EAC5
        81EAC581F0D08FD9A458FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFE7AC5C18
        0D0EC49957FFF2AFFFE09DFFE4A0F8DB9AF3D495F5DEA3DEAC5DFFFFFFFFFFFF
        FFFFFFFFFFFFFFFFFFFFFFFFECB15C301F1B231F206E5A449E8663BBA77CDDC1
        8CF1D399FEEBBAE3B265FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEAB968DC
        A851D09D4EC59447BA8A41B38239CF9A48DFAC54E9B964E4B360}
      Caption = #1042#1099#1093#1086#1076
    end
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 250
    OnTimer = Timer1Timer
    Left = 400
    Top = 253
  end
  object DM_JobConnect: TADOConnection
    CommandTimeout = 9000
    ConnectionString = 'FILE NAME=DM_Job.udl'
    ConnectionTimeout = 9000
    IsolationLevel = ilChaos
    LoginPrompt = False
    Provider = 'DM_Job.udl'
    Left = 160
    Top = 64
  end
  object QDM_JobConnect: TADOQuery
    AutoCalcFields = False
    Connection = DM_JobConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'declare @IdnJobFromaa_DbCopy3 int;'
      'set @IdnJobFromaa_DbCopy3=2;'
      
        'EXEC prDbCopy_WriteHistory @IdnJobFromaa_DbCopy3,'#39#1055#1088#1080#1085#1091#1076#1080#1090#1077#1083#1100#1085#1099#1081 +
        ' '#1089#1090#1072#1088#1090#39';'
      
        'update aa_DbCopy3 set [status]=-1 where Idn=@IdnJobFromaa_DbCopy' +
        '3;'
      'exec prDbCopy__Main;')
    Left = 227
    Top = 139
  end
  object Qw2: TADOQuery
    Connection = DM_JobConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    Prepared = True
    Left = 307
    Top = 64
  end
  object TmProduce: TTimer
    Enabled = False
    Interval = 350
    OnTimer = TmProduceTimer
    Left = 40
    Top = 400
  end
  object DSProduce: TDataSource
    AutoEdit = False
    DataSet = QProduce
    OnDataChange = DSProduceDataChange
    Left = 96
    Top = 400
  end
  object QProduce: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    SQL.Strings = (
      
        'select  A.idn, A.idnP,B.iText, A.iType ,C.iText TypeName, A.IdIn' +
        's, D.auFamIO, isnull(A.ISSN,'#39#39')'
      'ISSN, isnull(A.CodeB,'#39#39') CodeB,'
      'isnull( E.fActual,0) fActual ,'
      ' isnull(A.Id24TypeName,0) Id24TypeName'
      ' ,a.IdAdvCond ,a.IdAdvPriseList'
      ' ,p.Price'
      ' ,p.DateFrom'
      ' ,p.DateTo'
      
        ' ,(select count (idn) from dbo.all_AdvProduceLinkProductOffer l ' +
        'where l.datedel is null and l.IdAdvPriseList=a.IdAdvPriseList)as' +
        ' FRasp'
      ''
      'from all_AdvProduceClass A'
      'LEFT JOIN spl_LbText512 B ON B.Idn=id512Name'
      'LEFT JOIN aa_Users D ON D.auId=A.IdIns'
      'LEFT JOIN spl_LbText24 C ON C.Idn=A.Id24TypeName'
      'LEFT JOIN vwActualProduce E ON E.Idn=A.Idn'
      'LEFT JOIN dbo.all_AdvPriseListEtalon p on p.idn=a.IdAdvPriseList'
      'where A.DateDel is null   and  Id512NameCatalog=9113095'
      'ORDER BY   A.iType, B.iText')
    Left = 152
    Top = 400
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
    object QProduceIdIns: TIntegerField
      FieldName = 'IdIns'
    end
    object QProduceauFamIO: TStringField
      FieldName = 'auFamIO'
      Size = 24
    end
    object QProduceISSN: TWideStringField
      FieldName = 'ISSN'
      ReadOnly = True
      Size = 24
    end
    object QProduceCodeB: TStringField
      FieldName = 'CodeB'
      Size = 16
    end
    object QProducefActual: TIntegerField
      FieldName = 'fActual'
      ReadOnly = True
    end
    object QProduceId24TypeName: TIntegerField
      FieldName = 'Id24TypeName'
      ReadOnly = True
    end
    object QProduceTypeName: TStringField
      FieldName = 'TypeName'
      Size = 24
    end
    object QProduceIdAdvCond: TIntegerField
      FieldName = 'IdAdvCond'
    end
    object QProduceIdAdvPriseList: TIntegerField
      FieldName = 'IdAdvPriseList'
    end
    object QProducePrice: TBCDField
      FieldName = 'Price'
      Precision = 19
    end
    object QProduceDateFrom: TDateTimeField
      FieldName = 'DateFrom'
    end
    object QProduceDateTo: TDateTimeField
      FieldName = 'DateTo'
    end
    object QProduceFRasp: TIntegerField
      FieldName = 'FRasp'
      ReadOnly = True
    end
  end
end
