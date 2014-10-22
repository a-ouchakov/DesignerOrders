object FrEditRaspDetailComplecIndex: TFrEditRaspDetailComplecIndex
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = #1055#1086#1080#1089#1082' '#1080' '#1076#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1087#1086#1076#1087#1080#1089#1085#1086#1075#1086' '#1080#1085#1076#1077#1082#1089#1072
  ClientHeight = 563
  ClientWidth = 392
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 0
    Width = 392
    Height = 73
    Align = alTop
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 0
    VisualStyle = vsGradient
    object RzGroupBoxMenedger1: TRzGroupBox
      Left = 1
      Top = 44
      Width = 390
      Height = 26
      Align = alTop
      GroupStyle = gsCustom
      TabOrder = 0
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
      object btGiveIndex: TRzToolButton
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
    object RzGroupBox1: TRzGroupBox
      Left = 1
      Top = 1
      Width = 390
      Height = 43
      Align = alTop
      Caption = #1042#1074#1077#1076#1080#1090#1077' '#1080#1089#1082#1086#1084#1099#1081' '#1087#1086#1076#1087#1080#1089#1085#1086#1081' '#1080#1085#1076#1077#1082#1089
      GroupStyle = gsCustom
      TabOrder = 1
      Transparent = True
      object edEmplUser: TRzEdit
        AlignWithMargins = True
        Left = 5
        Top = 18
        Width = 380
        Height = 20
        Align = alClient
        FrameHotTrack = True
        FrameVisible = True
        TabOrder = 0
        ExplicitHeight = 21
      end
    end
  end
  object RzPanel2: TRzPanel
    Left = 0
    Top = 73
    Width = 392
    Height = 490
    Align = alClient
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 1
    VisualStyle = vsGradient
    ExplicitTop = 66
    object cxGridEmplUser: TcxGrid
      AlignWithMargins = True
      Left = 3
      Top = 1
      Width = 386
      Height = 486
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
      LookAndFeel.Kind = lfOffice11
      LookAndFeel.NativeStyle = False
      object TcxGridDBTableView
        NavigatorButtons.ConfirmDelete = False
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
        NavigatorButtons.ConfirmDelete = False
        DataController.DataSource = DSEmplUser
        DataController.Summary.DefaultGroupSummaryItems = <>
        DataController.Summary.FooterSummaryItems = <>
        DataController.Summary.SummaryGroups = <>
        OptionsCustomize.ColumnsQuickCustomization = True
        OptionsCustomize.ColumnsQuickCustomizationMaxDropDownCount = 10
        OptionsCustomize.BandMoving = False
        OptionsView.CellAutoHeight = True
        OptionsView.Footer = True
        OptionsView.GroupByBox = False
        Bands = <
          item
            Width = 342
          end>
      end
      object cxGridLevel1: TcxGridLevel
        Caption = #1060#1072#1084#1080#1083#1080' '#1048'.'#1054'.'
        GridView = cxGridTableViewEmplUser
      end
    end
  end
  object TmEmplUser: TTimer
    Enabled = False
    Interval = 200
    Left = 184
    Top = 120
  end
  object DSEmplUser: TDataSource
    AutoEdit = False
    DataSet = QEmplUser
    Left = 232
    Top = 120
  end
  object QEmplUser: TADOQuery
    Connection = FrMain.CallCenterConnect
    CursorType = ctStatic
    LockType = ltReadOnly
    Parameters = <>
    Prepared = True
    SQL.Strings = (
      'SELECT Idn'
      '      ,PIdn'
      '      ,idRasp'
      '      ,NameRaspDetail'
      ''
      '  FROM bm_RaspDetail WHERE  fType=2 and   DateDel is null;'
      ' ')
    Left = 272
    Top = 120
  end
  object TmSelectUser: TTimer
    Enabled = False
    Interval = 200
    Left = 184
    Top = 168
  end
end
