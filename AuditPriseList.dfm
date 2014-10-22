object FrAuditPriseList: TFrAuditPriseList
  Left = 0
  Top = 0
  Caption = #1040#1091#1076#1080#1090' '#1082#1086#1085#1090#1088#1086#1083#1103' '#1101#1082#1089#1087#1086#1088#1090#1072' '#1087#1088#1077#1081#1089#1082#1091#1088#1072#1085#1090#1072
  ClientHeight = 242
  ClientWidth = 784
  Color = clBtnFace
  Constraints.MinHeight = 280
  Constraints.MinWidth = 800
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsMDIChild
  OldCreateOrder = False
  Visible = True
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object RzPanel1: TRzPanel
    Left = 0
    Top = 216
    Width = 784
    Height = 26
    Align = alBottom
    BorderInner = fsFlat
    BorderOuter = fsNone
    GradientColorStyle = gcsCustom
    GradientColorStop = clSkyBlue
    TabOrder = 0
    VisualStyle = vsGradient
    object btClose: TRzToolButton
      Left = 683
      Top = 1
      Width = 100
      Height = 24
      Hint = #1042#1099#1093#1086#1076
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 38
      Images = MainForm.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alRight
      Caption = #1042#1099#1093#1086#1076
      ParentShowHint = False
      ShowHint = True
      OnClick = btCloseClick
      ExplicitLeft = 695
    end
    object RzSpacer6: TRzSpacer
      Left = 679
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alRight
      ExplicitLeft = 3
      ExplicitTop = 42
      ExplicitHeight = 1189
    end
    object btRefresh: TRzToolButton
      Left = 579
      Top = 1
      Width = 100
      Height = 24
      Hint = #1054#1073#1085#1086#1074#1080#1090#1100
      Margins.Left = 1
      Margins.Top = 1
      Margins.Right = 1
      Margins.Bottom = 1
      GradientColorStyle = gcsMSOffice
      ImageIndex = 39
      Images = MainForm.ImageList1
      ShowCaption = True
      UseToolbarButtonLayout = False
      UseToolbarButtonSize = False
      UseToolbarShowCaption = False
      UseToolbarVisualStyle = False
      VisualStyle = vsGradient
      Align = alRight
      Caption = #1054#1073#1085#1086#1074#1080#1090#1100
      ParentShowHint = False
      ShowHint = True
      OnClick = btRefreshClick
      ExplicitLeft = 591
    end
    object RzSpacer1: TRzSpacer
      Left = 575
      Top = 1
      Width = 4
      Height = 24
      Grooved = True
      Align = alRight
      ExplicitLeft = 567
    end
  end
  object cxGrid1: TcxGrid
    Left = 0
    Top = 0
    Width = 784
    Height = 216
    Align = alClient
    TabOrder = 1
    object cxGrid1DBTableView1: TcxGridDBTableView
      Navigator.Buttons.CustomButtons = <>
      DataController.DataSource = AuditPLData
      DataController.Summary.DefaultGroupSummaryItems = <>
      DataController.Summary.FooterSummaryItems = <>
      DataController.Summary.SummaryGroups = <>
      OptionsData.CancelOnExit = False
      OptionsData.Deleting = False
      OptionsData.DeletingConfirmation = False
      OptionsData.Editing = False
      OptionsData.Inserting = False
      OptionsView.ColumnAutoWidth = True
      OptionsView.Indicator = True
      object cxGrid1DBTableView1StartJob: TcxGridDBColumn
        Caption = #1053#1072#1095#1072#1083#1086' '#1087#1088#1086#1094#1077#1076#1091#1088#1099':'
        DataBinding.FieldName = 'StartJob'
        HeaderAlignmentHorz = taCenter
      end
      object cxGrid1DBTableView1StopJob: TcxGridDBColumn
        Caption = #1050#1086#1085#1077#1094' '#1087#1088#1086#1094#1077#1076#1091#1088#1099':'
        DataBinding.FieldName = 'StopJob'
        HeaderAlignmentHorz = taCenter
      end
      object cxGrid1DBTableView1JobStatus: TcxGridDBColumn
        Caption = #1057#1090#1072#1090#1091#1089':'
        DataBinding.FieldName = 'JobStatus'
        HeaderAlignmentHorz = taCenter
        MinWidth = 60
      end
      object cxGrid1DBTableView1JobResult: TcxGridDBColumn
        Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090':'
        DataBinding.FieldName = 'JobResult'
        HeaderAlignmentHorz = taCenter
        MinWidth = 60
        Styles.OnGetContentStyle = cxGrid1DBTableView1JobResultStylesGetContentStyle
      end
      object cxGrid1DBTableView1JobDescription: TcxGridDBColumn
        Caption = #1054#1087#1080#1089#1072#1085#1080#1077' '#1074#1099#1079#1086#1074#1072' '#1087#1088#1086#1094#1077#1076#1091#1088#1099':'
        DataBinding.FieldName = 'JobDescription'
        HeaderAlignmentHorz = taCenter
      end
      object cxGrid1DBTableView1RunBy: TcxGridDBColumn
        Caption = #1050#1077#1084' '#1073#1099#1083#1072' '#1079#1072#1087#1091#1097#1077#1085#1072':'
        DataBinding.FieldName = 'RunBy'
        HeaderAlignmentHorz = taCenter
        Width = 150
      end
    end
    object cxGrid1Level1: TcxGridLevel
      GridView = cxGrid1DBTableView1
    end
  end
  object AuditPLQuer: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      'SELECT StartJob, StopJob,'
      
        '       CASE WHEN JobStatus = 0 THEN '#39#1059#1089#1087#1077#1093#39' ELSE '#39#1053#1077#1091#1076#1072#1095#1072#39' END A' +
        'S JobStatus,'
      
        '       CASE WHEN JobResult = 1 THEN '#39#1059#1089#1087#1077#1093#39' ELSE '#39#1053#1077#1091#1076#1072#1095#1072#39' END A' +
        'S JobResult,'
      '       JobDescription, RunBy'
      '  FROM dbo.all_AdvPriseListEtalon_CheckJob'
      '  ORDER BY RecNo DESC')
    Left = 40
    Top = 112
    object AuditPLQuerStartJob: TDateTimeField
      FieldName = 'StartJob'
    end
    object AuditPLQuerStopJob: TDateTimeField
      FieldName = 'StopJob'
    end
    object AuditPLQuerJobStatus: TStringField
      FieldName = 'JobStatus'
      ReadOnly = True
      Size = 7
    end
    object AuditPLQuerJobResult: TStringField
      FieldName = 'JobResult'
      ReadOnly = True
      Size = 7
    end
    object AuditPLQuerJobDescription: TWideStringField
      FieldName = 'JobDescription'
      Size = 50
    end
    object AuditPLQuerRunBy: TWideStringField
      FieldName = 'RunBy'
      Size = 50
    end
  end
  object AuditPLData: TDataSource
    DataSet = AuditPLQuer
    Left = 112
    Top = 112
  end
  object cxStyleRepository1: TcxStyleRepository
    Left = 192
    Top = 112
    PixelsPerInch = 96
    object JobFail: TcxStyle
      AssignedValues = [svColor, svFont, svTextColor]
      Color = clRed
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = []
      TextColor = clWhite
    end
  end
end
