object FrBlockProducePeriod: TFrBlockProducePeriod
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = 'FrBlockProducePeriod'
  ClientHeight = 435
  ClientWidth = 384
  Color = clBtnFace
  Constraints.MaxHeight = 1000
  Constraints.MaxWidth = 400
  Constraints.MinHeight = 310
  Constraints.MinWidth = 400
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  KeyPreview = True
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnKeyDown = FormKeyDown
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 407
    Width = 384
    Height = 28
    Align = alBottom
    TabOrder = 0
    object RzToolButton1: TRzToolButton
      AlignWithMargins = True
      Left = 3
      Top = 3
      Width = 130
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
      OnClick = RzToolButton1Click
      ExplicitTop = 4
      ExplicitHeight = 20
    end
    object btClose: TRzToolButton
      AlignWithMargins = True
      Left = 251
      Top = 3
      Width = 130
      Height = 22
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
      ExplicitLeft = 161
      ExplicitHeight = 20
    end
  end
  object RzPanel2: TRzPanel
    Left = 0
    Top = 275
    Width = 384
    Height = 132
    Align = alBottom
    TabOrder = 1
    object RzGroupBox1: TRzGroupBox
      Left = 3
      Top = 4
      Width = 378
      Height = 122
      Caption = ' '#1055#1077#1088#1080#1086#1076' '#1087#1086#1076#1087#1080#1089#1082#1080': '
      TabOrder = 0
      Transparent = True
      object RzLabel1: TRzLabel
        Left = 8
        Top = 20
        Width = 168
        Height = 13
        Caption = #1053#1086#1074#1086#1077' '#1079#1085#1072#1095#1077#1085#1080#1077' '#1087#1077#1088#1080#1086#1076#1072' '#1074' '#1076#1085#1103#1093':'
        Transparent = True
      end
      object RzLabel2: TRzLabel
        Left = 8
        Top = 53
        Width = 364
        Height = 66
        AutoSize = False
        Caption = 
          #1057#1087#1080#1089#1086#1082' "'#1055#1077#1088#1080#1086#1076' '#1087#1086#1076#1087#1080#1089#1082#1080'" '#1089#1083#1091#1078#1080#1090' '#1076#1083#1103' '#1089#1080#1085#1093#1088#1086#1085#1080#1079#1072#1094#1080#1080' '#1085#1086#1074#1099#1093' '#1079#1085#1072#1095#1077#1085#1080#1081 +
          ' '#1089#1086' "'#1089#1090#1072#1088#1099#1084#1080'" '#1080#1085#1076#1077#1082#1089#1072#1084#1080' '#1089#1087#1088#1072#1074#1086#1095#1085#1080#1082#1072' '#1087#1077#1088#1080#1086#1076#1072' '#1087#1086#1076#1087#1080#1089#1082#1080'. '#1057#1083#1077#1076#1091#1077#1090' '#1074#1099 +
          #1073#1088#1072#1090#1100' '#1080#1079' '#1089#1087#1080#1089#1082#1072' '#1090#1086' '#1079#1085#1072#1095#1077#1085#1080#1077', '#1082#1086#1090#1086#1088#1086#1077' "'#1083#1086#1075#1080#1095#1077#1089#1082#1080'" '#1089#1086#1074#1087#1072#1076#1072#1077#1090' '#1089#1086' '#1074#1085 +
          #1086#1074#1100' '#1074#1074#1086#1076#1080#1084#1099#1084' '#1079#1085#1072#1095#1077#1085#1080#1077#1084'.'#13#1045#1089#1083#1080' '#1079#1085#1072#1095#1077#1085#1080#1077' '#1086#1090#1089#1091#1090#1089#1090#1074#1091#1077#1090' - '#1085#1077' '#1074#1099#1073#1080#1088#1072#1081#1090#1077 +
          ' '#1080#1079' '#1089#1087#1080#1089#1082#1072' '#1085#1080#1095#1077#1075#1086'!'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clRed
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = []
        ParentFont = False
        WordWrap = True
      end
      object CycleEd: TRzEdit
        Left = 182
        Top = 11
        Width = 190
        Height = 21
        Text = '0'
        Alignment = taCenter
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -11
        Font.Name = 'Tahoma'
        Font.Style = [fsBold]
        MaxLength = 4
        ParentFont = False
        TabOrder = 0
        OnChange = CycleEdChange
        OnKeyPress = CycleEdKeyPress
      end
      object cbfAdv: TRzComboBox
        Left = 182
        Top = 34
        Width = 190
        Height = 21
        Style = csDropDownList
        Ctl3D = False
        FlatButtons = True
        FrameVisible = True
        ParentCtl3D = False
        TabOnEnter = True
        TabOrder = 1
        Items.Strings = (
          #1075#1086#1076#1086#1074#1086#1081
          '1 '#1087#1086#1083#1091#1075#1086#1076#1080#1077
          '2 '#1087#1086#1083#1091#1075#1086#1076#1080#1077
          '1 '#1082#1074#1072#1088#1090#1072#1083
          '2 '#1082#1074#1072#1088#1090#1072#1083
          '3 '#1082#1074#1072#1088#1090#1072#1083
          '4 '#1082#1074#1072#1088#1090#1072#1083
          #1084#1077#1089#1103#1095#1085#1099#1081
          '18 '#1084#1077#1089#1103#1094#1077#1074
          '3 '#1076#1085#1103)
      end
    end
  end
  object cxGrid1: TcxGrid
    Left = 0
    Top = 0
    Width = 384
    Height = 275
    Align = alClient
    TabOrder = 2
    object cxGrid1DBTableView1: TcxGridDBTableView
      Navigator.Buttons.CustomButtons = <>
      OnCellDblClick = cxGrid1DBTableView1CellDblClick
      DataController.DataSource = CycleData
      DataController.Summary.DefaultGroupSummaryItems = <>
      DataController.Summary.FooterSummaryItems = <>
      DataController.Summary.SummaryGroups = <>
      OptionsData.CancelOnExit = False
      OptionsData.Deleting = False
      OptionsData.DeletingConfirmation = False
      OptionsData.Editing = False
      OptionsData.Inserting = False
      OptionsView.ScrollBars = ssVertical
      OptionsView.GroupByBox = False
      OptionsView.HeaderAutoHeight = True
      OptionsView.Indicator = True
      object cxGrid1DBTableView1Description: TcxGridDBColumn
        Caption = #1055#1077#1088#1080#1086#1076' '#1087#1086#1076#1087#1080#1089#1082#1080' '#1074' '#1076#1085#1103#1093':'
        DataBinding.FieldName = 'Description'
        HeaderAlignmentHorz = taCenter
        Options.Editing = False
        Width = 129
      end
      object cxGrid1DBTableView1ListValue: TcxGridDBColumn
        Caption = #1047#1085#1072#1095#1077#1085#1080#1077' '#1080#1079' '#1089#1087#1080#1089#1082#1072':'
        DataBinding.FieldName = 'ListValue'
        HeaderAlignmentHorz = taCenter
        Width = 109
      end
      object cxGrid1DBTableView1CycleMonth: TcxGridDBColumn
        Caption = 'MIN '#1087#1077#1088#1080#1086#1076' '#1087#1086#1076#1087#1080#1089#1082#1080' '#1074' '#1084#1077#1089#1103#1094#1072#1093':'
        DataBinding.FieldName = 'CycleMonth'
        HeaderAlignmentHorz = taCenter
        Width = 114
      end
    end
    object cxGrid1Level1: TcxGridLevel
      GridView = cxGrid1DBTableView1
    end
  end
  object CycleComm: TADOCommand
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    Left = 32
    Top = 48
  end
  object CycleQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    OnCalcFields = CycleQuerCalcFields
    Parameters = <>
    SQL.Strings = (
      
        'SELECT bc.idn, bc.IdFAdv, bc.Cycle, bc.Description, bc.CycleMont' +
        'h, bc.DateIns,'
      
        '       A1.auFamUser + '#39' '#39' + SUBSTRING(A1.auNamUser, 1,1) + '#39'.'#39' +' +
        ' SUBSTRING(A1.auOtcUser, 1,1) + '#39'.'#39' AS Creator,'
      '       bc.DateEdit,'
      
        '       A2.auFamUser + '#39' '#39' + SUBSTRING(A2.auNamUser, 1,1) + '#39'.'#39' +' +
        ' SUBSTRING(A2.auOtcUser, 1,1) + '#39'.'#39' AS Editor'
      'FROM dbo.ProduceBlockCycle AS bc'
      '     LEFT OUTER JOIN dbo.aa_Users AS A1 ON bc.IdIns = A1.auId'
      '     LEFT OUTER JOIN dbo.aa_Users AS A2 ON bc.IdEdit = A2.auId')
    Left = 96
    Top = 48
    object CycleQueridn: TAutoIncField
      FieldName = 'idn'
      ReadOnly = True
    end
    object CycleQuerIdFAdv: TIntegerField
      FieldName = 'IdFAdv'
    end
    object CycleQuerCycle: TIntegerField
      FieldName = 'Cycle'
    end
    object CycleQuerDescription: TWideStringField
      FieldName = 'Description'
      Size = 30
    end
    object CycleQuerCycleMonth: TIntegerField
      FieldName = 'CycleMonth'
    end
    object CycleQuerListValue: TStringField
      FieldKind = fkCalculated
      FieldName = 'ListValue'
      Calculated = True
    end
    object CycleQuerDateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object CycleQuerCreator: TStringField
      FieldName = 'Creator'
      ReadOnly = True
      Size = 29
    end
    object CycleQuerDateEdit: TDateTimeField
      FieldName = 'DateEdit'
    end
    object CycleQuerEditor: TStringField
      FieldName = 'Editor'
      ReadOnly = True
      Size = 29
    end
  end
  object CycleData: TDataSource
    DataSet = CycleQuer
    Left = 96
    Top = 96
  end
  object DelCComm: TADOCommand
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    Left = 32
    Top = 96
  end
  object DelCQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    SQL.Strings = (
      'SELECT CycleId'
      'FROM dbo.ProduceBlockCost'
      'WHERE CycleId = -1')
    Left = 32
    Top = 144
  end
  object RaspQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    SQL.Strings = (
      'SELECT fAdv'
      'FROM dbo.bm_RaspDetail'
      'WHERE fAdv = -1')
    Left = 88
    Top = 144
  end
end
