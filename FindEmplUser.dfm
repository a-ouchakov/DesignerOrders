object FrEmplUser: TFrEmplUser
  Left = 486
  Top = 186
  BorderIcons = [biSystemMenu]
  Caption = #1055#1086#1080#1089#1082' '#1080' '#1076#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1076#1086#1083#1078#1085#1086#1089#1090#1085#1086#1075#1086' '#1083#1080#1094#1072
  ClientHeight = 563
  ClientWidth = 392
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
    Width = 392
    Height = 42
    Align = alTop
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 0
    VisualStyle = vsGradient
    object RzGroupBox1: TRzGroupBox
      Left = 1
      Top = 1
      Width = 390
      Height = 16
      Align = alTop
      Caption = #1042#1074#1077#1076#1080#1090#1077' '#1080#1089#1082#1086#1084#1091#1102' '#1092#1072#1084#1080#1083#1080#1102
      GroupStyle = gsCustom
      TabOrder = 0
      Transparent = True
    end
    object edEmplUser: TRzEdit
      AlignWithMargins = True
      Left = 2
      Top = 18
      Width = 388
      Height = 22
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      Align = alClient
      FrameHotTrack = True
      FrameVisible = True
      TabOrder = 1
      OnChange = edEmplUserChange
      ExplicitHeight = 21
    end
  end
  object RzPanel2: TRzPanel
    Left = 0
    Top = 42
    Width = 392
    Height = 521
    Align = alClient
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 1
    VisualStyle = vsGradient
    object cxGridEmplUser: TcxGrid
      AlignWithMargins = True
      Left = 3
      Top = 1
      Width = 386
      Height = 491
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
        OnCellClick = cxGridTableViewEmplUserCellClick
        DataController.DataSource = DSEmplUser
        DataController.Summary.DefaultGroupSummaryItems = <>
        DataController.Summary.FooterSummaryItems = <>
        DataController.Summary.SummaryGroups = <>
        OptionsCustomize.ColumnsQuickCustomization = True
        OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
        OptionsCustomize.BandMoving = False
        OptionsSelection.CellSelect = False
        OptionsView.CellAutoHeight = True
        OptionsView.ColumnAutoWidth = True
        OptionsView.GroupByBox = False
        OptionsView.BandHeaders = False
        Styles.Inactive = cxStyle3
        Styles.Header = cxStyle2
        Styles.Indicator = cxStyle2
        Styles.BandHeader = cxStyle2
        Bands = <
          item
            Width = 342
          end>
        object cxGridTableViewEmplUserFamIO: TcxGridDBBandedColumn
          Caption = #1060#1072#1084#1080#1083#1080#1103' '#1048'.'#1054'.'
          DataBinding.FieldName = 'FamIO'
          Width = 94
          Position.BandIndex = 0
          Position.ColIndex = 0
          Position.RowIndex = 0
        end
        object cxGridTableViewEmplUserDol: TcxGridDBBandedColumn
          Caption = #1044#1086#1083#1078#1085#1086#1089#1090#1100
          DataBinding.FieldName = 'Dol'
          Width = 194
          Position.BandIndex = 0
          Position.ColIndex = 1
          Position.RowIndex = 0
        end
        object cxGridTableViewEmplUserColumn1: TcxGridDBBandedColumn
          Caption = #1070#1088'. '#1083#1080#1094#1086
          DataBinding.FieldName = 'NameUR'
          Styles.Content = cxStyle1
          Width = 70
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
      Top = 494
      Width = 390
      Height = 26
      Align = alBottom
      GroupStyle = gsCustom
      TabOrder = 1
      Transparent = True
      object btClose: TRzToolButton
        Left = 198
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
        Align = alLeft
        Caption = #1042#1099#1093#1086#1076
        Font.Charset = RUSSIAN_CHARSET
        Font.Color = clWindowText
        Font.Height = -12
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        OnClick = btCloseClick
      end
      object btGiveEmplUser: TRzToolButton
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
        OnClick = btGiveEmplUserClick
        ExplicitLeft = 22
        ExplicitTop = 1
      end
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
        Left = 386
        Top = 2
        Width = 4
        Height = 22
        Grooved = True
        Align = alLeft
        ExplicitLeft = 471
        ExplicitHeight = 24
      end
    end
  end
  object TmEmplUser: TTimer
    Enabled = False
    Interval = 200
    OnTimer = TmEmplUserTimer
    Left = 344
    Top = 224
  end
  object DSEmplUser: TDataSource
    AutoEdit = False
    DataSet = QEmplUser
    Left = 344
    Top = 160
  end
  object QEmplUser: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      'SELECT      MAX(A.IDUser),A. FamIO, MAX(B.IDn), B.Dol, u.NameUR'
      'FROM EmplUsers A'
      'LEFT JOIN EmplDol B ON A.IDUser= B.IDUser'
      'LEFT JOIN UrFace u on u.IDUR=B.IDUR'
      ''
      
        ' WHERE A.DiscDate='#39'21000101'#39' and  B.DiscDate='#39'21000101'#39'  group b' +
        'y A.IDUser ,A. FamIO, B.Dol, u.NameUR'
      'ORDER BY FamIO')
    Left = 344
    Top = 120
    object QEmplUserIDUser: TIntegerField
      FieldName = 'COLUMN1'
      ReadOnly = True
    end
    object QEmplUserFamIO: TStringField
      FieldName = 'FamIO'
      Size = 32
    end
    object QEmplUserIDn: TIntegerField
      FieldName = 'COLUMN2'
      ReadOnly = True
    end
    object QEmplUserDol: TWideStringField
      FieldName = 'Dol'
      Size = 256
    end
    object QEmplUserNameUR: TWideStringField
      FieldName = 'NameUR'
      Size = 32
    end
  end
  object TmSelectUser: TTimer
    Enabled = False
    Interval = 200
    OnTimer = TmSelectUserTimer
    Left = 352
    Top = 192
  end
  object cxStyleRepository1: TcxStyleRepository
    Left = 360
    Top = 352
    PixelsPerInch = 96
    object cxStyle1: TcxStyle
      AssignedValues = [svFont]
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -9
      Font.Name = 'Tahoma'
      Font.Style = []
    end
  end
  object cxStyleRepository2: TcxStyleRepository
    Left = 360
    Top = 360
    PixelsPerInch = 96
    object cxStyle2: TcxStyle
      AssignedValues = [svColor, svTextColor]
      Color = 15329769
      TextColor = clBlack
    end
  end
  object cxStyleRepository3: TcxStyleRepository
    Left = 360
    Top = 384
    PixelsPerInch = 96
    object cxStyle3: TcxStyle
      AssignedValues = [svColor, svTextColor]
      Color = clNavy
      TextColor = clWhite
    end
  end
end
