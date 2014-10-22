object FrChancheNE: TFrChancheNE
  Left = 0
  Top = 0
  Caption = #1042#1099#1073#1077#1088#1080#1090#1077' '#1079#1072#1084#1077#1085#1103#1077#1084#1099#1077' '#1080' '#1079#1072#1084#1077#1097#1072#1102#1097#1080#1077' '#1085#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1099
  ClientHeight = 647
  ClientWidth = 1031
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 621
    Width = 1031
    Height = 26
    Align = alBottom
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 0
    VisualStyle = vsGradient
    object RzSpacer5: TRzSpacer
      Left = 1
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alLeft
      ExplicitLeft = 97
      ExplicitTop = -1
    end
    object btClose: TRzToolButton
      Left = 880
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
      Left = 876
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alRight
      ExplicitLeft = 3
      ExplicitTop = 42
      ExplicitHeight = 1189
    end
    object RzToolButton1: TRzToolButton
      Left = 5
      Top = 1
      Width = 150
      Height = 24
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 31
      Images = ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alLeft
      Caption = #1042#1099#1073#1088#1072#1090#1100
      OnClick = RzToolButton1Click
      ExplicitLeft = 9
      ExplicitTop = 0
    end
    object RzSpacer1: TRzSpacer
      Left = 155
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alLeft
      ExplicitLeft = 148
      ExplicitTop = 3
    end
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1031
    Height = 41
    Align = alTop
    Caption = 'Panel1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBlue
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object Panel4: TPanel
      Left = 617
      Top = 1
      Width = 413
      Height = 39
      Align = alClient
      Caption = 'Panel1'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      object RzMemo1: TRzMemo
        AlignWithMargins = True
        Left = 3
        Top = 3
        Width = 409
        Height = 33
        Margins.Left = 2
        Margins.Top = 2
        Margins.Right = 0
        Margins.Bottom = 2
        Align = alClient
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlue
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        FrameHotTrack = True
        FrameVisible = True
        TabOnEnter = True
      end
    end
    object Panel5: TPanel
      Left = 425
      Top = 1
      Width = 192
      Height = 39
      Align = alLeft
      Caption = #1079#1072#1084#1077#1085#1103#1077#1090#1089#1103' '#1085#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -16
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
    end
    object Panel6: TPanel
      Left = 1
      Top = 1
      Width = 424
      Height = 39
      Align = alLeft
      Caption = 'Panel1'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlue
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
      object edAlterName: TRzMemo
        AlignWithMargins = True
        Left = 3
        Top = 3
        Width = 420
        Height = 33
        Margins.Left = 2
        Margins.Top = 2
        Margins.Right = 0
        Margins.Bottom = 2
        Align = alClient
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlue
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        ParentFont = False
        TabOrder = 0
        FrameHotTrack = True
        FrameVisible = True
        TabOnEnter = True
      end
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 41
    Width = 513
    Height = 580
    Align = alLeft
    Caption = 'Panel1'
    TabOrder = 2
    object cxGrid1: TcxGrid
      AlignWithMargins = True
      Left = 3
      Top = 40
      Width = 507
      Height = 537
      Margins.Left = 2
      Margins.Top = 1
      Margins.Right = 2
      Margins.Bottom = 2
      Align = alBottom
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
        DataController.Summary.DefaultGroupSummaryItems = <>
        DataController.Summary.FooterSummaryItems = <>
        DataController.Summary.SummaryGroups = <>
        OptionsBehavior.CellHints = True
        OptionsBehavior.ColumnHeaderHints = False
        OptionsBehavior.BandHeaderHints = False
        OptionsCustomize.ColumnMoving = False
        OptionsCustomize.ColumnsQuickCustomization = True
        OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
        OptionsCustomize.BandMoving = False
        OptionsData.Deleting = False
        OptionsData.Editing = False
        OptionsData.Inserting = False
        OptionsView.CellEndEllipsis = True
        OptionsView.NavigatorOffset = 30
        OptionsView.CellAutoHeight = True
        OptionsView.DataRowHeight = 35
        OptionsView.GroupByBox = False
        Bands = <
          item
            Caption = #1047#1040#1052#1045#1053#1071#1045#1052#1040#1071' '#1085#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1072' '
            HeaderAlignmentHorz = taLeftJustify
          end>
        object cxGridDBBandedTableView1Column1: TcxGridDBBandedColumn
          Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' Axapta'
          DataBinding.FieldName = 'ItemName'
          Width = 268
          Position.BandIndex = 0
          Position.ColIndex = 0
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1Column2: TcxGridDBBandedColumn
          Caption = #1050#1086#1076' Axapta'
          DataBinding.FieldName = 'ItemId'
          Width = 106
          Position.BandIndex = 0
          Position.ColIndex = 1
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1Column3: TcxGridDBBandedColumn
          Caption = #1058#1080#1087
          DataBinding.FieldName = 'iTextId24ItemType'
          Position.BandIndex = 0
          Position.ColIndex = 4
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1Column5: TcxGridDBBandedColumn
          Caption = #1043#1086#1076
          DataBinding.FieldName = 'iYear'
          Position.BandIndex = 0
          Position.ColIndex = 3
          Position.RowIndex = 0
        end
        object cxGridDBBandedTableView1Column6: TcxGridDBBandedColumn
          Caption = #1053#1044#1057' %'
          DataBinding.FieldName = 'NDS'
          Width = 55
          Position.BandIndex = 0
          Position.ColIndex = 2
          Position.RowIndex = 0
        end
      end
      object cxGridLevel1: TcxGridLevel
        Caption = #1053#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1085#1099#1077' '#1077#1076#1077#1085#1080#1094#1099
        GridView = cxGridDBBandedTableView1
      end
    end
    object RzGroupBox5: TRzGroupBox
      Left = 1
      Top = 1
      Width = 511
      Height = 38
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alClient
      Caption = #1055#1086#1080#1089#1082' '#1087#1086' '#1050#1086#1076#1091'\'#1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1102' '#1085#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1099
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 1
      Transparent = True
      object edFind: TRzEdit
        Left = 2
        Top = 15
        Width = 477
        Height = 21
        Align = alClient
        Color = clWhite
        FrameHotTrack = True
        FrameVisible = True
        TabOrder = 0
        OnChange = edFindChange
      end
      object RzBitBtn1: TRzBitBtn
        Left = 479
        Top = 15
        Width = 30
        Height = 21
        FrameColor = 7617536
        Align = alRight
        Caption = 'Clear'
        Color = 15791348
        HotTrack = True
        TabOrder = 1
        OnClick = RzBitBtn1Click
        DisabledIndex = 36
        ImageIndex = 35
        Images = ImageList1
      end
    end
  end
  object Panel3: TPanel
    Left = 513
    Top = 41
    Width = 518
    Height = 580
    Align = alClient
    Caption = 'Panel1'
    TabOrder = 3
    object RzGroupBox1: TRzGroupBox
      Left = 1
      Top = 1
      Width = 516
      Height = 38
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alClient
      Caption = #1055#1086#1080#1089#1082' '#1087#1086' '#1050#1086#1076#1091'\'#1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1102' '#1085#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1099
      GradientColorStyle = gcsCustom
      GradientColorStop = clSkyBlue
      GroupStyle = gsCustom
      TabOrder = 0
      Transparent = True
      object RzEdit1: TRzEdit
        Left = 2
        Top = 15
        Width = 482
        Height = 21
        Align = alClient
        Color = clWhite
        FrameHotTrack = True
        FrameVisible = True
        TabOrder = 0
        OnChange = RzEdit1Change
      end
      object RzBitBtn2: TRzBitBtn
        Left = 484
        Top = 15
        Width = 30
        Height = 21
        FrameColor = 7617536
        Align = alRight
        Caption = 'Clear'
        Color = 15791348
        HotTrack = True
        TabOrder = 1
        OnClick = RzBitBtn2Click
        DisabledIndex = 36
        ImageIndex = 35
        Images = ImageList1
      end
    end
    object cxGrid2: TcxGrid
      AlignWithMargins = True
      Left = 3
      Top = 40
      Width = 512
      Height = 537
      Margins.Left = 2
      Margins.Top = 1
      Margins.Right = 2
      Margins.Bottom = 2
      Align = alBottom
      BevelInner = bvNone
      BevelOuter = bvNone
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
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
        DataController.DataSource = DataSource1
        DataController.DetailKeyFieldNames = 'Idn'
        DataController.Summary.DefaultGroupSummaryItems = <>
        DataController.Summary.FooterSummaryItems = <>
        DataController.Summary.SummaryGroups = <>
        OptionsBehavior.CellHints = True
        OptionsBehavior.ColumnHeaderHints = False
        OptionsBehavior.BandHeaderHints = False
        OptionsCustomize.ColumnMoving = False
        OptionsCustomize.ColumnsQuickCustomization = True
        OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
        OptionsCustomize.BandMoving = False
        OptionsData.Deleting = False
        OptionsData.Editing = False
        OptionsData.Inserting = False
        OptionsView.CellEndEllipsis = True
        OptionsView.NavigatorOffset = 30
        OptionsView.CellAutoHeight = True
        OptionsView.DataRowHeight = 35
        OptionsView.GroupByBox = False
        Bands = <
          item
            Caption = #1047#1040#1052#1045#1065#1040#1070#1065#1040#1071' '#1085#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1072' '
            HeaderAlignmentHorz = taLeftJustify
          end>
        object cxGridDBBandedColumn1: TcxGridDBBandedColumn
          Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' Axapta'
          DataBinding.FieldName = 'ItemName'
          Width = 268
          Position.BandIndex = 0
          Position.ColIndex = 0
          Position.RowIndex = 0
        end
        object cxGridDBBandedColumn2: TcxGridDBBandedColumn
          Caption = #1050#1086#1076' Axapta'
          DataBinding.FieldName = 'ItemId'
          Width = 106
          Position.BandIndex = 0
          Position.ColIndex = 1
          Position.RowIndex = 0
        end
        object cxGridDBBandedColumn3: TcxGridDBBandedColumn
          Caption = #1058#1080#1087
          DataBinding.FieldName = 'iTextId24ItemType'
          Position.BandIndex = 0
          Position.ColIndex = 4
          Position.RowIndex = 0
        end
        object cxGridDBBandedColumn4: TcxGridDBBandedColumn
          Caption = #1043#1086#1076
          DataBinding.FieldName = 'iYear'
          Position.BandIndex = 0
          Position.ColIndex = 3
          Position.RowIndex = 0
        end
        object cxGridDBBandedColumn5: TcxGridDBBandedColumn
          Caption = #1053#1044#1057' %'
          DataBinding.FieldName = 'NDS'
          Width = 55
          Position.BandIndex = 0
          Position.ColIndex = 2
          Position.RowIndex = 0
        end
      end
      object cxGridLevel2: TcxGridLevel
        Caption = #1053#1086#1084#1077#1085#1082#1083#1072#1090#1091#1088#1085#1099#1077' '#1077#1076#1077#1085#1080#1094#1099
        GridView = cxGridDBBandedTableView2
      end
    end
  end
  object ImageList1: TImageList
    DrawingStyle = dsTransparent
    Left = 370
    Top = 357
    Bitmap = {
      494C010125004800340010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      000000000000360000002800000040000000A0000000010020000000000000A0
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
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF008080800066666600666666006666660000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00808080009999990066666600666666006666660066666600000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00999999009999990099999900666666006666660066666600666666000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF0000000000FFFFFF000000
      0000CCCCCC009999990099999900999999006666660066666600666666006666
      6600000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CCCCCC00CCCCCC0099999900999999009999990066666600666666009999
      9900666666000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CCCCCC00CCCCCC00999999009999990066666600999999009999
      9900999999006666660000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CCCCCC006666660099999900CCCCCC00CCCCCC009999
      9900999999009999990066666600000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000099999900CCCCCC00FFFFFF00C0C0C000CCCC
      CC00999999009999990099999900666666000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000099999900CCCCCC00FFFFFF00C0C0
      C000CCCCCC009999990066666600666666000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099999900CCCCCC00FFFF
      FF00CCCCCC006666660099999900666666000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000099999900CCCC
      CC00999999009999990099999900999999000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009999
      9900CCCCCC00CCCCCC0099999900999999000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000066666600CCCCCC00CCCCCC00999999000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000066666600CCCCCC00CCCCCC000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FFFFFF0000000000FFFF
      FF00FFFFFF000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FFFFFF0000000000FFFF
      FF00FFFFFF000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000FFFFFF0000000000FFFF
      FF00FFFFFF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B2B2B2008080800000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF008080800000009900000099000000990000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF008080800066666600666666006666660000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF008080800000009900000099000000990000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B2B2
      B200999999009999990080808000000000000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00808080000000CC0000009900000099000000990000009900000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00808080009999990066666600666666006666660066666600000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00808080000000CC0000009900000099000000990000009900000000000000
      0000000000000000000000000000000000000000000000000000B2B2B2009999
      9900999999009999990099999900808080000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF000000CC000000CC000000CC00000099000000990000009900000099000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00999999009999990099999900666666006666660066666600666666000000
      000000000000000000000000000000000000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF000000CC000000CC000000CC00000099000000990000009900000099000000
      00000000000000000000000000000000000000000000B2B2B200999999009999
      9900999999009999990099999900999999008080800000000000000000000000
      000000000000000000000000000000000000FFFFFF0000000000FFFFFF000000
      00000000FF000000CC000000CC000000CC000000990000009900000099000099
      990000000000000000000000000000000000FFFFFF0000000000FFFFFF000000
      0000CCCCCC009999990099999900999999006666660066666600666666006666
      660000000000000000000000000000000000FFFFFF0000000000FFFFFF000000
      00000000FF000000CC000000CC000000CC000000990000009900000099000099
      99000000000000000000000000000000000000000000B2B2B200999999009999
      990080808000B2B2B20099999900999999009999990080808000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000FF000000FF000000CC000000CC000000CC00000099000099990000CC
      CC00009999000000000000000000000000000000000000000000000000000000
      0000CCCCCC00CCCCCC0099999900999999009999990066666600666666009999
      9900666666000000000000000000000000000000000000000000000000000000
      00000000FF000000FF000000CC000000CC000000CC00000099000099990000CC
      CC000099990000000000000000000000000000000000B2B2B200999999008080
      80000000000000000000B2B2B200999999009999990099999900808080000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000FF000000FF000000CC000000CC000099990000CCCC0000CC
      CC0000CCCC000099990000000000000000000000000000000000000000000000
      000000000000CCCCCC00CCCCCC00999999009999990066666600999999009999
      9900999999006666660000000000000000000000000000000000000000000000
      0000000000000000FF000000FF000000CC000000CC000099990000CCCC0000CC
      CC0000CCCC0000999900000000000000000000000000B2B2B200808080000000
      0000000000000000000000000000B2B2B2009999990099999900999999008080
      8000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF000000800000CCCC0000FFFF0000FFFF0000CC
      CC0000CCCC0000CCCC0000999900000000000000000000000000000000000000
      00000000000000000000CCCCCC006666660099999900CCCCCC00CCCCCC009999
      9900999999009999990066666600000000000000000000000000000000000000
      000000000000000000000000FF000000800000CCCC0000FFFF0000FFFF0000CC
      CC0000CCCC0000CCCC0000999900000000000000000000000000000000000000
      000000000000000000000000000000000000B2B2B20099999900999999009999
      9900808080000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000CCCC0000FFFF00FFFFFF00C0C0C00000FF
      FF0000CCCC0000CCCC0000CCCC00009999000000000000000000000000000000
      000000000000000000000000000099999900CCCCCC00FFFFFF00C0C0C000CCCC
      CC00999999009999990099999900666666000000000000000000000000000000
      000000000000000000000000000000CCCC0000FFFF00FFFFFF00C0C0C00000FF
      FF0000CCCC0000CCCC0000CCCC00009999000000000000000000000000000000
      00000000000000000000000000000000000000000000B2B2B200999999009999
      9900999999008080800000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000CCCC0000FFFF00FFFFFF00C0C0
      C00000FFFF0000CCCC0000999900993300000000000000000000000000000000
      00000000000000000000000000000000000099999900CCCCCC00FFFFFF00C0C0
      C000CCCCCC009999990066666600666666000000000000000000000000000000
      00000000000000000000000000000000000000CCCC0000FFFF00FFFFFF00C0C0
      C00000FFFF0000CCCC0000999900993300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B2B2B2009999
      9900999999008080800000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000CCCC0000FFFF00FFFF
      FF0000FFFF0000999900CC660000993300000000000000000000000000000000
      0000000000000000000000000000000000000000000099999900CCCCCC00FFFF
      FF00CCCCCC006666660099999900666666000000000000000000000000000000
      0000000000000000000000000000000000000000000000CCCC0000FFFF00FFFF
      FF0000FFFF0000999900CC660000993300000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B2B2
      B200999999008080800000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CCCC0000FF
      FF0000CCCC00CC660000CC660000CC6600000000000000000000000000000000
      000000000000000000000000000000000000000000000000000099999900CCCC
      CC00999999009999990099999900999999000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CCCC0000FF
      FF0000CCCC00CC660000CC660000CC6600000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B2B2B2008080800000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CC
      CC00FF990000FF990000CC660000CC6600000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009999
      9900CCCCCC00CCCCCC0099999900999999000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CC
      CC00FF990000FF990000CC660000CC6600000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000099330000FF990000FF990000CC6600000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000066666600CCCCCC00CCCCCC00999999000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000099330000FF990000FF990000CC6600000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099330000FF990000FF9900000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000066666600CCCCCC00CCCCCC000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099330000FF990000FF9900000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000006666660066666600999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000993300009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300009933000099330000000000000000000000000000999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999009999990099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009999990080808000666666006666
      6600000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      000099330000E5E5E500CC66000099330000E5E5E500E5E5E500E5E5E5009933
      0000CC660000CC66000099330000000000000000000099999900CCCCCC00CCCC
      CC0099999900E5E5E500CCCCCC0099999900E5E5E500E5E5E500E5E5E5009999
      9900CCCCCC00CCCCCC0099999900000000000000000000000000000000000000
      000000CC00000066000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000080808000808080008080
      8000666666009999990000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      000099330000E5E5E500CC66000099330000E5E5E500E5E5E500E5E5E5009933
      0000CC660000CC66000099330000000000000000000099999900CCCCCC00CCCC
      CC0099999900E5E5E500CCCCCC0099999900E5E5E500E5E5E500E5E5E5009999
      9900CCCCCC00CCCCCC00999999000000000000000000000000000000000000CC
      0000009900000099000000660000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099999900808080008080
      8000808080006666660099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      000099330000E5E5E500CC66000099330000E5E5E500E5E5E500E5E5E5009933
      0000CC660000CC66000099330000000000000000000099999900CCCCCC00CCCC
      CC0099999900E5E5E500CCCCCC0099999900E5E5E500E5E5E500E5E5E5009999
      9900CCCCCC00CCCCCC009999990000000000000000000000000000CC00000099
      0000009900000099000000990000006600000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000808080008080
      8000E5E5E500CCCCCC00CCCCCC00999999000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      000099330000E5E5E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E5009933
      0000CC660000CC66000099330000000000000000000099999900CCCCCC00CCCC
      CC0099999900E5E5E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E5009999
      9900CCCCCC00CCCCCC0099999900000000000000000000CC0000009900000099
      0000009900000099000000990000009900000066000000000000000000000000
      0000000000000000000000000000000000000000000000000000999999008080
      8000E5E5E500E5E5E500CCCCCC00CCCCCC0099999900CCCCCC00000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      0000CC660000993300009933000099330000993300009933000099330000CC66
      0000CC660000CC66000099330000000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00999999009999990099999900999999009999990099999900CCCC
      CC00CCCCCC00CCCCCC0099999900000000000000000000CC0000009900000099
      00000066000000CC000000990000009900000099000000660000000000000000
      000000000000000000000000000000000000000000000000000000000000CCCC
      CC00FFFFFF00E5E5E500E5E5E500E5E5E500CCCCCC00CCCCCC00999999000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC660000CC66000099330000000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC0099999900000000000000000000CC0000009900000066
      0000000000000000000000CC0000009900000099000000990000006600000000
      000000000000000000000000000000000000000000000000000000000000CCCC
      CC00FFFFFF00E5E5E500E5E5E500E5E5E500E5E5E500CCCCCC00CCCCCC009999
      9900CCCCCC000000000000000000000000000000000099330000CC660000CC66
      0000993300009933000099330000993300009933000099330000993300009933
      0000CC660000CC66000099330000000000000000000099999900CCCCCC00CCCC
      CC00999999009999990099999900999999009999990099999900999999009999
      9900CCCCCC00CCCCCC0099999900000000000000000000CC0000006600000000
      000000000000000000000000000000CC00000099000000990000009900000066
      0000000000000000000000000000000000000000000000000000000000000000
      0000CCCCCC00FFFFFF00E5E5E500E5E5E500E5E5E500E5E5E500CCCCCC00CCCC
      CC00666666006666660000000000000000000000000099330000CC6600009933
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099330000CC66000099330000000000000000000099999900CCCCCC009999
      9900FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099999900CCCCCC0099999900000000000000000000000000000000000000
      00000000000000000000000000000000000000CC000000990000009900000099
      0000006600000000000000000000000000000000000000000000000000000000
      0000CCCCCC00FFFFFF00E5E5E500E5E5E500CCCCCC0080808000808080006666
      6600666666006666660066666600000000000000000099330000CC6600009933
      0000FFFFFF00993300009933000099330000993300009933000099330000FFFF
      FF0099330000CC66000099330000000000000000000099999900CCCCCC009999
      9900FFFFFF00999999009999990099999900999999009999990099999900FFFF
      FF0099999900CCCCCC0099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000CC0000009900000099
      0000009900000066000000000000000000000000000000000000000000000000
      000000000000CCCCCC00FFFFFF00E5E5E5008080800080808000808080008080
      8000666666006666660066666600666666000000000099330000CC6600009933
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099330000CC66000099330000000000000000000099999900CCCCCC009999
      9900FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099999900CCCCCC0099999900000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CC00000099
      0000009900000066000000000000000000000000000000000000000000000000
      000000000000CCCCCC00FFFFFF00CCCCCC008080800080808000808080008080
      8000808080006666660066666600666666000000000099330000E5E5E5009933
      0000FFFFFF00993300009933000099330000993300009933000099330000FFFF
      FF00993300009933000099330000000000000000000099999900E5E5E5009999
      9900FFFFFF00999999009999990099999900999999009999990099999900FFFF
      FF00999999009999990099999900000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CC
      0000009900000066000000000000000000000000000000000000000000000000
      0000000000000000000099999900999999008080800080808000808080008080
      8000808080008080800066666600666666000000000099330000CC6600009933
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099330000CC66000099330000000000000000000099999900CCCCCC009999
      9900FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099999900CCCCCC0099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CC00000066000000000000000000000000000000000000000000000000
      0000000000000000000066666600999999009999990080808000808080008080
      8000808080008080800080808000666666000000000099330000993300009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300009933000099330000000000000000000099999900999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999009999990099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000666666009999990099999900808080008080
      8000808080008080800080808000808080000000000000000000000000000000
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
      0000000000000000000000000000000000003333330033333300999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900999999009999990099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CCCCCC0066666600333333003333
      3300000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000066666600666666006666
      6600333333009999990000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CCCCCC00666666006666
      6600666666003333330000999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000666666006666
      660099FFFF0099CCCC0099CCCC00009999000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000999999009999
      9900999999009999990099999900CCCCCC00CCCCCC0099999900999999009999
      9900999999009999990000000000000000000000000000000000993300009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300009933000000000000000000000000000000000000999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999009999990000000000000000000000000000000000CCCCCC008080
      8000CCFFFF0099FFFF0099CCCC0099CCCC000099990099CCCC00000000000000
      000000000000000000000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00999999000000000000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC660000993300000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC0099999900000000000000000000000000000000000000000066CC
      CC00FFFFFF00CCFFFF0099FFFF0099FFFF0099CCCC0066CCCC00009999000000
      000000000000000000000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00999999000000000000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC660000993300000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC0099999900000000000000000000000000000000000000000066CC
      CC00FFFFFF00CCFFFF00CCFFFF0099FFFF0099FFFF0099CCCC0099CCCC000099
      990066CCCC000000000000000000000000000000000000000000999999009999
      9900999999009999990099999900CCCCCC00CCCCCC0099999900999999009999
      9900999999009999990000000000000000000000000000000000993300009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300009933000000000000000000000000000000000000999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999009999990000000000000000000000000000000000000000000000
      000099CCCC00FFFFFF00CCFFFF00CCFFFF0099FFFF0099FFFF0099CCCC00FFCC
      CC00993300009933000000000000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000066CCCC00FFFFFF00CCFFFF00CCFFFF00FFCCCC00CC660000CC6600009933
      0000993300009933000099330000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099CCCC00FFFFFF00CCFFFF00CC660000CC660000CC660000CC66
      0000993300009933000099330000993300000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000066CCCC00FFFFFF00FFCCCC00CC660000CC660000CC660000CC66
      0000CC6600009933000099330000993300000000000000000000000000000000
      0000000000000000000099999900999999009999990099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000FF990000FF990000CC660000CC660000CC660000CC66
      0000CC660000CC66000099330000993300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CC660000FF990000FF990000CC660000CC660000CC66
      0000CC660000CC660000CC660000993300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000CC660000FF990000FF990000CC660000CC66
      0000CC660000CC660000CC660000CC6600000000000000000000000000000000
      0000000000000000000000000000000000000000000099999900999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E2EFF100000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E2EFF100000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099999900CCCCCC009999
      990000000000000000000000000000000000000000000000000000000000E2EF
      F100E5E5E500CCCCCC00E5E5E500E2EFF1000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E2EF
      F10000000000CCCCCC00E5E5E500E2EFF1000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009999990099999900999999009999
      9900999999009999990099999900999999009999990099999900CCCCCC00CCCC
      CC009999990000000000000000000000000000000000E2EFF100E5E5E500B2B2
      B200CC9999009966660099666600B2B2B200CCCCCC00E5E5E500E2EFF1000000
      00000000000000000000000000000000000000000000E2EFF10000000000B2B2
      B200999999009999990099999900B2B2B200CCCCCC0000000000E2EFF1000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000993300009933000099330000000000000000
      0000000000000000000000000000000000009999990000000000000000000000
      0000000000000000000000000000000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00999999000000000000000000E5E5E500CC99990099666600CC99
      9900CC999900FFFFFF00996666009999990099999900B2B2B200E5E5E5000000
      0000000000000000000000000000000000000000000099999900999999009999
      990099999900FFFFFF00999999009999990099999900B2B2B200000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000009999990000000000CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC0099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00999999000000000099666600CC999900FFCC9900FFCC
      9900FFCCCC00FFFFFF0099666600336699003366990033669900E2EFF1000000
      0000000000000000000000000000000000009999990099999900C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900999999009999990099999900E2EFF1000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000009999990000000000000000000000
      0000000000000000000000000000000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC009999990099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF009966660066CCCC0066CCCC000099CC00FFFFFF00FFCC
      CC000000000000000000000000000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900C0C0C000C0C0C00099999900FFFFFF00CCCC
      CC00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000009999990000000000CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC0099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00999999000000000099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF009966660066CCCC0066CCFF003399CC00FFCCCC00CC66
      00000000000000000000000000000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900C0C0C000CCCCCC0099999900CCCCCC009999
      9900000000000000000000000000000000000000000000000000993300009933
      0000993300009933000099330000CC660000CC66000099330000993300009933
      0000993300009933000000000000000000009999990000000000000000000000
      0000000000000000000000000000000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC0099999900000000000000000099666600FFCC9900CC999900CC99
      6600FFCCCC00FFFFFF009966660099CCCC0099CCFF00B2B2B200FF660000CC66
      00000000000000000000000000000000000099999900C0C0C000999999009999
      9900CCCCCC00FFFFFF0099999900CCCCCC00CCCCCC00B2B2B200999999009999
      990000000000000000000000000000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC6600009933000000000000000000009999990000000000CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC0099999900CCCCCC00CCCC
      CC009999990000000000000000000000000099666600FFCC990099666600FFFF
      FF00FFCCCC00FFFFFF009966660099CCCC00C0C0C000CC660000CC660000CC66
      0000CC660000CC660000CC6600000000000099999900C0C0C00066666600FFFF
      FF00CCCCCC00FFFFFF0099999900CCCCCC00C0C0C00099999900999999009999
      990099999900999999009999990000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC6600009933000000000000000000009999990000000000000000000000
      0000000000000000000000000000000000000000000099999900CCCCCC009999
      99000000000000000000000000000000000099666600FFCC9900CC9999009966
      6600FFCCCC00FFFFFF009966660000000000CC660000CC660000CC660000CC66
      0000CC660000CC660000CC6600000000000099999900C0C0C000999999006666
      6600CCCCCC00FFFFFF0099999900E5E5E5009999990099999900999999009999
      9900999999009999990099999900000000000000000000000000993300009933
      0000993300009933000099330000CC660000CC66000099330000993300009933
      0000993300009933000000000000000000009999990000000000CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC0099999900999999009999
      99000000000000000000000000000000000099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF009966660000000000CC999900CC660000CC660000CC66
      0000CC660000CC660000CC6600000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900E5E5E5009999990099999900999999009999
      9900999999009999990099999900000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000009999990000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009999
      99000000000000000000000000000000000099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF0099666600CCCCCC00E2EFF100CC999900FF660000CC66
      00000000000000000000000000000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900CCCCCC00E2EFF10099999900999999009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000009999990000000000CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00000000009999
      99000000000000000000000000000000000099666600FFCC9900FFCC9900FFCC
      9900FFCCCC00FFFFFF009966660099CCCC000000000099CCCC00FFCC9900CC66
      00000000000000000000000000000000000099999900C0C0C000C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900CCCCCC00E5E5E500CCCCCC00C0C0C0009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000009999990000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009999
      99000000000000000000000000000000000099666600CC999900FFCC9900FFCC
      9900FFCCCC00FFFFFF0099666600CCCCCC00000000003399CC0000000000FFCC
      9900000000000000000000000000000000009999990099999900C0C0C000C0C0
      C000CCCCCC00FFFFFF0099999900CCCCCC00E5E5E5009999990000000000C0C0
      C000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000993300009933000099330000000000000000
      0000000000000000000000000000000000009999990000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009999
      99000000000000000000000000000000000000000000C0C0C000CC996600CC99
      9900CCCC9900FFFFFF00996666000099CC000099CC000099CC00000000000000
      00000000000000000000000000000000000000000000C0C0C000999999009999
      9900C0C0C000FFFFFF0099999900999999009999990099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009999990099999900999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      990000000000000000000000000000000000000000000000000000000000CCCC
      CC00CC9999009966660099666600000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CCCC
      CC00999999009999990099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000993300000000
      0000000000000000000000000000000000000000000000000000999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999009999990099999900000000000000000000000000993300009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300000000000000000000000000000000000000000000999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000CC6600009933
      0000000000000000000000000000000000000000000099999900CCCCCC00CCCC
      CC0099999900E5E5E500CCCCCC0099999900E5E5E500E5E5E500E5E5E5009999
      9900CCCCCC00CCCCCC00999999000000000000000000CC996600FFCC9900FFCC
      9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC9900CC99
      6600CC99660099330000000000000000000000000000B2B2B200CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00B2B2
      B200B2B2B200999999000000000000000000CC996600CC996600CC996600CC99
      6600CC996600CC996600CC996600CC996600CC99660099330000CC660000CC66
      0000993300000000000000000000000000000000000099999900CCCCCC00CCCC
      CC0099999900E5E5E500CCCCCC0099999900E5E5E500E5E5E500E5E5E5009999
      9900CCCCCC00CCCCCC009999990000000000CC996600CC996600CC996600CC99
      6600CC996600CC996600CC996600CC996600CC996600CC996600CC996600CC99
      660099330000CC9966009933000000000000B2B2B200B2B2B200B2B2B200B2B2
      B200B2B2B200B2B2B200B2B2B200B2B2B200B2B2B200B2B2B200B2B2B200B2B2
      B20099999900B2B2B2009999990000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0099330000CC660000CC66
      0000CC6600009933000000000000000000000000000099999900CCCCCC00CCCC
      CC0099999900E5E5E500CCCCCC0099999900E5E5E500E5E5E500E5E5E5009999
      9900CCCCCC00CCCCCC009999990000000000CC996600FFFFFF00FFCC9900FFCC
      9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC
      9900CC996600993300009933000000000000B2B2B20000000000CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00B2B2B200999999009999990000000000CC996600FFFFFF00E5E5E500E5E5
      E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E50099330000CC660000CC66
      0000CC660000CC66000099330000000000000000000099999900CCCCCC00CCCC
      CC0099999900E5E5E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E5009999
      9900CCCCCC00CCCCCC009999990000000000CC996600FFFFFF00FFCC9900FFCC
      9900FFCC9900FFCC990000CC000000990000FFCC99000000FF000000CC00FFCC
      9900CC996600CC9966009933000000000000B2B2B20000000000CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00B2B2B20099999900CCCCCC00B2B2B20099999900CCCC
      CC00B2B2B200B2B2B2009999990000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0099330000CC660000CC66
      0000CC660000CC660000CC660000993300000000000099999900CCCCCC00CCCC
      CC00CCCCCC00999999009999990099999900999999009999990099999900CCCC
      CC00CCCCCC00CCCCCC009999990000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CC996600CC996600CC99660099330000B2B2B20000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B2B2B200B2B2B200B2B2B20099999900CC996600FFFFFF00E5E5E500E5E5
      E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E50099330000CC660000CC66
      0000CC660000CC66000099330000000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC009999990000000000CC996600FFFFFF00FFCC9900FFCC
      9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC9900FFCC
      9900CC996600CC996600CC99660099330000B2B2B20000000000CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00B2B2B200B2B2B200B2B2B20099999900CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0099330000CC660000CC66
      0000CC6600009933000000000000000000000000000099999900CCCCCC00CCCC
      CC00999999009999990099999900999999009999990099999900999999009999
      9900CCCCCC00CCCCCC00999999000000000000000000CC996600CC996600CC99
      6600CC996600CC996600CC996600CC996600CC996600CC996600CC996600FFCC
      9900FFCC9900CC996600CC9966009933000000000000B2B2B200B2B2B200B2B2
      B200B2B2B200B2B2B200B2B2B200B2B2B200B2B2B200B2B2B200B2B2B200CCCC
      CC00CCCCCC00B2B2B200B2B2B20099999900CC996600FFFFFF00E5E5E500E5E5
      E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E50099330000CC660000CC66
      0000993300000000000000000000000000000000000099999900CCCCCC009999
      9900FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099999900CCCCCC0099999900000000000000000000000000CC996600FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CC99
      6600FFCC9900FFCC9900CC996600993300000000000000000000B2B2B2000000
      000000000000000000000000000000000000000000000000000000000000B2B2
      B200CCCCCC00CCCCCC00B2B2B20099999900CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0099330000CC6600009933
      0000000000000000000000000000000000000000000099999900CCCCCC009999
      9900FFFFFF00999999009999990099999900999999009999990099999900FFFF
      FF0099999900CCCCCC009999990000000000000000000000000000000000CC99
      6600FFFFFF00E5E5E500E5E5E500E5E5E500E5E5E500E5E5E500FFFFFF00CC99
      6600CC996600CC9966009933000000000000000000000000000000000000B2B2
      B20000000000CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC0000000000B2B2
      B200B2B2B200B2B2B2009999990000000000CC996600FFFFFF00E5E5E500E5E5
      E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E5009933000099330000CC99
      6600000000000000000000000000000000000000000099999900CCCCCC009999
      9900FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099999900CCCCCC009999990000000000000000000000000000000000CC99
      6600FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CC996600000000000000000000000000000000000000000000000000B2B2
      B200000000000000000000000000000000000000000000000000000000000000
      0000B2B2B200000000000000000000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CC99
      6600000000000000000000000000000000000000000099999900E5E5E5009999
      9900FFFFFF00999999009999990099999900999999009999990099999900FFFF
      FF00999999009999990099999900000000000000000000000000000000000000
      0000CC996600FFFFFF00E5E5E500E5E5E500E5E5E500E5E5E500E5E5E500FFFF
      FF00CC9966000000000000000000000000000000000000000000000000000000
      0000B2B2B20000000000CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC000000
      0000B2B2B200000000000000000000000000CC996600FFFFFF00E5E5E500E5E5
      E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E500FFFFFF00CC99
      6600000000000000000000000000000000000000000099999900CCCCCC009999
      9900FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099999900CCCCCC0099999900000000000000000000000000000000000000
      0000CC996600FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CC99660000000000000000000000000000000000000000000000
      0000B2B2B2000000000000000000000000000000000000000000000000000000
      000000000000B2B2B2000000000000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CC99
      6600000000000000000000000000000000000000000099999900999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999009999990099999900000000000000000000000000000000000000
      000000000000CC996600CC996600CC996600CC996600CC996600CC996600CC99
      6600CC996600CC99660000000000000000000000000000000000000000000000
      000000000000B2B2B200B2B2B200B2B2B200B2B2B200B2B2B200B2B2B200B2B2
      B200B2B2B200B2B2B2000000000000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CC99
      6600000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CC996600CC996600CC996600CC99
      6600CC996600CC996600CC996600CC996600CC996600CC996600CC996600CC99
      6600000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000003333330033333300999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000006666660066666600999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000993300009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300009933000099330000000000000000000000000000000000000000
      0000B2B2B2009999990099999900B2B2B2000000000000000000000000000000
      000000000000000000000000000000000000CCCCCC0066666600333333003333
      3300000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009999990080808000666666006666
      6600000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      000099330000E5E5E500CC66000099330000E5E5E500E5E5E500E5E5E5009933
      0000CC660000CC66000099330000000000000000000000000000000000009999
      990099999900CCCCCC00CCCCCC00999999000000000000000000000000000000
      0000000000000000000000000000000000000000000066666600666666006666
      6600333333009999990000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000080808000808080008080
      8000666666009999990000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      000099330000E5E5E500CC66000099330000E5E5E500E5E5E500E5E5E5009933
      0000CC660000CC6600009933000000000000000000000000000099999900CCCC
      CC00CCCCCC009999990099999900B2B2B2000000000000000000000000000000
      00000000000000000000000000000000000000000000CCCCCC00666666006666
      6600666666003333330000999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099999900808080008080
      8000808080006666660099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      000099330000E5E5E500CC66000099330000E5E5E500E5E5E500E5E5E5009933
      0000CC660000CC660000993300000000000000000000B2B2B20099999900CCCC
      CC0099999900B2B2B20000000000000000009999990099999900999999009999
      9900999999009999990099999900000000000000000000000000666666006666
      660099FFFF0099CCCC0099CCCC00009999000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000808080008080
      8000E5E5E500CCCCCC00CCCCCC00999999000000000000000000000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      000099330000E5E5E500E5E5E500E5E5E500E5E5E500E5E5E500E5E5E5009933
      0000CC660000CC66000099330000000000000000000099999900CCCCCC009999
      9900B2B2B20000000000000000000000000099999900CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC0099999900000000000000000000000000CCCCCC008080
      8000CCFFFF0099FFFF0099CCCC0099CCCC000099990099CCCC00000000000000
      0000000000000000000000000000000000000000000000000000999999008080
      8000E5E5E500E5E5E500CCCCCC00CCCCCC0099999900CCCCCC00000000000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      0000CC660000993300009933000099330000993300009933000099330000CC66
      0000CC660000CC66000099330000000000000000000099999900CCCCCC009999
      9900000000000000000000000000000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00999999000000000000000000000000000000000066CC
      CC00FFFFFF00CCFFFF0099FFFF0099FFFF0099CCCC0066CCCC00009999000000
      000000000000000000000000000000000000000000000000000000000000CCCC
      CC00FFFFFF00E5E5E500E5E5E500E5E5E500CCCCCC00CCCCCC00999999000000
      0000000000000000000000000000000000000000000099330000CC660000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC660000CC66000099330000000000000000000099999900CCCCCC009999
      9900B2B2B20000000000000000000000000000000000B2B2B20099999900CCCC
      CC00CCCCCC00CCCCCC00999999000000000000000000000000000000000066CC
      CC00FFFFFF00CCFFFF00CCFFFF0099FFFF0099FFFF0099CCCC0099CCCC000099
      990066CCCC00000000000000000000000000000000000000000000000000CCCC
      CC00FFFFFF00E5E5E500E5E5E500E5E5E500E5E5E500CCCCCC00CCCCCC009999
      9900CCCCCC000000000000000000000000000000000099330000CC660000CC66
      0000993300009933000099330000993300009933000099330000993300009933
      0000CC660000CC660000993300000000000000000000B2B2B20099999900CCCC
      CC0099999900B2B2B20000000000B2B2B2009999990099999900CCCCCC009999
      9900CCCCCC00CCCCCC0099999900000000000000000000000000000000000000
      000099CCCC00FFFFFF00CCFFFF00CCFFFF0099FFFF0099FFFF0099CCCC00FFCC
      CC00993300009933000000000000000000000000000000000000000000000000
      0000CCCCCC00FFFFFF00E5E5E500E5E5E500E5E5E500E5E5E500CCCCCC00CCCC
      CC00666666006666660000000000000000000000000099330000CC6600009933
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099330000CC6600009933000000000000000000000000000099999900CCCC
      CC00CCCCCC00999999009999990099999900CCCCCC00CCCCCC0099999900B2B2
      B20099999900CCCCCC0099999900000000000000000000000000000000000000
      000066CCCC00FFFFFF00CCFFFF00CCFFFF00FFCCCC00CC660000CC6600009933
      0000993300009933000099330000000000000000000000000000000000000000
      0000CCCCCC00FFFFFF00E5E5E500E5E5E500CCCCCC0080808000808080006666
      6600666666006666660066666600000000000000000099330000CC6600009933
      0000FFFFFF00993300009933000099330000993300009933000099330000FFFF
      FF0099330000CC66000099330000000000000000000000000000000000009999
      990099999900CCCCCC00CCCCCC00CCCCCC009999990099999900000000000000
      0000000000009999990099999900000000000000000000000000000000000000
      00000000000099CCCC00FFFFFF00CCFFFF00CC660000CC660000CC660000CC66
      0000993300009933000099330000993300000000000000000000000000000000
      000000000000CCCCCC00FFFFFF00E5E5E5008080800080808000808080008080
      8000666666006666660066666600666666000000000099330000CC6600009933
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099330000CC66000099330000000000000000000000000000000000000000
      0000B2B2B200999999009999990099999900B2B2B20000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000066CCCC00FFFFFF00FFCCCC00CC660000CC660000CC660000CC66
      0000CC6600009933000099330000993300000000000000000000000000000000
      000000000000CCCCCC00FFFFFF00CCCCCC008080800080808000808080008080
      8000808080006666660066666600666666000000000099330000E5E5E5009933
      0000FFFFFF00993300009933000099330000993300009933000099330000FFFF
      FF00993300009933000099330000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000FF990000FF990000CC660000CC660000CC660000CC66
      0000CC660000CC66000099330000993300000000000000000000000000000000
      0000000000000000000099999900999999008080800080808000808080008080
      8000808080008080800066666600666666000000000099330000CC6600009933
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0099330000CC66000099330000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CC660000FF990000FF990000CC660000CC660000CC66
      0000CC660000CC660000CC660000993300000000000000000000000000000000
      0000000000000000000066666600999999009999990080808000808080008080
      8000808080008080800080808000666666000000000099330000993300009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300009933000099330000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000CC660000FF990000FF990000CC660000CC66
      0000CC660000CC660000CC660000CC6600000000000000000000000000000000
      0000000000000000000000000000666666009999990099999900808080008080
      8000808080008080800080808000808080000000000000000000000000000000
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
      0000000000000000000099999900999999009999990099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CC9966009933000099330000CC9966000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009933
      000099330000CC660000CC660000993300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000099330000CC66
      0000CC6600009933000099330000CC9966000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CC99660099330000CC66
      000099330000CC99660000000000000000009933000099330000993300009933
      0000993300009933000099330000000000000000000000000000999999009999
      9900999999009999990099999900CCCCCC00CCCCCC0099999900999999009999
      9900999999009999990000000000000000000000000000000000993300009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300009933000000000000000000000000000000000000999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999009999990000000000000000000000000099330000CC6600009933
      0000CC99660000000000000000000000000099330000CC660000CC660000CC66
      0000CC660000CC6600009933000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00999999000000000000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC660000993300000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC009999990000000000000000000000000099330000CC6600009933
      0000000000000000000000000000000000000000000099330000CC660000CC66
      0000CC660000CC6600009933000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00999999000000000000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC660000993300000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC009999990000000000000000000000000099330000CC6600009933
      0000CC99660000000000000000000000000000000000CC99660099330000CC66
      0000CC660000CC66000099330000000000000000000000000000999999009999
      9900999999009999990099999900CCCCCC00CCCCCC0099999900999999009999
      9900999999009999990000000000000000000000000000000000993300009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300009933000000000000000000000000000000000000999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      99009999990099999900000000000000000000000000CC99660099330000CC66
      000099330000CC99660000000000CC9966009933000099330000CC6600009933
      0000CC660000CC66000099330000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000099330000CC66
      0000CC660000993300009933000099330000CC660000CC66000099330000CC99
      660099330000CC66000099330000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009933
      000099330000CC660000CC660000CC6600009933000099330000000000000000
      0000000000009933000099330000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CC996600993300009933000099330000CC99660000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900999999009999990099999900000000000000
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
      000000000000CCCCCC00999999009999990099999900CCCCCC00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CCCCCC009999990000000000000000000000000099999900CCCCCC000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000000000000000000000000000000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CC00000066000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B2B2B2008080800000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000993300009933000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009999990000000000CCCCCC0099999900CCCCCC0000000000999999000000
      00000000000000000000000000000000000000000000000000000000000000CC
      0000009900000099000000660000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B2B2
      B200999999009999990080808000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      000000000000000000000000000000000000000000000000000000CC00000099
      0000009900000099000000990000006600000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B2B2B2009999
      9900999999009999990099999900808080000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000CC0000009900000099
      0000009900000099000000990000009900000066000000000000000000000000
      00000000000000000000000000000000000000000000B2B2B200999999009999
      9900999999009999990099999900999999008080800000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000CC0000009900000099
      00000066000000CC000000990000009900000099000000660000000000000000
      00000000000000000000000000000000000000000000B2B2B200999999009999
      990080808000B2B2B20099999900999999009999990080808000000000000000
      0000000000000000000000000000000000000000000000000000993300009933
      0000993300009933000099330000CC660000CC66000099330000993300009933
      0000993300009933000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000CC0000009900000066
      0000000000000000000000CC0000009900000099000000990000006600000000
      00000000000000000000000000000000000000000000B2B2B200999999008080
      80000000000000000000B2B2B200999999009999990099999900808080000000
      000000000000000000000000000000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC6600009933000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000CC0000006600000000
      000000000000000000000000000000CC00000099000000990000009900000066
      00000000000000000000000000000000000000000000B2B2B200808080000000
      0000000000000000000000000000B2B2B2009999990099999900999999008080
      800000000000000000000000000000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000CC6600009933000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000CC000000990000009900000099
      0000006600000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000B2B2B20099999900999999009999
      9900808080000000000000000000000000000000000000000000993300009933
      0000993300009933000099330000CC660000CC66000099330000993300009933
      0000993300009933000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000CC0000009900000099
      0000009900000066000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000B2B2B200999999009999
      9900999999008080800000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CC00000099
      0000009900000066000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000B2B2B2009999
      9900999999008080800000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900000000000000000000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CC
      0000009900000066000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000B2B2
      B200999999008080800000000000000000000000000000000000000000000000
      0000000000000000000099330000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900000000000000000000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000CC00000066000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B2B2B2008080800000000000000000000000000000000000000000000000
      0000000000000000000099330000993300009933000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900000000000000000000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000999999009999990099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CC996600993300009933000099330000CC996600000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CCCCCC00999999009999990099999900CCCCCC00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CC996600993300009933000099330000CC996600000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CC9966009933000000000000000000000000000099330000CC9966000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CCCCCC009999990000000000000000000000000099999900CCCCCC000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CC9966009933000000000000000000000000000099330000CC9966000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000000000000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000000000000000000000000000000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000000000000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009933000000000000CC99660099330000CC99660000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009999990000000000CCCCCC0099999900CCCCCC0000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009933000000000000CC99660099330000CC99660000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900000000000000000000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900000000000000000000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900000000000000000000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000993300009933000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000999999009999990099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000993300009933000099330000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000A00000000100010000000000000500000000000000000000
      000000000000000000000000FFFFFF00A7FF00000000000001FF000000000000
      007F000000000000003F000000000000001F000000000000500F000000000000
      F007000000000000F803000000000000FC01000000000000FE00000000000000
      FF00000000000000FF80000000000000FFC0000000000000FFE0000000000000
      FFF0000000000000FFF8000000000000FFFFA7FFA7FFA7FFFFFF01FF01FF01FF
      F3FF007F007F007FE1FF003F003F003FC0FF001F001F001F807F500F500F500F
      803FF007F007F0078C1FF803F803F8039E0FFC01FC01FC01FF07FE00FE00FE00
      FF83FF00FF00FF00FFC3FF80FF80FF80FFE3FFC0FFC0FFC0FFF3FFE0FFE0FFE0
      FFFFFFF0FFF0FFF0FFFFFFF8FFF8FFF8FFFFFFFFFFFFFFFF1FFFC001C001FFFF
      0FFF80018001F3FF83FF80018001E1FF81FF80018001C0FFC0FF80018001807F
      C03F80018001803FE01F800180018C1FE007800180019E0FF00380018001FF07
      F00180018001FF83F80080018001FFC3F80080018001FFE3FC0080018001FFF3
      FC0080018001FFFFFE00FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF1FFF
      FC3FFFFFFFFF0FFFFC3FFFFFFFFF83FFFC3FFFFFFFFF81FFFC3FFFFFFFFFC0FF
      C003C003C003C03FC003C003C003E01FC003C003C003E007C003C003C003F003
      FC3FFFFFFFFFF001FC3FFFFFFFFFF800FC3FFFFFFFFFF800FC3FFFFFFFFFFC00
      FFFFFFFFFFFFFC00FFFFFFFFFFFFFE00FF9FFDFFFDFFFFFFFF8FE0FFE8FFFFFF
      0007801FA05FFC3F7F83001F803FFC3F4001001F001FFC3F7F80000F000FFC3F
      4001000F000FC0037F83000F000FC003400700010001C0037F8F01010001C003
      400F01010001FC3F7FEF000F000FFC3F402F008F000FFC3F7FEF00AF002FFC3F
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
  object QNE_Axapta: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <
      item
        Name = 'D0'
        DataType = ftString
        Size = -1
        Value = Null
      end>
    SQL.Strings = (
      'DECLARE @StrFind varchar(128);'
      'SET @StrFind =:D0;'
      ''
      
        'SELECT A.Idn,A.ItemName,A.ItemId,B.iText iTextId24ItemType,A.iYe' +
        'ar,A.NDS'
      'FROM ax_Nomenclatura A'
      'LEFT JOIN spl_LbText24 B ON B.Idn=A.Id24ItemType'
      'WHERE A.DateDel is null AND'
      '(A.ItemId like '#39'%'#39'+@StrFind+'#39'%'#39
      'OR'
      'A.ItemName like '#39'%'#39'+@StrFind+ '#39'%'#39
      ')'
      '')
    Left = 131
    Top = 243
    object QNE_AxaptaIdn: TIntegerField
      FieldName = 'Idn'
    end
    object QNE_AxaptaItemName: TWideStringField
      FieldName = 'ItemName'
      Size = 256
    end
    object QNE_AxaptaItemId: TWideStringField
      FieldName = 'ItemId'
      Size = 24
    end
    object QNE_AxaptaiTextId24ItemType: TStringField
      FieldName = 'iTextId24ItemType'
      Size = 24
    end
    object QNE_AxaptaiYear: TSmallintField
      FieldName = 'iYear'
    end
    object QNE_AxaptaNDS: TBCDField
      FieldName = 'NDS'
      Precision = 19
    end
  end
  object DSNE_Axapta: TDataSource
    DataSet = QNE_Axapta
    OnDataChange = DSNE_AxaptaDataChange
    Left = 131
    Top = 301
  end
  object TmNE_Axapta: TTimer
    Enabled = False
    Interval = 200
    OnTimer = TmNE_AxaptaTimer
    Left = 128
    Top = 349
  end
  object ADOQuery1: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <
      item
        Name = 'D0'
        DataType = ftString
        Size = -1
        Value = Null
      end>
    SQL.Strings = (
      'DECLARE @StrFind varchar(128);'
      'SET @StrFind =:D0;'
      ''
      
        'SELECT A.Idn,A.ItemName,A.ItemId,B.iText iTextId24ItemType,A.iYe' +
        'ar,A.NDS'
      'FROM ax_Nomenclatura A'
      'LEFT JOIN spl_LbText24 B ON B.Idn=A.Id24ItemType'
      'WHERE A.DateDel is null AND'
      '(A.ItemId like '#39'%'#39'+@StrFind+'#39'%'#39
      'OR'
      'A.ItemName like '#39'%'#39'+@StrFind+ '#39'%'#39
      ')'
      '')
    Left = 563
    Top = 243
    object IntegerField1: TIntegerField
      FieldName = 'Idn'
    end
    object WideStringField1: TWideStringField
      FieldName = 'ItemName'
      Size = 256
    end
    object WideStringField2: TWideStringField
      FieldName = 'ItemId'
      Size = 24
    end
    object StringField1: TStringField
      FieldName = 'iTextId24ItemType'
      Size = 24
    end
    object SmallintField1: TSmallintField
      FieldName = 'iYear'
    end
    object BCDField1: TBCDField
      FieldName = 'NDS'
      Precision = 19
    end
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    OnDataChange = DataSource1DataChange
    Left = 563
    Top = 301
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 200
    OnTimer = Timer1Timer
    Left = 560
    Top = 349
  end
end
