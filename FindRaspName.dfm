object FrFindRaspName: TFrFindRaspName
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = #1042#1099#1073#1086#1088' '#1096#1072#1073#1083#1086#1085#1072' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
  ClientHeight = 563
  ClientWidth = 857
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
  OnKeyDown = FormKeyDown
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 0
    Width = 857
    Height = 17
    Align = alTop
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 0
    VisualStyle = vsGradient
  end
  object RzPanel2: TRzPanel
    Left = 0
    Top = 17
    Width = 857
    Height = 546
    Align = alClient
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 1
    VisualStyle = vsGradient
    object cxGridRaspName: TcxGrid
      AlignWithMargins = True
      Left = 3
      Top = 1
      Width = 851
      Height = 516
      Margins.Left = 2
      Margins.Top = 0
      Margins.Right = 2
      Margins.Bottom = 2
      Align = alClient
      BevelInner = bvNone
      BevelOuter = bvNone
      BorderStyle = cxcbsNone
      Font.Charset = RUSSIAN_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
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
        DataController.DataSource = DSRaspName
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
        Styles.Header = cxStyle1
        Styles.BandHeader = cxStyle1
        Bands = <
          item
            Width = 371
          end>
        object cxGridTableViewEmplUserDateRasp: TcxGridDBBandedColumn
          Caption = #1044#1072#1090#1072' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
          DataBinding.FieldName = 'DateRasp'
          Width = 124
          Position.BandIndex = 0
          Position.ColIndex = 0
          Position.RowIndex = 0
        end
        object cxGridTableViewEmplUserNumbRaspName: TcxGridDBBandedColumn
          Caption = #1053#1086#1084#1077#1088' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
          DataBinding.FieldName = 'NumbRaspName'
          Width = 131
          Position.BandIndex = 0
          Position.ColIndex = 1
          Position.RowIndex = 0
        end
        object cxGridTableViewEmplUserRaspName: TcxGridDBBandedColumn
          Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1088#1072#1089#1087#1086#1088#1103#1078#1077#1085#1080#1103
          DataBinding.FieldName = 'RaspName'
          Styles.Header = cxStyle1
          Width = 584
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
    object RzGroupBoxMenedger1: TRzGroupBox
      Left = 1
      Top = 519
      Width = 855
      Height = 26
      Align = alBottom
      GroupStyle = gsCustom
      TabOrder = 1
      Transparent = True
      object RzSpacer8: TRzSpacer
        Left = 2
        Top = 2
        Width = 4
        Height = 22
        Grooved = True
        Align = alLeft
        ExplicitLeft = 471
        ExplicitHeight = 24
      end
      object RzSpacer1: TRzSpacer
        Left = 194
        Top = 2
        Width = 4
        Height = 22
        Grooved = True
        Align = alLeft
        ExplicitLeft = 471
        ExplicitHeight = 24
      end
      object RzSpacer2: TRzSpacer
        Left = 849
        Top = 2
        Width = 4
        Height = 22
        Grooved = True
        Align = alRight
        ExplicitLeft = 471
        ExplicitHeight = 24
      end
      object btGiveRaspName: TRzToolButton
        Left = 6
        Top = 2
        Width = 188
        Height = 22
        GradientColorStyle = gcsMSOffice
        ImageIndex = 41
        Images = FrBisniessMenedger.ImageList1
        ShowCaption = True
        UseToolbarButtonLayout = False
        UseToolbarButtonSize = False
        UseToolbarShowCaption = False
        UseToolbarVisualStyle = False
        VisualStyle = vsGradient
        Align = alLeft
        Caption = #1042#1099#1073#1088#1072#1090#1100
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        OnClick = btGiveRaspNameClick
      end
      object btClose: TRzToolButton
        Left = 661
        Top = 2
        Width = 188
        Height = 22
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
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        OnClick = btCloseClick
        ExplicitLeft = 198
      end
      object RzSpacer3: TRzSpacer
        Left = 657
        Top = 2
        Width = 4
        Height = 22
        Grooved = True
        Align = alRight
        ExplicitLeft = 471
        ExplicitHeight = 24
      end
    end
  end
  object TmRaspName: TTimer
    Enabled = False
    Interval = 200
    OnTimer = TmRaspNameTimer
    Left = 184
    Top = 120
  end
  object DSRaspName: TDataSource
    AutoEdit = False
    DataSet = QRaspName
    Left = 232
    Top = 120
  end
  object QRaspName: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      
        'SELECT    Idn,DateRasp, NumbRaspName, RaspName, RaspNameRTF, Con' +
        'tentTargetRTF, ContentRTF   FROM bm_Rasp WHERE RaspName is not n' +
        'ull  and LEN(RaspName)>0 AND DateDel is null'
      'ORDER BY RaspName')
    Left = 272
    Top = 120
    object QRaspNameIdn: TIntegerField
      FieldName = 'Idn'
      ReadOnly = True
    end
    object QRaspNameRaspName: TStringField
      FieldName = 'RaspName'
      Size = 1024
    end
    object QRaspNameRaspNameRTF: TMemoField
      FieldName = 'RaspNameRTF'
      BlobType = ftMemo
    end
    object QRaspNameContentTargetRTF: TMemoField
      FieldName = 'ContentTargetRTF'
      BlobType = ftMemo
    end
    object QRaspNameContentRTF: TMemoField
      FieldName = 'ContentRTF'
      BlobType = ftMemo
    end
    object QRaspNameDateRasp: TDateTimeField
      FieldName = 'DateRasp'
      OnGetText = QRaspNameDateRaspGetText
    end
    object QRaspNameNumbRaspName: TStringField
      FieldName = 'NumbRaspName'
      Size = 24
    end
  end
  object cxStyleRepository1: TcxStyleRepository
    PixelsPerInch = 96
    object cxStyle1: TcxStyle
      AssignedValues = [svColor]
      Color = 15329769
    end
  end
end
