object FrBlockProduceDiscount: TFrBlockProduceDiscount
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  Caption = 'FrBlockProduceDiscount'
  ClientHeight = 262
  ClientWidth = 1126
  Color = clBtnFace
  Constraints.MaxHeight = 1200
  Constraints.MaxWidth = 1142
  Constraints.MinHeight = 300
  Constraints.MinWidth = 1142
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 236
    Width = 1126
    Height = 26
    Align = alBottom
    TabOrder = 0
    object SaveButt: TRzToolButton
      AlignWithMargins = True
      Left = 3
      Top = 3
      Width = 174
      Height = 20
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
      ExplicitLeft = 8
      ExplicitTop = 1
      ExplicitHeight = 24
    end
    object btClose: TRzToolButton
      AlignWithMargins = True
      Left = 949
      Top = 3
      Width = 174
      Height = 20
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
      ExplicitLeft = 187
      ExplicitTop = 1
      ExplicitHeight = 24
    end
  end
  object RzGroupBox1: TRzGroupBox
    Left = 0
    Top = 166
    Width = 1126
    Height = 70
    Align = alBottom
    Caption = ' '#1042#1074#1086#1076' '#1085#1086#1074#1099#1093' '#1076#1072#1090' '#1080' '#1079#1085#1072#1095#1077#1085#1080#1081' '#1089#1082#1080#1076#1086#1082': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object RzLabel1: TRzLabel
      Left = 8
      Top = 28
      Width = 9
      Height = 13
      Caption = #1089':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Transparent = True
    end
    object RzLabel2: TRzLabel
      Left = 102
      Top = 28
      Width = 16
      Height = 13
      Caption = #1087#1086':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Transparent = True
    end
    object RzLabel3: TRzLabel
      Left = 210
      Top = 28
      Width = 69
      Height = 13
      Caption = #1057#1082#1080#1076#1082#1072' (min):'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Transparent = True
    end
    object RzLabel4: TRzLabel
      Left = 340
      Top = 28
      Width = 73
      Height = 13
      Caption = #1057#1082#1080#1076#1082#1072' (max):'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Transparent = True
    end
    object RzLabel5: TRzLabel
      Left = 480
      Top = 28
      Width = 65
      Height = 13
      Caption = #1055#1088#1080#1084#1077#1095#1072#1085#1080#1077':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Transparent = True
    end
    object RzLabel6: TRzLabel
      Left = 383
      Top = 51
      Width = 162
      Height = 13
      Caption = #1055#1077#1088#1080#1086#1076#1080#1095#1085#1086#1089#1090#1100' '#1074#1099#1087#1091#1089#1082#1072' '#1073#1083#1086#1082#1072':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Transparent = True
    end
    object StartDTP: TDateTimePicker
      Left = 20
      Top = 20
      Width = 80
      Height = 21
      Date = 2.000000000000000000
      Time = 2.000000000000000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxDate = 73415.000000000000000000
      MinDate = 2.000000000000000000
      ParentFont = False
      TabOrder = 0
    end
    object EndDtDTP: TDateTimePicker
      Left = 120
      Top = 20
      Width = 80
      Height = 21
      Date = 2.000000000000000000
      Time = 2.000000000000000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxDate = 73415.000000000000000000
      MinDate = 2.000000000000000000
      ParentFont = False
      TabOrder = 1
    end
    object MINdiscEd: TRzNumericEdit
      Left = 280
      Top = 20
      Width = 54
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 6
      ParentFont = False
      TabOrder = 2
      CheckRange = True
      IntegersOnly = False
      Max = 100.000000000000000000
      DisplayFormat = '0.00;(.00)'
    end
    object MAXdiscEd: TRzNumericEdit
      Left = 416
      Top = 20
      Width = 54
      Height = 21
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      MaxLength = 6
      ParentFont = False
      TabOrder = 3
      CheckRange = True
      IntegersOnly = False
      Max = 100.000000000000000000
      DisplayFormat = '0.00;(.00)'
    end
    object CommentEd: TRzEdit
      Left = 548
      Top = 20
      Width = 575
      Height = 21
      MaxLength = 128
      TabOrder = 4
    end
    object ActiveBox: TRzCheckBox
      Left = 8
      Top = 51
      Width = 293
      Height = 15
      Caption = #1040#1082#1090#1080#1074#1085#1086#1089#1090#1100' '#1087#1077#1088#1080#1086#1076#1072' '#1089#1082#1080#1076#1086#1082' ('#1087#1077#1088#1080#1086#1076' '#1072#1082#1090#1080#1074#1077#1085')'
      Checked = True
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      State = cbChecked
      TabOrder = 5
      Transparent = True
      OnClick = ActiveBoxClick
    end
    object chcbPeriod: TcxCheckComboBox
      AlignWithMargins = True
      Left = 549
      Top = 43
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
      Style.BorderColor = clBtnShadow
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
      TabOrder = 6
      OnExit = chcbPeriodExit
      Height = 21
      Width = 574
    end
  end
  object RzGroupBox2: TRzGroupBox
    Left = 0
    Top = 0
    Width = 1126
    Height = 166
    Align = alClient
    Caption = ' '#1040#1091#1076#1080#1090' '#1080#1079#1084#1077#1085#1077#1085#1080#1103' '#1076#1072#1090' '#1080' '#1089#1082#1080#1076#1086#1082': '
    TabOrder = 2
    object cxGrid1: TcxGrid
      Left = 1
      Top = 14
      Width = 1124
      Height = 151
      Align = alClient
      TabOrder = 0
      object cxGrid1DBTableView1: TcxGridDBTableView
        Navigator.Buttons.CustomButtons = <>
        DataController.DataSource = DiscData
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
        OptionsView.Indicator = True
        object cxGrid1DBTableView1PStart: TcxGridDBColumn
          Caption = #1053#1072#1095#1072#1083#1086':'
          DataBinding.FieldName = 'PStart'
          HeaderAlignmentHorz = taCenter
          Width = 68
        end
        object cxGrid1DBTableView1PEnd: TcxGridDBColumn
          Caption = #1054#1082#1086#1085#1095#1072#1085#1080#1077':'
          DataBinding.FieldName = 'PEnd'
          HeaderAlignmentHorz = taCenter
          Width = 68
        end
        object cxGrid1DBTableView1MINdis: TcxGridDBColumn
          Caption = #1052#1080#1085#1080#1084#1091#1084':'
          DataBinding.FieldName = 'MINdis'
          HeaderAlignmentHorz = taCenter
          Width = 60
        end
        object cxGrid1DBTableView1MAXdis: TcxGridDBColumn
          Caption = #1052#1072#1082#1089#1080#1084#1091#1084':'
          DataBinding.FieldName = 'MAXdis'
          HeaderAlignmentHorz = taCenter
          Width = 60
        end
        object cxGrid1DBTableView1Description: TcxGridDBColumn
          Caption = #1059#1089#1083#1086#1074#1080#1103' '#1072#1082#1094#1080#1080':'
          DataBinding.FieldName = 'Description'
          HeaderAlignmentHorz = taCenter
          Width = 320
        end
        object cxGrid1DBTableView1Active: TcxGridDBColumn
          Caption = #1040#1082#1090#1080#1074#1085#1086#1089#1090#1100':'
          DataBinding.FieldName = 'Active'
          Width = 70
        end
        object cxGrid1DBTableView1DateIns: TcxGridDBColumn
          Caption = #1057#1086#1079#1076#1072#1085':'
          DataBinding.FieldName = 'DateIns'
          HeaderAlignmentHorz = taCenter
          Width = 114
        end
        object cxGrid1DBTableView1Creator: TcxGridDBColumn
          Caption = #1057#1086#1079#1076#1072#1085' '#1082#1077#1084':'
          DataBinding.FieldName = 'Creator'
          HeaderAlignmentHorz = taCenter
          Width = 110
        end
        object cxGrid1DBTableView1DateEdit: TcxGridDBColumn
          Caption = #1048#1079#1084#1077#1085#1105#1085':'
          DataBinding.FieldName = 'DateEdit'
          HeaderAlignmentHorz = taCenter
          Width = 114
        end
        object cxGrid1DBTableView1Editor: TcxGridDBColumn
          Caption = #1048#1079#1084#1077#1085#1105#1085' '#1082#1077#1084':'
          DataBinding.FieldName = 'Editor'
          HeaderAlignmentHorz = taCenter
          Width = 110
        end
      end
      object cxGrid1Level1: TcxGridLevel
        GridView = cxGrid1DBTableView1
      end
    end
  end
  object DiscComm: TADOCommand
    Connection = MainForm.CallCenterConnect
    Parameters = <>
    Left = 24
    Top = 64
  end
  object DiscQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'SELECT pd.idn, pd.BlockId, pd.PStart, pd.PEnd, pd.MINdis, pd.MAX' +
        'dis, pd.Description, pd.CycleId, pd.AllCycle,'
      '       pd.DateIns, pd.DateEdit, pd.Active,'
      
        '       A1.auFamUser + '#39' '#39' + SUBSTRING(A1.auNamUser, 1,1) + '#39'.'#39' +' +
        ' SUBSTRING(A1.auOtcUser, 1,1) + '#39'.'#39' AS Creator,'
      
        #9#9#9' A2.auFamUser + '#39' '#39' + SUBSTRING(A2.auNamUser, 1,1) + '#39'.'#39' + SU' +
        'BSTRING(A2.auOtcUser, 1,1) + '#39'.'#39' AS Editor'
      '       FROM ProduceBlockDiscount AS pd'
      '       LEFT OUTER JOIN dbo.aa_Users AS A1 ON pd.IdIns = A1.auId'
      '       LEFT OUTER JOIN dbo.aa_Users AS A2 ON pd.IdEdit = A2.auId'
      'WHERE pd.idn = -1')
    Left = 80
    Top = 64
    object DiscQueridn: TAutoIncField
      FieldName = 'idn'
      ReadOnly = True
    end
    object DiscQuerBlockId: TIntegerField
      FieldName = 'BlockId'
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
    object DiscQuerDescription: TWideStringField
      FieldName = 'Description'
      Size = 128
    end
    object DiscQuerCycleId: TIntegerField
      FieldName = 'CycleId'
    end
    object DiscQuerAllCycle: TWideMemoField
      FieldName = 'AllCycle'
      BlobType = ftWideMemo
    end
    object DiscQuerDateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object DiscQuerDateEdit: TDateTimeField
      FieldName = 'DateEdit'
    end
    object DiscQuerActive: TBooleanField
      FieldName = 'Active'
    end
    object DiscQuerCreator: TStringField
      FieldName = 'Creator'
      ReadOnly = True
      Size = 29
    end
    object DiscQuerEditor: TStringField
      FieldName = 'Editor'
      ReadOnly = True
      Size = 29
    end
  end
  object DiscData: TDataSource
    DataSet = DiscQuer
    Left = 128
    Top = 64
  end
  object ListQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT IdFAdv, Description FROM dbo.ProduceBlockCycle')
    Left = 176
    Top = 64
    object ListQuerIdFAdv: TIntegerField
      FieldName = 'IdFAdv'
    end
    object ListQuerDescription: TWideStringField
      FieldName = 'Description'
      Size = 100
    end
  end
end
