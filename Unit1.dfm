object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 646
  ClientWidth = 1219
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object tlRaspDetail: TcxDBTreeList
    Left = 0
    Top = 0
    Width = 1219
    Height = 646
    Margins.Left = 0
    Margins.Top = 2
    Margins.Right = 0
    Margins.Bottom = 2
    BorderStyle = cxcbsNone
    Align = alClient
    Bands = <
      item
      end>
    DataController.ImageIndexField = 'fType'
    DataController.ParentField = 'PIdn'
    DataController.KeyField = 'Idn'
    LookAndFeel.Kind = lfFlat
    LookAndFeel.NativeStyle = True
    Navigator.Buttons.CustomButtons = <>
    OptionsBehavior.ExpandOnDblClick = False
    OptionsBehavior.MultiSort = False
    OptionsCustomizing.ColumnMoving = False
    OptionsData.Editing = False
    OptionsData.Deleting = False
    OptionsSelection.CellSelect = False
    OptionsSelection.HideFocusRect = False
    OptionsSelection.InvertSelect = False
    OptionsView.CellAutoHeight = True
    OptionsView.GridLines = tlglVert
    OptionsView.UseImageIndexForSelected = False
    OptionsView.UseNodeColorForIndent = False
    RootValue = -1
    TabOrder = 0
    object tlRaspDetailcxDBTreeListColumn3: TcxDBTreeListColumn
      Caption.Text = #1058#1077#1084#1072#1090#1080#1095#1077#1089#1082#1086#1077' '#1085#1072#1087#1088#1072#1074#1083#1077#1085#1080#1077
      DataBinding.FieldName = 'FiText'
      Options.Sorting = False
      Width = 187
      Position.ColIndex = 8
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailcxDBTreeListColumn2: TcxDBTreeListColumn
      Caption.Text = #1062#1077#1085#1072' '#1079#1072' MIN '#1087#1077#1088#1080#1086#1076' '#1087#1086#1076#1087#1080#1089#1082#1080' '#1089' '#1053#1044#1057
      DataBinding.FieldName = 'CostMINWithNDS'
      Options.Sorting = False
      Width = 199
      Position.ColIndex = 16
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailNameRaspDetail: TcxDBTreeListColumn
      Caption.Text = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
      DataBinding.FieldName = 'NameRaspDetail'
      Options.Sorting = False
      Width = 314
      Position.ColIndex = 4
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailfAdv: TcxDBTreeListColumn
      Caption.Text = #1055#1077#1088#1077#1086#1076#1080#1095#1085#1086#1089#1090#1100
      DataBinding.FieldName = 'fAdv'
      Options.Sorting = False
      Width = 94
      Position.ColIndex = 17
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailIdn: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'Idn'
      Options.Sorting = False
      Position.ColIndex = 1
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailProcNDS: TcxDBTreeListColumn
      Caption.Text = '%'#1053#1044#1057
      DataBinding.FieldName = 'ProcNDS'
      Options.Sorting = False
      Width = 41
      Position.ColIndex = 14
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailPIdn: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'PIdn'
      Options.Sorting = False
      Position.ColIndex = 2
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailidRasp: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'idRasp'
      Options.Sorting = False
      Position.ColIndex = 3
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailidAdvProduceClass: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'idAdvProduceClass'
      Options.Sorting = False
      Position.ColIndex = 6
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailiText_1: TcxDBTreeListColumn
      Caption.Text = #1055#1088#1086#1076#1091#1082#1090
      DataBinding.FieldName = 'DiText'
      Options.Sorting = False
      Width = 139
      Position.ColIndex = 7
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailiText: TcxDBTreeListColumn
      Caption.Text = #1058#1080#1087' '#1087#1086#1076#1087#1080#1089#1085#1086#1075#1086' '#1080#1085#1076#1077#1082#1089#1072
      DataBinding.FieldName = 'BiText'
      Options.Sorting = False
      Width = 147
      Position.ColIndex = 5
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailCostWithNDS: TcxDBTreeListColumn
      Caption.Text = #1062#1077#1085#1072' '#1089' '#1053#1044#1057
      DataBinding.FieldName = 'CostWithNDS'
      Options.Sorting = False
      Width = 97
      Position.ColIndex = 10
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailCostWithoutNDS: TcxDBTreeListColumn
      Caption.Text = #1062#1077#1085#1072' '#1073#1077#1079' '#1053#1044#1057
      DataBinding.FieldName = 'CostWithoutNDS'
      Options.Sorting = False
      Width = 112
      Position.ColIndex = 11
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailCostNDS: TcxDBTreeListColumn
      Caption.Text = #1057#1091#1084#1084#1072' '#1053#1044#1057
      DataBinding.FieldName = 'CostNDS'
      Options.Sorting = False
      Width = 67
      Position.ColIndex = 12
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailYear: TcxDBTreeListColumn
      Caption.Text = #1043#1086#1076
      DataBinding.FieldName = 'Year'
      Options.Sorting = False
      Width = 52
      Position.ColIndex = 25
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailDiscount: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'Discount'
      Options.Sorting = False
      Position.ColIndex = 13
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailProcDiscount: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'ProcDiscount'
      Options.Sorting = False
      Position.ColIndex = 15
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailfType: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'fType'
      Options.Sorting = False
      Position.ColIndex = 18
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailDateIns: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'DateIns'
      Options.Sorting = False
      Position.ColIndex = 21
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailNumbNE: TcxDBTreeListColumn
      Caption.Text = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086'\'#1053#1086#1084#1077#1088
      DataBinding.FieldName = 'NumbNE'
      Options.Sorting = False
      Width = 115
      Position.ColIndex = 19
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailIdIns: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'IdIns'
      Options.Sorting = False
      Position.ColIndex = 20
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailDateDel: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'DateDel'
      Options.Sorting = False
      Position.ColIndex = 22
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailIdDel: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'IdDel'
      Options.Sorting = False
      Position.ColIndex = 23
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailId24TypeProduceIndex: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'Id24TypeProduceIndex'
      Options.Sorting = False
      Position.ColIndex = 24
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailIdMod: TcxDBTreeListColumn
      Visible = False
      Caption.Text = #1048#1079#1084#1077#1085#1080#1074#1096#1080#1081
      DataBinding.FieldName = 'IdMod'
      Options.Sorting = False
      Position.ColIndex = 27
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailDateMod: TcxDBTreeListColumn
      Caption.Text = #1044#1072#1090#1072' '#1080#1079#1084#1077#1085#1077#1085#1080#1103
      DataBinding.FieldName = 'DateMod'
      Options.Sorting = False
      Width = 100
      Position.ColIndex = 26
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailcxDBTreeListColumn1: TcxDBTreeListColumn
      Caption.Text = #1060#1048#1054' '#1080#1079#1084#1077#1085#1080#1074#1096#1077#1075#1086
      DataBinding.FieldName = 'auFamIO'
      Options.Sorting = False
      Width = 137
      Position.ColIndex = 28
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailcxDBTreeListColumn4: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'fNoNDS'
      Options.Sorting = False
      Position.ColIndex = 29
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailcxDBTreeListColumn5: TcxDBTreeListColumn
      Caption.Text = #1050#1086#1076' '#1087#1088#1086#1076#1091#1082#1090#1072
      DataBinding.FieldName = 'CodeB'
      Options.Sorting = False
      Width = 111
      Position.ColIndex = 9
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object tlRaspDetailcxDBTreeListColumn6: TcxDBTreeListColumn
      Visible = False
      Caption.Text = #8470
      DataBinding.FieldName = 'VOrder'
      Options.Sorting = False
      Width = 21
      Position.ColIndex = 0
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
  end
  object cxDBTreeList1: TcxDBTreeList
    Left = 0
    Top = 0
    Width = 1219
    Height = 646
    Margins.Left = 0
    Margins.Top = 2
    Margins.Right = 0
    Margins.Bottom = 2
    BorderStyle = cxcbsNone
    Align = alClient
    Bands = <
      item
      end>
    DataController.DataSource = DSRaspDetail
    DataController.ImageIndexField = 'fType'
    DataController.ParentField = 'PIdn'
    DataController.KeyField = 'Idn'
    Images = ImageList1
    LookAndFeel.Kind = lfFlat
    LookAndFeel.NativeStyle = True
    Navigator.Buttons.CustomButtons = <>
    OptionsBehavior.ExpandOnDblClick = False
    OptionsBehavior.MultiSort = False
    OptionsCustomizing.ColumnMoving = False
    OptionsData.Editing = False
    OptionsData.Deleting = False
    OptionsSelection.CellSelect = False
    OptionsSelection.HideFocusRect = False
    OptionsSelection.InvertSelect = False
    OptionsView.CellAutoHeight = True
    OptionsView.GridLines = tlglVert
    OptionsView.UseImageIndexForSelected = False
    OptionsView.UseNodeColorForIndent = False
    RootValue = -1
    TabOrder = 1
    object cxDBTreeList1Idn: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'Idn'
      Position.ColIndex = 0
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1PIdn: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'PIdn'
      Position.ColIndex = 1
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1idRasp: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'idRasp'
      Position.ColIndex = 2
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1Id24TypeProduceIndex: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'Id24TypeProduceIndex'
      Position.ColIndex = 3
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1idAdvProduceClass: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'idAdvProduceClass'
      Position.ColIndex = 4
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1idAdvTNClass: TcxDBTreeListColumn
      Visible = False
      DataBinding.FieldName = 'idAdvTNClass'
      Position.ColIndex = 5
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1NameRaspDetail: TcxDBTreeListColumn
      DataBinding.FieldName = 'NameRaspDetail'
      Width = 540
      Position.ColIndex = 6
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1NumbNE: TcxDBTreeListColumn
      DataBinding.FieldName = 'NumbNE'
      Width = 100
      Position.ColIndex = 7
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1Year: TcxDBTreeListColumn
      DataBinding.FieldName = 'Year'
      Width = 100
      Position.ColIndex = 8
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1CostWithNDS: TcxDBTreeListColumn
      DataBinding.FieldName = 'CostWithNDS'
      Width = 100
      Position.ColIndex = 9
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1CostWithoutNDS: TcxDBTreeListColumn
      DataBinding.FieldName = 'CostWithoutNDS'
      Width = 100
      Position.ColIndex = 10
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1CostNDS: TcxDBTreeListColumn
      DataBinding.FieldName = 'CostNDS'
      Width = 100
      Position.ColIndex = 11
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1ProcNDS: TcxDBTreeListColumn
      DataBinding.FieldName = 'ProcNDS'
      Width = 100
      Position.ColIndex = 12
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1Discount: TcxDBTreeListColumn
      DataBinding.FieldName = 'Discount'
      Width = 100
      Position.ColIndex = 13
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1ProcDiscount: TcxDBTreeListColumn
      DataBinding.FieldName = 'ProcDiscount'
      Width = 100
      Position.ColIndex = 14
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1fAdv: TcxDBTreeListColumn
      DataBinding.FieldName = 'fAdv'
      Width = 100
      Position.ColIndex = 15
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1fAdvMIN: TcxDBTreeListColumn
      DataBinding.FieldName = 'fAdvMIN'
      Width = 100
      Position.ColIndex = 16
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1fType: TcxDBTreeListColumn
      DataBinding.FieldName = 'fType'
      Width = 100
      Position.ColIndex = 17
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1DateIns: TcxDBTreeListColumn
      DataBinding.FieldName = 'DateIns'
      Width = 100
      Position.ColIndex = 18
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1IdIns: TcxDBTreeListColumn
      DataBinding.FieldName = 'IdIns'
      Width = 100
      Position.ColIndex = 19
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1DateMod: TcxDBTreeListColumn
      DataBinding.FieldName = 'DateMod'
      Width = 100
      Position.ColIndex = 20
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1IdMod: TcxDBTreeListColumn
      DataBinding.FieldName = 'IdMod'
      Width = 100
      Position.ColIndex = 21
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1DateDel: TcxDBTreeListColumn
      DataBinding.FieldName = 'DateDel'
      Width = 100
      Position.ColIndex = 22
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1IdDel: TcxDBTreeListColumn
      DataBinding.FieldName = 'IdDel'
      Width = 100
      Position.ColIndex = 23
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1CostMINWithNDS: TcxDBTreeListColumn
      DataBinding.FieldName = 'CostMINWithNDS'
      Width = 100
      Position.ColIndex = 24
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1CostMINWithoutNDS: TcxDBTreeListColumn
      DataBinding.FieldName = 'CostMINWithoutNDS'
      Width = 100
      Position.ColIndex = 25
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1CostBaseWithNDS: TcxDBTreeListColumn
      DataBinding.FieldName = 'CostBaseWithNDS'
      Width = 100
      Position.ColIndex = 26
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1CostBudjetWithNDS: TcxDBTreeListColumn
      DataBinding.FieldName = 'CostBudjetWithNDS'
      Width = 100
      Position.ColIndex = 27
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1DateJobMIN: TcxDBTreeListColumn
      DataBinding.FieldName = 'DateJobMIN'
      Width = 100
      Position.ColIndex = 28
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1DateJobMAX: TcxDBTreeListColumn
      DataBinding.FieldName = 'DateJobMAX'
      Width = 100
      Position.ColIndex = 29
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1KanalSale: TcxDBTreeListColumn
      DataBinding.FieldName = 'KanalSale'
      Width = 100
      Position.ColIndex = 30
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1Id32NameUnit: TcxDBTreeListColumn
      DataBinding.FieldName = 'Id32NameUnit'
      Width = 100
      Position.ColIndex = 31
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1Id32NameItemType: TcxDBTreeListColumn
      DataBinding.FieldName = 'Id32NameItemType'
      Width = 100
      Position.ColIndex = 32
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1ItemId: TcxDBTreeListColumn
      DataBinding.FieldName = 'ItemId'
      Width = 100
      Position.ColIndex = 33
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1fNoNDS: TcxDBTreeListColumn
      DataBinding.FieldName = 'fNoNDS'
      Width = 100
      Position.ColIndex = 34
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1IdnAxapta: TcxDBTreeListColumn
      DataBinding.FieldName = 'IdnAxapta'
      Width = 100
      Position.ColIndex = 35
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1fState: TcxDBTreeListColumn
      DataBinding.FieldName = 'fState'
      Width = 100
      Position.ColIndex = 36
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1NameAxapta: TcxDBTreeListColumn
      DataBinding.FieldName = 'NameAxapta'
      Width = 100
      Position.ColIndex = 37
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1ItemIdAxapta: TcxDBTreeListColumn
      DataBinding.FieldName = 'ItemIdAxapta'
      Width = 100
      Position.ColIndex = 38
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1DateLastExport: TcxDBTreeListColumn
      DataBinding.FieldName = 'DateLastExport'
      Width = 100
      Position.ColIndex = 39
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1idAdvProduceClassCopy: TcxDBTreeListColumn
      DataBinding.FieldName = 'idAdvProduceClassCopy'
      Width = 100
      Position.ColIndex = 40
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1IdnAdvCond: TcxDBTreeListColumn
      DataBinding.FieldName = 'IdnAdvCond'
      Width = 100
      Position.ColIndex = 41
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1fTime_Zero: TcxDBTreeListColumn
      DataBinding.FieldName = 'fTime_Zero'
      Width = 100
      Position.ColIndex = 42
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1MergedCount: TcxDBTreeListColumn
      DataBinding.FieldName = 'MergedCount'
      Width = 100
      Position.ColIndex = 43
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1IdAdvPriseList: TcxDBTreeListColumn
      DataBinding.FieldName = 'IdAdvPriseList'
      Width = 100
      Position.ColIndex = 44
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1IdGetPI: TcxDBTreeListColumn
      DataBinding.FieldName = 'IdGetPI'
      Width = 100
      Position.ColIndex = 45
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
    object cxDBTreeList1VOrder: TcxDBTreeListColumn
      DataBinding.FieldName = 'VOrder'
      Width = 100
      Position.ColIndex = 46
      Position.RowIndex = 0
      Position.BandIndex = 0
      Summary.FooterSummaryItems = <>
      Summary.GroupFooterSummaryItems = <>
    end
  end
  object DSRaspDetail: TDataSource
    AutoEdit = False
    DataSet = QRaspDetail
    Left = 912
    Top = 496
  end
  object QRaspDetail: TADOQuery
    Connection = MainForm.CallCenterConnect
    CursorType = ctStatic
    LockType = ltBatchOptimistic
    Parameters = <>
    SQL.Strings = (
      'SELECT * FROM bm_RaspDetail Where IdRasp=/*666*/'
      '652 '
      'AND DateDel is null')
    Left = 984
    Top = 496
    object QRaspDetailIdn: TAutoIncField
      FieldName = 'Idn'
      ReadOnly = True
    end
    object QRaspDetailPIdn: TIntegerField
      FieldName = 'PIdn'
    end
    object QRaspDetailidRasp: TIntegerField
      FieldName = 'idRasp'
    end
    object QRaspDetailId24TypeProduceIndex: TIntegerField
      FieldName = 'Id24TypeProduceIndex'
    end
    object QRaspDetailidAdvProduceClass: TIntegerField
      FieldName = 'idAdvProduceClass'
    end
    object QRaspDetailidAdvTNClass: TIntegerField
      FieldName = 'idAdvTNClass'
    end
    object QRaspDetailNameRaspDetail: TStringField
      FieldName = 'NameRaspDetail'
      Size = 512
    end
    object QRaspDetailNumbNE: TIntegerField
      FieldName = 'NumbNE'
    end
    object QRaspDetailYear: TIntegerField
      FieldName = 'Year'
    end
    object QRaspDetailCostWithNDS: TBCDField
      FieldName = 'CostWithNDS'
      Precision = 19
    end
    object QRaspDetailCostWithoutNDS: TBCDField
      FieldName = 'CostWithoutNDS'
      Precision = 19
    end
    object QRaspDetailCostNDS: TBCDField
      FieldName = 'CostNDS'
      Precision = 19
    end
    object QRaspDetailProcNDS: TBCDField
      FieldName = 'ProcNDS'
      Precision = 19
    end
    object QRaspDetailDiscount: TBCDField
      FieldName = 'Discount'
      Precision = 19
    end
    object QRaspDetailProcDiscount: TBCDField
      FieldName = 'ProcDiscount'
      Precision = 19
    end
    object QRaspDetailfAdv: TIntegerField
      FieldName = 'fAdv'
    end
    object QRaspDetailfAdvMIN: TIntegerField
      FieldName = 'fAdvMIN'
    end
    object QRaspDetailfType: TIntegerField
      FieldName = 'fType'
    end
    object QRaspDetailDateIns: TDateTimeField
      FieldName = 'DateIns'
    end
    object QRaspDetailIdIns: TIntegerField
      FieldName = 'IdIns'
    end
    object QRaspDetailDateMod: TDateTimeField
      FieldName = 'DateMod'
    end
    object QRaspDetailIdMod: TIntegerField
      FieldName = 'IdMod'
    end
    object QRaspDetailDateDel: TDateTimeField
      FieldName = 'DateDel'
    end
    object QRaspDetailIdDel: TIntegerField
      FieldName = 'IdDel'
    end
    object QRaspDetailCostMINWithNDS: TBCDField
      FieldName = 'CostMINWithNDS'
      Precision = 19
    end
    object QRaspDetailCostMINWithoutNDS: TBCDField
      FieldName = 'CostMINWithoutNDS'
      Precision = 19
    end
    object QRaspDetailCostBaseWithNDS: TBCDField
      FieldName = 'CostBaseWithNDS'
      Precision = 19
    end
    object QRaspDetailCostBudjetWithNDS: TBCDField
      FieldName = 'CostBudjetWithNDS'
      Precision = 19
    end
    object QRaspDetailDateJobMIN: TDateTimeField
      FieldName = 'DateJobMIN'
    end
    object QRaspDetailDateJobMAX: TDateTimeField
      FieldName = 'DateJobMAX'
    end
    object QRaspDetailKanalSale: TIntegerField
      FieldName = 'KanalSale'
    end
    object QRaspDetailId32NameUnit: TIntegerField
      FieldName = 'Id32NameUnit'
    end
    object QRaspDetailId32NameItemType: TIntegerField
      FieldName = 'Id32NameItemType'
    end
    object QRaspDetailItemId: TStringField
      FieldName = 'ItemId'
      Size = 24
    end
    object QRaspDetailfNoNDS: TIntegerField
      FieldName = 'fNoNDS'
    end
    object QRaspDetailIdnAxapta: TIntegerField
      FieldName = 'IdnAxapta'
    end
    object QRaspDetailfState: TIntegerField
      FieldName = 'fState'
    end
    object QRaspDetailNameAxapta: TStringField
      FieldName = 'NameAxapta'
      Size = 512
    end
    object QRaspDetailItemIdAxapta: TStringField
      FieldName = 'ItemIdAxapta'
      Size = 24
    end
    object QRaspDetailDateLastExport: TDateTimeField
      FieldName = 'DateLastExport'
    end
    object QRaspDetailidAdvProduceClassCopy: TIntegerField
      FieldName = 'idAdvProduceClassCopy'
    end
    object QRaspDetailIdnAdvCond: TIntegerField
      FieldName = 'IdnAdvCond'
    end
    object QRaspDetailfTime_Zero: TIntegerField
      FieldName = 'fTime_Zero'
    end
    object QRaspDetailMergedCount: TIntegerField
      FieldName = 'MergedCount'
    end
    object QRaspDetailIdAdvPriseList: TIntegerField
      FieldName = 'IdAdvPriseList'
    end
    object QRaspDetailIdGetPI: TIntegerField
      FieldName = 'IdGetPI'
    end
    object QRaspDetailVOrder: TIntegerField
      FieldName = 'VOrder'
    end
  end
  object ImageList1: TImageList
    DrawingStyle = dsTransparent
    Left = 858
    Top = 192
    Bitmap = {
      494C01016F00D800700010001000FFFFFFFFFF10FFFFFFFFFFFFFFFF424D3600
      000000000000360000002800000040000000C0010000010020000000000000C0
      0100000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009999990099999900999999009999990099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000993300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000999999000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000CC6600009933000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC009999990000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000099330000CC660000CC660000CC660000CC660000CC660000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      000099999900CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000009933
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC6600009933
      0000000000000000000000000000000000000000000000000000000000009999
      9900CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      000000000000000000000000000000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      000099330000000000000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00999999000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000999999009999
      99009999990099999900CCCCCC00CCCCCC00CCCCCC0099999900999999009999
      990099999900000000000000000000000000000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      000099330000000000000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00999999000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00999999000000000000000000000000000000000000000000993300009933
      00009933000099330000CC660000CC660000CC66000099330000993300009933
      0000993300000000000000000000000000000000000000000000999999009999
      99009999990099999900CCCCCC00CCCCCC00CCCCCC0099999900999999009999
      9900999999000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00999999000000000000000000000000000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009999
      9900CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC009999
      9900000000000000000000000000000000000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000099999900CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900CCCCCC009999990000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000099999900CCCCCC00CCCCCC00CCCCCC0099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000999999000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009933000099330000993300009933000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009999990099999900999999009999990099999900000000000000
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
      0000403FB8001311C400110FC100120FC100120FC100120FC100120EC4003D3A
      B700000000000000000000000000000000000000000000000000000000000000
      00000904AC000000C5000000C2000000C2000000C2000000C3000000C5000404
      A9000000000000000000000000000000000000000000006B0000006D0200006D
      0200006D0200006C000000690000006400000063000000640000006400000063
      000000660000006B0000006A0000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000003A39
      BA001715EB00100EF7000F0DF4000F0DF4000F0CF4000F0BF4000F0BF7000C09
      EA003431BA000000000000000000000000000000000000000000000000000701
      AF002826F7006464FC006464FC006464FC006464FC006464FC003E3AFC000000
      F6000000AE00000000000000000000000000006C020000A52700009C1700009B
      1800009E1E00009C170000A6260000A6260000A6260000A6260000A6260000A6
      260000A6260000A6260000A62600006B01000000000000000000000000000000
      0000000000009933000099330000993300009933000099330000000000000000
      00000000000000000000000000000000000000000000000000003C39C000191A
      EC001113F3001011ED001011EE001010EE001010EE000F0FED000F0FED00100F
      F2000F0DE9003533BF00000000000000000000000000000000000B05B500191E
      F700C5C3FF000000000000000000000000000000000000000000C5C3FF006464
      FC000200F4000000B3000000000000000000007002003FBF5F00000000000000
      00003FBF5F003FBF5F00BEEDCB00000000000000000000000000F3FFF600CCF0
      D600D6F5DE004CBF680000A02100006F03000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      000000000000000000000000000000000000000000003D3AC6001A1FEB001318
      F2001217EE001216EE001215EE001215EE001214EE001215EE001114EE001112
      EE001113F2001010EA003735C40000000000000000000F0ABC002833F7006A72
      FC0000000000000000000000000000000000000000000000000000000000C5C3
      FF003336F7000D10F5000000BB00000000000071050037BB5D00000000000000
      00003FBF5F00BEEDCB00000000000000000000000000000000004CBF6800009F
      1E00009F1E00009F1E00009F1E00007207000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000004644CD001D27EF000A16F5000E19
      F000141DEF00111AF1001019F100141BEF001017F1000A12F0000F15F0001116
      F0000F14F2001417F4001215EA003F3ECD001510C4003344F8000B1CF500EDED
      FF00000000000000000000000000000000000000000000000000000000000000
      00009396FF000B13F400141BF6000705C4000074070036BC5E00000000000000
      00003FBF5F000000000000000000000000000000000000000000EBFFEE00C7EF
      D200CAF1D500C4F0D000009E1E00007306000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000002328DB002934E600151DF700151D
      F700151DF700151DF700151DF700151DF700151DF700151DF700151DF700151D
      F700151DF700151DF700151DF7001214D6003638DC00172FF7001026F4000000
      0000000000000000000000000000000000000000000000000000000000000000
      00008F96FF000B1BF3001723F6000A0CD90000760A0036C06300000000000000
      00003FBF5F0000000000000000000000000000000000000000004CBF680014AF
      430014AF430014AF430014AF4300007509000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000002126DA00AFAAE600000000000000
      0000292AD100000000000006DA000006DA00EBE8F20000000000EBE8F2002B34
      E100000000000E1BF3001520F0001A1EDA003639DE001B38F700142FF4000000
      00000000000000000000000000000000000000000000000000007683FD000000
      0000BBC3FF000F24F4001A2EF7000C10DB00007D100032BF6200000000000000
      00003FBF5F000000000000000000000000000000000000000000000000000000
      0000000000000000000024B7520000790C000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      0000000000000000000000000000000000002C33E1000816E9008F88EC000000
      00002B34E100000000002B34E1002B34E100000000000D21F300000000002B34
      E1000000000000000000000000000E10DA003337E1001E3DF7001735F5000000
      00000000000000000000000000000000000000000000000000006D80FB000000
      0000BBC3FF00122AF4001A35F7000C12DE0045A45A006AD49200000000000000
      00003FBF5F00000000000000000000000000000000000000000090DEA90029B9
      590029B9590029B9590029B9590045A155000000000000000000993300009933
      00009933000099330000CC660000CC660000CC66000099330000993300009933
      0000993300000000000000000000000000004C52E900AFAAE600000000000611
      E4000611E400000000002B34E1002B34E100000000001029F200000000002B34
      E10000000000766FED00000000002E2DE0006D70EF00425BFA002441F6000000
      000000000000FBFCFF00000000000000000000000000000000006D80FB000000
      0000BBC3FF001732F500334FF8003F45E80044A45A007ADAA100B9EED000B5EC
      CC0043BF70009EE5B60000000000000000000000000000000000000000000000
      0000000000000000000029B95900429F5500000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000993300000000000000000000000000005860ED000000000000000000AFAA
      E600000000000000000000000000AFAAE600EBE8F20000000000EBE8F2002B34
      E1000000000000000000000000004142E9006F73F100647CFD005E76FC000000
      000093A1FF00D7DCFF0093A1FF00000000008696FE00000000006D80FB00FDFE
      FF00BBC3FF005B72FB006175FC005359EF0045A75C0065D7960053CE850051CB
      810049C6770040BF6F00BEEDCB00000000000000000094E3B40094E3B4007CDB
      A0007EDCA20083DDA60053CC840042A25700000000000000000099330000CC66
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC660000CC66
      0000993300000000000000000000000000006168EF004E67F3004E67F3004E67
      F3004E67F3004E67F3004E67F3004E67F3004E67F3004E67F3004E67F3004E67
      F3004E67F3004E67F3004E67F300434BED007176F4006880FD005E76FB000000
      0000B5C2FF00E4E9FF00ACB8FF0000000000AAB6FF00000000006D80FB008F96
      FF008F96FF006076FC006278FD00535AF20044A95F0069D99B005AD28E0058D1
      8C0050CB830042C1730049C57A000000000000000000A9EAC30047C7790052CD
      840056CF880057D0870059D38B0043A55A000000000000000000000000009933
      0000CC660000CC660000CC660000CC660000CC660000CC660000CC6600009933
      0000000000000000000000000000000000006E6CEF00778DF6005374F4004A68
      F4005170F4004B6AF4004A6AF400506EF400516FF4004765F3004C6AF400516D
      F4004866F4004A6AF5004E67F3006765EE005754F00097ABFF00617CFB000000
      0000B5C2FF00E3E8FF00ACBBFF0000000000A9B7FF00000000006D80FB00617B
      FB00657CFC00667DFC00657DFC00504DF00045B0630067DAA10057D4920057D4
      920053D28E004CCD860045C97A00E9FFF60000000000000000003EC272004ECB
      810056D08A005AD28E005AD28E0042A85C000000000000000000000000000000
      000099330000CC660000CC660000CC660000CC660000CC660000993300000000
      000000000000000000000000000000000000000000006B68F1007D90F6005F7C
      F5005875F4005A77F4005975F4005974F4005874F4005874F4005773F4005672
      F4005876F400546DF400605FF00000000000000000005451F20094A7FF005E7C
      FC00B5C2FF00E6EBFF00AFBDFF0000000000AABAFF00000000006D80FB00657D
      FB006981FC006781FC004D49F2000000000046B3690067DDA20057D6950057D6
      950056D5930055D492004FD28D00BEF5D500000000000000000036C375004ACC
      840054D28F0057D4920057D5940041AD5E000000000000000000000000000000
      00000000000099330000CC660000CC660000CC66000099330000000000000000
      00000000000000000000000000000000000000000000000000006C68F3007E93
      F7006282F6005876F4005A77F4005A77F4005876F4005876F4005875F4005B7C
      F4005771F4006160F300000000000000000000000000000000005350F40095AA
      FF005E7CFC00F1F3FF00B5C2FF0000000000AEBDFF00000000007E96FF006983
      FB006C87FD004E4AF300000000000000000047B76E0066DFA70057DA980057D9
      980057D9980057D9980051D89300BAF3D9000000000094E3B4003FC97C004FD1
      8C0055D5930057D6940057D6960042B063000000000000000000000000000000
      0000000000000000000099330000CC6600009933000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006C69
      F5008095F7007190F7006C8BF7006D8CF7006D8CF7006C8BF7006E8EF6005E78
      F500615FF3000000000000000000000000000000000000000000000000005552
      F60099ADFF007E96FF00829AFF007E96FF007E96FF007E96FF007E96FF006D89
      FC004F4AF5000000000000000000000000004ABD750064E1AB0065E0AA0067E1
      AB0068E1AB0068E1AB0065E0AA00C3F5DE0077ECBA005CDD9D0059DB9A005DDC
      9F005FDCA1005DDCA0005BDCA10046B669000000000000000000000000000000
      0000000000000000000000000000993300000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000726FF5006970F600646BF600656CF600656CF600656CF600686FF6006E6C
      F500000000000000000000000000000000000000000000000000000000000000
      00005955F9007378FC007276FC006C72FC006F73FC006D73FC007578FD005C57
      FB0000000000000000000000000000000000000000004AC1740046BE720043BC
      6F0043BC700043BC6E0043BC6E0041BA6C003DBB6A003FB86B0041BB6D0043BB
      6F0044BB700045BC6F0048B86F00000000000000000000000000000000000000
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
      00009999CC0000008000000080000000800000008000000080009999CC000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CCCCCC009999990099999900999999009999990099999900CCCCCC000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      80000000CC000000FF000000FF000000FF000000FF000000FF000000CC000000
      8000000000000000000000000000000000000000000000000000000000009999
      9900B2B2B200CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00B2B2B2009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000080000000
      FF000000FF000000FF000000FF000000FF000000FF000000FF000000FF000000
      FF0000008000000000000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00999999000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000080000000FF000000
      FF000000FF000000FF000000FF000000FF000000FF000000FF000000FF000000
      FF000000FF000000800000000000000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC009999990000000000000000000000000000000000000000000099
      9900009999000099990000999900009999000099990000999900009999000099
      9900009999000000000000000000000000000000000000000000000000009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999000000000000000000000000009999CC000000CC000000FF000000
      FF00FFFFFF00FFFFFF000000FF000000FF000000FF00FFFFFF00FFFFFF000000
      FF000000FF000000CC009999CC0000000000CCCCCC00B2B2B200CCCCCC00CCCC
      CC00FFFFFF00FFFFFF00CCCCCC00CCCCCC00CCCCCC00FFFFFF00FFFFFF00CCCC
      CC00CCCCCC00B2B2B200CCCCCC000000000000000000000000000099990000CC
      CC0000CCCC0000CCCC0000CCCC0000CCCC000099990000CCCC00009999000099
      990000999900009999000000000000000000000000000000000099999900B2B2
      B200B2B2B200B2B2B200B2B2B200B2B2B20099999900B2B2B200999999009999
      990099999900999999000000000000000000000080000000FF000000FF000000
      FF00FFFFFF00FFFFFF00FFFFFF000000FF00FFFFFF00FFFFFF00FFFFFF000000
      FF000000FF000000FF00000080000000000099999900CCCCCC00CCCCCC00CCCC
      CC00FFFFFF00FFFFFF00FFFFFF00CCCCCC00FFFFFF00FFFFFF00FFFFFF00CCCC
      CC00CCCCCC00CCCCCC00999999000000000000000000000000000099990000FF
      FF0000CCCC0000CCCC0000CCCC0000CCCC0000CCCC000099990000CCCC000099
      990000999900009999000000000000000000000000000000000099999900CCCC
      CC00B2B2B200B2B2B200B2B2B200B2B2B200B2B2B20099999900B2B2B2009999
      990099999900999999000000000000000000000080000000FF000000FF000000
      FF000000FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000FF000000
      FF000000FF000000FF00000080000000000099999900CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00999999000000000000000000000000000099990000CC
      CC0000FFFF0000CCCC0000CCCC0000CCCC0000CCCC0000CCCC000099990000CC
      CC0000999900009999000000000000000000000000000000000099999900B2B2
      B200CCCCCC00B2B2B200B2B2B200B2B2B200B2B2B200B2B2B20099999900B2B2
      B20099999900999999000000000000000000000080000000FF000000FF000000
      FF000000FF000000FF00FFFFFF00FFFFFF00FFFFFF000000FF000000FF000000
      FF000000FF000000FF00000080000000000099999900CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00FFFFFF00FFFFFF00FFFFFF00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00999999000000000000000000000000000099990000FF
      FF0000CCCC0000FFFF0000CCCC0000CCCC0000CCCC0000CCCC0000CCCC000099
      990000CCCC00009999000000000000000000000000000000000099999900CCCC
      CC00B2B2B200CCCCCC00B2B2B200B2B2B200B2B2B200B2B2B200B2B2B2009999
      9900B2B2B200999999000000000000000000000080000000FF000000FF000000
      FF000000FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF000000FF000000
      FF000000FF000000FF00000080000000000099999900CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00999999000000000000000000000000000099990000FF
      FF0000FFFF0000CCCC0000FFFF0000CCCC0000CCCC0000CCCC0000CCCC0000CC
      CC0000999900009999000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00B2B2B200CCCCCC00B2B2B200B2B2B200B2B2B200B2B2B200B2B2
      B20099999900999999000000000000000000000080000000FF000000FF000000
      FF00FFFFFF00FFFFFF00FFFFFF000000FF00FFFFFF00FFFFFF00FFFFFF000000
      FF000000FF000000FF00000080000000000099999900CCCCCC00CCCCCC00CCCC
      CC00FFFFFF00FFFFFF00FFFFFF00CCCCCC00FFFFFF00FFFFFF00FFFFFF00CCCC
      CC00CCCCCC00CCCCCC009999990000000000000000000000000000999900FFFF
      FF0000FFFF0000FFFF0000CCCC0000FFFF0000CCCC0000CCCC0000CCCC0000CC
      CC0000CCCC00009999000000000000000000000000000000000099999900E5E5
      E500CCCCCC00CCCCCC00B2B2B200CCCCCC00B2B2B200B2B2B200B2B2B200B2B2
      B200B2B2B2009999990000000000000000009999CC000000CC000000FF000000
      FF00FFFFFF00FFFFFF000000FF000000FF000000FF00FFFFFF00FFFFFF000000
      FF000000FF000000CC009999CC0000000000CCCCCC00B2B2B200CCCCCC00CCCC
      CC00FFFFFF00FFFFFF00CCCCCC00CCCCCC00CCCCCC00FFFFFF00FFFFFF00CCCC
      CC00CCCCCC00B2B2B200CCCCCC000000000000000000000000000099990099FF
      FF00FFFFFF0000FFFF0000FFFF0000CCCC0000FFFF0000CCCC0000CCCC0000CC
      CC0000CCCC00009999000000000000000000000000000000000099999900E5E5
      E500E5E5E500CCCCCC00CCCCCC00B2B2B200CCCCCC00B2B2B200B2B2B200B2B2
      B200B2B2B20099999900000000000000000000000000000080000000FF000000
      FF000000FF000000FF000000FF000000FF000000FF000000FF000000FF000000
      FF000000FF000000800000000000000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC009999990000000000000000000000000000000000000000000099
      9900009999000099990000999900009999000099990000999900009999000099
      9900009999000000000000000000000000000000000000000000000000009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999000000000000000000000000000000000000000000000080000000
      FF000000FF000000FF000000FF000000FF000000FF000000FF000000FF000000
      FF0000008000000000000000000000000000000000000000000099999900CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00999999000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      80000000CC000000FF000000FF000000FF000000FF000000FF000000CC000000
      8000000000000000000000000000000000000000000000000000000000009999
      9900B2B2B200CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00B2B2B2009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009999CC0000008000000080000000800000008000000080009999CC000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CCCCCC009999990099999900999999009999990099999900CCCCCC000000
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
      0000000000000000000000000000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000999999000000
      0000000000000000000000000000000000000000000066CCFF003399CC003399
      CC003399CC003399CC003399CC003399CC003399CC003399CC003399CC003399
      CC003399CC0066CCFF00000000000000000000000000B2B2B200999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      990099999900B2B2B20000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000993300009933
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000999999009999
      99000000000000000000000000000000000066CCFF003399CC0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF003399CC0066CCFF0000000000B2B2B20099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC0099999900B2B2B200000000000000000000000000000000009933
      0000993300009933000099330000993300009933000099330000993300009933
      0000993300000000000000000000000000000000000000000000000000009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900999999000000000000000000000000003399CC0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF003399CC00003366003399CC0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF003399CC000000000099999900CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00999999006666660099999900CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC0099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000993300009933
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000999999009999
      9900000000000000000000000000000000003399CC0000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF0000336600003366000033660000FFFF0000FFFF0000FF
      FF0000FFFF0000FFFF003399CC000000000099999900CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00666666006666660066666600CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00CCCCCC0099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000999999000000
      0000000000000000000000000000000000003399CC0066CCFF0000FFFF0000FF
      FF0000FFFF0000FFFF003399CC00003366003399CC0000FFFF0000FFFF0000FF
      FF0000FFFF0066CCFF003399CC000000000099999900B2B2B200CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00999999006666660099999900CCCCCC00CCCCCC00CCCC
      CC00CCCCCC00B2B2B20099999900000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000066CCFF003399CC0000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FF
      FF0000FFFF003399CC0066CCFF0000000000B2B2B20099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00CCCC
      CC00CCCCCC0099999900B2B2B20000000000CC996600CC996600CC996600CC99
      6600CC996600CC996600CC99660000000000000000003399CC00006699000066
      9900006699000066990000669900006699009999990099999900999999009999
      9900999999009999990099999900000000000000000099999900999999009999
      990099999900999999009999990099999900000000003399CC0066CCFF0000FF
      FF0000FFFF0000FFFF0066CCFF000033660066CCFF0000FFFF0000FFFF0000FF
      FF0066CCFF003399CC0000000000000000000000000099999900B2B2B200CCCC
      CC00CCCCCC00CCCCCC00B2B2B20066666600B2B2B200CCCCCC00CCCCCC00CCCC
      CC00B2B2B200999999000000000000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00CC99660000000000000000003399CC0099FFFF0099FF
      FF0099FFFF0099FFFF0099FFFF00006699009999990000000000000000000000
      0000000000000000000099999900000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00999999000000000066CCFF003399CC0000FF
      FF0000FFFF0000FFFF003399CC00003366003399CC0000FFFF0000FFFF0000FF
      FF003399CC0066CCFF00000000000000000000000000B2B2B20099999900CCCC
      CC00CCCCCC00CCCCCC00999999006666660099999900CCCCCC00CCCCCC00CCCC
      CC0099999900B2B2B2000000000000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00CC99660000000000000000003399CC0099FFFF0099FF
      FF0099FFFF0099FFFF0099FFFF00006699009999990000000000000000000000
      0000000000000000000099999900000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC009999990000000000000000003399CC0066CC
      FF0000FFFF0000FFFF0033669900003366003366990000FFFF0000FFFF0066CC
      FF003399CC00000000000000000000000000000000000000000099999900B2B2
      B200CCCCCC00CCCCCC00808080006666660080808000CCCCCC00CCCCCC00B2B2
      B20099999900000000000000000000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00CC99660000000000000000003399CC0099FFFF0099FF
      FF0099FFFF0099FFFF0099FFFF00006699009999990000000000000000000000
      0000000000000000000099999900000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC0099999900000000000000000066CCFF003399
      CC0000FFFF0000FFFF0000336600003366000033660000FFFF0000FFFF003399
      CC0066CCFF000000000000000000000000000000000000000000B2B2B2009999
      9900CCCCCC00CCCCCC00666666006666660066666600CCCCCC00CCCCCC009999
      9900B2B2B200000000000000000000000000CC996600FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00CC99660000000000000000003399CC0099FFFF0099FF
      FF0099FFFF0099FFFF0099FFFF00006699009999990000000000000000000000
      0000000000000000000099999900000000000000000099999900CCCCCC00CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00999999000000000000000000000000003399
      CC0066CCFF0000FFFF0000336600003366000033660000FFFF0066CCFF003399
      CC00000000000000000000000000000000000000000000000000000000009999
      9900B2B2B200CCCCCC00666666006666660066666600CCCCCC00B2B2B2009999
      990000000000000000000000000000000000CC996600FFFFFF00FFFFFF00CC99
      6600CC996600CC996600CC99660000000000000000003399CC0099FFFF0099FF
      FF003399CC003399CC003399CC003399CC009999990000000000000000009999
      9900999999009999990099999900000000000000000099999900CCCCCC00CCCC
      CC009999990099999900999999009999990000000000000000000000000066CC
      FF003399CC0000FFFF003399CC00003366003399CC0000FFFF003399CC0066CC
      FF0000000000000000000000000000000000000000000000000000000000B2B2
      B20099999900CCCCCC00999999006666660099999900CCCCCC0099999900B2B2
      B20000000000000000000000000000000000CC996600FFFFFF00FFFFFF00CC99
      6600E5E5E500CC9966000000000000000000000000003399CC0099FFFF0099FF
      FF003399CC00CCFFFF0000669900000000009999990000000000000000009999
      9900E5E5E5009999990000000000000000000000000099999900CCCCCC00CCCC
      CC0099999900CCCCCC0099999900000000000000000000000000000000000000
      00003399CC0066CCFF0000FFFF0000FFFF0000FFFF0066CCFF003399CC000000
      0000000000000000000000000000000000000000000000000000000000000000
      000099999900B2B2B200CCCCCC00CCCCCC00CCCCCC00B2B2B200999999000000
      000000000000000000000000000000000000CC996600FFFFFF00FFFFFF00CC99
      6600CC996600000000000000000000000000000000003399CC0099FFFF0099FF
      FF003399CC000066990000000000000000009999990000000000000000009999
      9900999999000000000000000000000000000000000099999900CCCCCC00CCCC
      CC00999999009999990000000000000000000000000000000000000000000000
      000066CCFF003399CC003399CC003399CC003399CC003399CC0066CCFF000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B2B2B2009999990099999900999999009999990099999900B2B2B2000000
      000000000000000000000000000000000000CC996600CC996600CC996600CC99
      660000000000000000000000000000000000000000003399CC003399CC003399
      CC003399CC000000000000000000000000009999990099999900999999009999
      9900000000000000000000000000000000000000000099999900999999009999
      9900999999000000000000000000000000000000000000000000000000000000
      0000000000000000000066CCFF0066CCFF0066CCFF0000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000B2B2B200B2B2B200B2B2B20000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CC99990099330000CC9999000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CCCCCC0099999900CCCCCC000000000000000000000000000000
      000000000000CC996600993300009933000099330000CC996600000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CCCCCC00999999009999990099999900CCCCCC00000000000000
      00000000000000000000000000000000000000000000CC996600CC996600CC99
      6600CC996600CC996600CC996600CC996600CC996600CC996600CC996600CC99
      6600CC9999009933000099330000993300000000000099999900999999009999
      9900999999009999990099999900999999009999990099999900999999009999
      9900CCCCCC009999990099999900999999000000000000000000000000000000
      0000CC9966009933000000000000000000000000000099330000CC9966000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CCCCCC009999990000000000000000000000000099999900CCCCCC000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF008080
      8000993300009933000099330000CC9999000000000099999900000000000000
      0000000000000000000000000000000000000000000000000000000000008080
      8000999999009999990099999900CCCCCC000000000000000000000000000000
      0000993300000000000000000000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000000000000000000000000000000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00E5E5
      E500E5E5E500E5E5E500E5E5E500E5E5E5008080800080808000808080009933
      00009933000099330000CC99990000000000000000009999990000000000CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC008080800080808000808080009999
      99009999990099999900CCCCCC00000000000000000000000000000000000000
      00009933000000000000CC99660099330000CC99660000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009999990000000000CCCCCC0099999900CCCCCC0000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00E5E5E50099996600FFFFCC00FFFFCC00FFFFFF00CCCC
      990099330000CC99990000000000000000000000000099999900000000000000
      00000000000000000000CCCCCC0099999900E5E5E500E5E5E500FFFFFF00E5E5
      E50099999900CCCCCC0000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00E5E5
      E500E5E5E500E5E5E50099999900F2EABF00FFFFCC00FFFFCC00FFFFCC00FFFF
      FF0066666600000000000000000000000000000000009999990000000000CCCC
      CC00CCCCCC00CCCCCC0099999900E5E5E500E5E5E500E5E5E500E5E5E500FFFF
      FF00666666000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00FFFF
      FF00FFFFFF00FFFFFF0099999900F2EABF00FFFFFF00F2EABF00FFFFCC00FFFF
      CC00666666000000000000000000000000000000000099999900000000000000
      0000000000000000000099999900E5E5E500FFFFFF00E5E5E500E5E5E500E5E5
      E500666666000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00E5E5
      E500E5E5E500E5E5E50099999900F2EABF00FFFFFF00FFFFFF00F2EABF00FFFF
      CC0066666600000000000000000000000000000000009999990000000000CCCC
      CC00CCCCCC00CCCCCC0099999900E5E5E500FFFFFF00FFFFFF00E5E5E500E5E5
      E500666666000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF0099999900F2EABF00F2EABF00F2EABF009999
      6600808080000000000000000000000000000000000099999900000000000000
      000000000000000000000000000099999900E5E5E500E5E5E500E5E5E5009999
      9900808080000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00E5E5
      E500E5E5E500E5E5E500E5E5E500E5E5E500999999009999990099999900E5E5
      E500CC996600000000000000000000000000000000009999990000000000CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC00999999009999990099999900E5E5
      E500999999000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CC9966000000000000000000000000000000000099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00E5E5
      E500E5E5E500E5E5E500E5E5E500E5E5E500FFFFFF00CC996600CC996600CC99
      6600CC996600000000000000000000000000000000009999990000000000CCCC
      CC00CCCCCC00CCCCCC00CCCCCC00CCCCCC000000000099999900999999009999
      9900999999000000000000000000000000000000000000000000000000000000
      0000993300000000000099330000000000009933000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000999999000000000099999900000000009999990000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CC996600E5E5E500CC99
      6600000000000000000000000000000000000000000099999900000000000000
      0000000000000000000000000000000000000000000099999900E5E5E5009999
      9900000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900000000000000000000000000999999000000
      00000000000000000000000000000000000000000000CC996600FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CC996600CC9966000000
      0000000000000000000000000000000000000000000099999900000000000000
      0000000000000000000000000000000000000000000099999900999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900000000000000000000000000999999000000
      00000000000000000000000000000000000000000000CC996600CC996600CC99
      6600CC996600CC996600CC996600CC996600CC996600CC996600000000000000
      0000000000000000000000000000000000000000000099999900999999009999
      9900999999009999990099999900999999009999990099999900000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099330000000000000000000000000000993300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000099999900000000000000000000000000999999000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000993300009933000099330000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000999999009999990099999900000000000000
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
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00CE9C
      6300CE9C63009C310000000000000000000000000000B5B5B500CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00B5B5
      B500B5B5B5009C9C9C0000000000000000000000000000000000000000000000
      00009C3100009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      63009C310000CE9C63009C31000000000000B5B5B500B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5
      B5009C9C9C00B5B5B5009C9C9C00000000000000000000000000000000009C31
      0000CE630000CE6300009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE009C9C9C00000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE
      9C00CE9C63009C3100009C31000000000000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00B5B5B5009C9C9C009C9C9C000000000000000000000000009C310000CE63
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE009C9C9C000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C0000CE0000009C0000FFCE9C000000FF000000CE00FFCE
      9C00CE9C6300CE9C63009C31000000000000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00B5B5B5009C9C9C00CECECE00B5B5B5009C9C9C00CECE
      CE00B5B5B500B5B5B5009C9C9C0000000000000000009C310000CE630000CE63
      0000CE630000CE630000CE630000CE6300009C31000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE009C9C9C0000000000000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300CE9C6300CE9C63009C310000B5B5B50000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B500B5B5B500B5B5B5009C9C9C00000000009C310000CE630000CE63
      00009C3100009C310000CE630000CE630000CE6300009C310000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C009C9C9C00CECECE00CECECE00CECECE009C9C9C00000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE
      9C00CE9C6300CE9C6300CE9C63009C310000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00B5B5B500B5B5B500B5B5B5009C9C9C00000000009C310000CE6300009C31
      000000000000000000009C310000CE630000CE630000CE6300009C3100000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C0000000000000000009C9C9C00CECECE00CECECE00CECECE009C9C9C000000
      00000000000000000000000000000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300FFCE
      9C00FFCE9C00CE9C6300CE9C63009C31000000000000B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500CECE
      CE00CECECE00B5B5B500B5B5B5009C9C9C00000000009C3100009C3100000000
      00000000000000000000000000009C310000CE630000CE630000CE6300009C31
      000000000000000000000000000000000000000000009C9C9C009C9C9C000000
      00000000000000000000000000009C9C9C00CECECE00CECECE00CECECE009C9C
      9C00000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300FFCE9C00FFCE9C00CE9C63009C3100000000000000000000B5B5B5000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B500CECECE00CECECE00B5B5B5009C9C9C000000000000000000000000000000
      0000000000000000000000000000000000009C310000CE630000CE630000CE63
      00009C3100000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE009C9C9C00000000000000000000000000000000000000000000000000CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C
      6300CE9C6300CE9C63009C31000000000000000000000000000000000000B5B5
      B50000000000CECECE00CECECE00CECECE00CECECE00CECECE0000000000B5B5
      B500B5B5B500B5B5B5009C9C9C00000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300000000000000000000000000000000000000000000000000B5B5
      B500000000000000000000000000000000000000000000000000000000000000
      0000B5B5B5000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C310000CE63
      0000CE6300009C31000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000000000000000
      0000CE9C6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFF
      FF00CE9C63000000000000000000000000000000000000000000000000000000
      0000B5B5B50000000000CECECE00CECECE00CECECE00CECECE00CECECE000000
      0000B5B5B5000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C31
      0000CE6300009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00CECECE009C9C9C0000000000000000000000000000000000000000000000
      0000CE9C6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C630000000000000000000000000000000000000000000000
      0000B5B5B5000000000000000000000000000000000000000000000000000000
      000000000000B5B5B50000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C3100009C31000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C0000000000000000000000000000000000000000000000
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
      000000000000000000009C3100009C3100009C3100009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C310000CE630000CE6300009C3100009C3100009C31
      00009C3100009C310000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00CECECE00CECECE009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C310000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000009C310000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C310000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C310000CE630000CE6300009C3100009C3100009C31
      00009C3100009C310000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00CECECE00CECECE009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C310000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C310000CE630000CE6300009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE00CECECE009C9C9C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C3100009C3100009C3100009C310000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
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
      00000000000000000000000000000000000000000000CECECE00C6C6C600E7E7
      E700000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECECE00C6C6C600E7E7
      E700000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECECE00C6C6C600E7E7
      E700000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECECE00C6C6C600E7E7
      E700000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CECECE00639C9C0063639C009C9C
      9C00E7E7E7000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CECECE00B5B5B5009C9C9C009C9C
      9C00E7E7E7000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CECECE00639C9C0063639C009C9C
      9C00E7E7E7000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CECECE00B5B5B5009C9C9C009C9C
      9C00E7E7E7000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000063CEFF00319CCE006363
      9C009C9C9C00E7E7E70000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECECE00B5B5B5009C9C
      9C009C9C9C00E7E7E70000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000063CEFF00319CCE006363
      9C009C9C9C00E7E7E70000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECECE00B5B5B5009C9C
      9C009C9C9C00E7E7E70000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECEFF0063CEFF00319C
      CE0063639C009C9C9C00E7E7E700000000000000000000000000000000000000
      00000000000000000000000000000000000000000000E7E7E700CECECE00B5B5
      B5009C9C9C009C9C9C00E7E7E700000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECEFF0063CEFF00319C
      CE0063639C009C9C9C00E7E7E700000000000000000000000000000000000000
      00000000000000000000000000000000000000000000E7E7E700CECECE00B5B5
      B5009C9C9C009C9C9C00E7E7E700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CECEFF0063CE
      FF00319CCE0063639C009C9C9C00E7E7E7000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E7E7E700CECE
      CE00B5B5B5009C9C9C009C9C9C00E7E7E7000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CECEFF0063CE
      FF00319CCE0063639C009C9C9C00E7E7E7000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E7E7E700CECE
      CE00B5B5B5009C9C9C009C9C9C00E7E7E7000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CECE
      FF0063CEFF00319CCE0063639C00CECECE00FFCECE00CE9C9C00CE9C9C00CE9C
      9C00CECE9C00E7E7E7000000000000000000000000000000000000000000E7E7
      E700CECECE00B5B5B5009C9C9C00CECECE00E7E7E7009C9C9C009C9C9C009C9C
      9C00B5B5B500E7E7E7000000000000000000000000000000000000000000CECE
      FF0063CEFF00319CCE0063639C00CECECE00FFCECE00CE9C9C00CE9C9C00CE9C
      9C00CECE9C00E7E7E7000000000000000000000000000000000000000000E7E7
      E700CECECE00B5B5B5009C9C9C00CECECE00E7E7E7009C9C9C009C9C9C009C9C
      9C00B5B5B500E7E7E70000000000000000000000000000000000000000000000
      0000CECEFF0063CEFF00B5B5B500CE9C9C00CECE9C00F7EFBD00FFFFCE00F7EF
      BD00F7EFBD00CE9C9C00EFC6DE00000000000000000000000000000000000000
      0000E7E7E700CECECE00B5B5B5009C9C9C00B5B5B500CECECE00CECECE00CECE
      CE00CECECE009C9C9C00E7E7E700000000000000000000000000000000000000
      0000CECEFF0063CEFF00B5B5B500CE9C9C00CECE9C00F7EFBD00FFFFCE00F7EF
      BD00F7EFBD00CE9C9C00EFC6DE00000000000000000000000000000000000000
      0000E7E7E700CECECE00B5B5B5009C9C9C00B5B5B500CECECE00CECECE00CECE
      CE00CECECE009C9C9C00E7E7E700000000000000000000000000000000000000
      000000000000E7E7E700CE9C9C00FFCE9C00FFFFCE00FFFFCE00FFFFCE00FFFF
      FF00FFFFFF00FFFFFF00CE9C9C00E7E7E7000000000000000000000000000000
      000000000000E7E7E7009C9C9C00E7E7E700CECECE00CECECE00CECECE00E7E7
      E700E7E7E700E7E7E7009C9C9C00E7E7E7000000000000000000000000000000
      000000000000E7E7E700CE9C9C00FFCE9C00FFFFCE00FFFFCE00FFFFCE00FFFF
      FF00FFFFFF00FFFFFF00CE9C9C00E7E7E7000000000000000000000000000000
      000000000000E7E7E7009C9C9C00E7E7E700CECECE00CECECE00CECECE00E7E7
      E700E7E7E700E7E7E7009C9C9C00E7E7E7000000000000000000000000000000
      000000000000FFCECE00CECE9C00FFFFCE00F7EFBD00FFFFCE00FFFFCE00FFFF
      FF00FFFFFF00FFFFFF00F7EFBD00CECE9C000000000000000000000000000000
      000000000000E7E7E700B5B5B500CECECE00CECECE00CECECE00CECECE00E7E7
      E700E7E7E700E7E7E700CECECE00B5B5B5000000000000000000000000000000
      000000000000FFCECE00CECE9C00FFFFCE00F7EFBD00F7EFBD00CE633100FFFF
      FF00FFFFFF00FFFFFF00F7EFBD00CECE9C000000000000000000000000000000
      000000000000E7E7E700B5B5B500CECECE00CECECE00CECECE009C9C9C00E7E7
      E700E7E7E700E7E7E700CECECE00B5B5B5000000000000000000000000000000
      000000000000CECE9C00FFCE9C00F7EFBD00CECECE00CECECE00CECECE00CECE
      CE00CECECE00FFFFFF00F7EFBD00CE9C9C000000000000000000000000000000
      000000000000B5B5B500E7E7E700CECECE00CECECE00CECECE00CECECE00CECE
      CE00E7E7E700E7E7E700CECECE009C9C9C000000000000000000000000000000
      000000000000CECE9C00F7EFBD00F7EFBD00FFCE9C00FFCE9C00CE633100F7EF
      BD00F7EFBD00FFFFFF00F7EFBD00CE9C9C000000000000000000000000000000
      000000000000B5B5B500E7E7E700CECECE00CECECE00CECECE009C9C9C00CECE
      CE00E7E7E700E7E7E700CECECE009C9C9C000000000000000000000000000000
      000000000000CE9C9C00F7EFBD00F7EFBD00E7CE6300CE630000CE630000CE63
      0000CE630000FFFFCE00FFFFCE00CE9C9C000000000000000000000000000000
      0000000000009C9C9C00CECECE00CECECE009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C00CECECE00CECECE009C9C9C000000000000000000000000000000
      000000000000CE9C9C00F7EFBD00F7EFBD00CE630000CE633100CE633100CE63
      3100CE633100FFFFCE00FFFFCE00CE9C9C000000000000000000000000000000
      0000000000009C9C9C00CECECE00CECECE009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C00CECECE00CECECE009C9C9C000000000000000000000000000000
      000000000000CECE9C00F7EFBD00FFFFCE00F7EFBD00FFFFCE00FFFFCE00FFFF
      CE00FFFFCE00FFFFCE00F7EFBD00CE9C9C000000000000000000000000000000
      000000000000B5B5B500CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE00CECECE00CECECE009C9C9C000000000000000000000000000000
      000000000000CECE9C00F7EFBD00F7EFBD00FFCE9C00FFCE9C00CE633100F7EF
      BD00F7EFBD00FFFFCE00F7EFBD00CE9C9C000000000000000000000000000000
      000000000000B5B5B500CECECE00CECECE00CECECE00CECECE009C9C9C00CECE
      CE00CECECE00CECECE00CECECE009C9C9C000000000000000000000000000000
      000000000000FFCECE00CECE9C00FFFFFF00FFFFFF00F7EFBD00F7EFBD00F7EF
      BD00F7EFBD00FFFFCE00CECE9C00CECE9C000000000000000000000000000000
      000000000000E7E7E700B5B5B500E7E7E700E7E7E700CECECE00CECECE00CECE
      CE00CECECE00CECECE00B5B5B500B5B5B5000000000000000000000000000000
      000000000000FFCECE00CECE9C00FFFFCE00FFFFCE00FFCE9C00CE633100FFFF
      CE00F7EFBD00FFFFCE00CECE9C00CECE9C000000000000000000000000000000
      000000000000E7E7E700B5B5B500E7E7E700E7E7E700CECECE009C9C9C00CECE
      CE00CECECE00CECECE00B5B5B500B5B5B5000000000000000000000000000000
      000000000000E7E7E700CE9C9C00EFC6DE00FFFFFF00FFFFCE00F7EFBD00F7EF
      BD00F7EFBD00FFCE9C00CE9C9C00E7E7E7000000000000000000000000000000
      000000000000E7E7E7009C9C9C00E7E7E700E7E7E700CECECE00CECECE00CECE
      CE00CECECE00E7E7E7009C9C9C00E7E7E7000000000000000000000000000000
      000000000000E7E7E700CE9C9C00E7E7E700FFFFFF00F7EFBD00F7EFBD00F7EF
      BD00F7EFBD00FFCE9C00CE9C9C00E7E7E7000000000000000000000000000000
      000000000000E7E7E7009C9C9C00E7E7E700E7E7E700CECECE00CECECE00CECE
      CE00CECECE00E7E7E7009C9C9C00E7E7E7000000000000000000000000000000
      00000000000000000000FFCECE00CE9C9C00FFCECE00F7EFBD00F7EFBD00F7EF
      BD00CECE9C00CE9C9C00FFCECE00000000000000000000000000000000000000
      00000000000000000000E7E7E7009C9C9C00E7E7E700CECECE00CECECE00CECE
      CE00B5B5B5009C9C9C00E7E7E700000000000000000000000000000000000000
      00000000000000000000FFCECE00CE9C9C00FFCECE00F7EFBD00F7EFBD00F7EF
      BD00FFCE9C00CE9C9C00FFCECE00000000000000000000000000000000000000
      00000000000000000000E7E7E7009C9C9C00E7E7E700CECECE00CECECE00CECE
      CE00B5B5B5009C9C9C00E7E7E700000000000000000000000000000000000000
      0000000000000000000000000000E7E7E700CECE9C00CE9C9C00CE9C9C00CE9C
      9C00CE9C9C00E7E7E70000000000000000000000000000000000000000000000
      0000000000000000000000000000E7E7E700B5B5B5009C9C9C009C9C9C009C9C
      9C009C9C9C00E7E7E70000000000000000000000000000000000000000000000
      0000000000000000000000000000E7E7E700CECE9C00CE9C9C00CE9C9C00CE9C
      9C00CE9C9C00E7E7E70000000000000000000000000000000000000000000000
      0000000000000000000000000000E7E7E700B5B5B5009C9C9C009C9C9C009C9C
      9C009C9C9C00E7E7E70000000000000000000000000000000000000000000000
      00000000000000000000E7EFF700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E7EFF700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E7EF
      F700E7E7E700CECECE00E7E7E700E7EFF7000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E7EF
      F70000000000CECECE00E7E7E700E7EFF7000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C3100009C3100000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C000000000000000000E7EFF700E7E7E700B5B5
      B500CE9C9C009C6363009C636300B5B5B500CECECE00E7E7E700E7EFF7000000
      00000000000000000000000000000000000000000000E7EFF70000000000B5B5
      B5009C9C9C009C9C9C009C9C9C00B5B5B500CECECE0000000000E7EFF7000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700CE6300009C310000E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700CECECE009C9C9C00E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C0000000000E7E7E700CE9C9C009C636300CE9C
      9C00CE9C9C00FFFFFF009C6363009C9C9C009C9C9C00B5B5B500E7E7E7000000
      000000000000000000000000000000000000000000009C9C9C009C9C9C009C9C
      9C009C9C9C00FFFFFF009C9C9C009C9C9C009C9C9C00B5B5B500000000000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700CE6300009C310000E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700CECECE009C9C9C00E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C00000000009C636300CE9C9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630031639C0031639C0031639C00E7EFF7000000
      0000000000000000000000000000000000009C9C9C009C9C9C00C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00E7EFF7000000
      000000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700CE6300009C310000E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700CECECE009C9C9C00E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C00000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630063CECE0063CECE00009CCE00FFFFFF00FFCE
      CE00000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00C6C6C600C6C6C6009C9C9C00FFFFFF00CECE
      CE0000000000000000000000000000000000000000009C310000CE630000CE63
      00009C310000E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C31
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E7009C9C
      9C00CECECE00CECECE009C9C9C00000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630063CECE0063CEFF00319CCE00FFCECE00CE63
      0000000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00C6C6C600CECECE009C9C9C00CECECE009C9C
      9C0000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE6300009C3100009C3100009C3100009C3100009C3100009C310000CE63
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C00000000009C636300FFCE9C00CE9C9C00CE9C
      6300FFCECE00FFFFFF009C6363009CCECE009CCEFF00B5B5B500FF630000CE63
      0000000000000000000000000000000000009C9C9C00C6C6C6009C9C9C009C9C
      9C00CECECE00FFFFFF009C9C9C00CECECE00CECECE00B5B5B5009C9C9C009C9C
      9C0000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE630000CE63
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE00CECECE009C9C9C00000000009C636300FFCE9C009C636300FFFF
      FF00FFCECE00FFFFFF009C6363009CCECE00C6C6C600CE630000CE630000CE63
      0000CE630000CE630000CE630000000000009C9C9C00C6C6C60063636300FFFF
      FF00CECECE00FFFFFF009C9C9C00CECECE00C6C6C6009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C0000000000000000009C310000CE630000CE63
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      0000CE630000CE6300009C31000000000000000000009C9C9C00CECECE00CECE
      CE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C00CECECE00CECECE009C9C9C00000000009C636300FFCE9C00CE9C9C009C63
      6300FFCECE00FFFFFF009C63630000000000CE630000CE630000CE630000CE63
      0000CE630000CE630000CE630000000000009C9C9C00C6C6C6009C9C9C006363
      6300CECECE00FFFFFF009C9C9C00E7E7E7009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C0000000000000000009C310000CE6300009C31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C310000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C00CECECE009C9C9C00000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630000000000CE9C9C00CE630000CE630000CE63
      0000CE630000CE630000CE630000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00E7E7E7009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C0000000000000000009C310000CE6300009C31
      0000FFFFFF009C3100009C3100009C3100009C3100009C3100009C310000FFFF
      FF009C310000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00FFFF
      FF009C9C9C00CECECE009C9C9C00000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C636300CECECE00E7EFF700CE9C9C00FF630000CE63
      0000000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7EFF7009C9C9C009C9C9C009C9C
      9C0000000000000000000000000000000000000000009C310000CE6300009C31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C310000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C00CECECE009C9C9C00000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C6363009CCECE00000000009CCECE00FFCE9C00CE63
      0000000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7E7E700CECECE00C6C6C6009C9C
      9C0000000000000000000000000000000000000000009C310000E7E7E7009C31
      0000FFFFFF009C3100009C3100009C3100009C3100009C3100009C310000FFFF
      FF009C3100009C3100009C31000000000000000000009C9C9C00E7E7E7009C9C
      9C00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00FFFF
      FF009C9C9C009C9C9C009C9C9C00000000009C636300CE9C9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C636300CECECE0000000000319CCE0000000000FFCE
      9C00000000000000000000000000000000009C9C9C009C9C9C00C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7E7E7009C9C9C0000000000C6C6
      C60000000000000000000000000000000000000000009C310000CE6300009C31
      0000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C310000CE6300009C31000000000000000000009C9C9C00CECECE009C9C
      9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF009C9C9C00CECECE009C9C9C000000000000000000C6C6C600CE9C6300CE9C
      9C00CECE9C00FFFFFF009C636300009CCE00009CCE00009CCE00000000000000
      00000000000000000000000000000000000000000000C6C6C6009C9C9C009C9C
      9C00C6C6C600FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
      000000000000000000000000000000000000000000009C3100009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C3100009C3100009C31000000000000000000009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C0000000000000000000000000000000000CECE
      CE00CE9C9C009C6363009C636300000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CECE
      CE009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
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
      9C00000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF00000000000000000000000000000000009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000CECECE00000000000000000063636300000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000063636300000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000003131CE000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECECE00636363000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CECECE00636363000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000003131CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      0000000000000000FF00000000000000000000000000000000009C9C9C00E7E7
      E700CECECE009C9C9C0000000000000000000000000000000000000000000000
      000000000000CECECE0000000000000000000000000000000000CECECE006363
      63000000000000000000FF9C00009C3100009C3100009C310000000000000000
      0000000000000000000000000000000000000000000000000000CECECE006363
      63000000000000000000CECECE00636363006363630063636300000000000000
      0000000000000000000000000000000000000000000000000000000000003131
      CE000063FF000000CE0000000000000000000000000000000000000000000000
      00000000FF000000000000000000000000000000000000000000000000009C9C
      9C00E7E7E7009C9C9C0000000000000000000000000000000000000000000000
      0000CECECE00000000000000000000000000000000000000000000000000CECE
      CE0063636300FF9C0000CE630000CE630000CE630000CE6300009C3100000000
      000000000000000000000000000000000000000000000000000000000000CECE
      CE0063636300CECECE009C9C9C009C9C9C009C9C9C009C9C9C00636363000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000CE000000FF0000009C00000000000000000000000000000000000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      00009C9C9C00CECECE009C9C9C0000000000000000000000000000000000CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      0000FF9C0000CE630000FF9C0000CE630000CE630000CE6300009C3100000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CECECE009C9C9C00CECECE009C9C9C009C9C9C009C9C9C00636363000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000FF000000
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE009C9C9C000000000000000000CECECE009C9C
      9C0000000000000000000000000000000000000000000000000000000000FF9C
      0000CE630000FF9C0000FF9C0000FF9C0000CE630000CE6300009C3100000000
      000000000000000000000000000000000000000000000000000000000000CECE
      CE009C9C9C00CECECE00CECECE00CECECE009C9C9C009C9C9C00636363000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000FF0000009C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE009C9C9C00CECECE009C9C9C000000
      000000000000000000000000000000000000000000000000000000000000CE63
      0000FF9C6300FF9C6300FF9C0000FF9C0000CE630000CE6300009C3100000000
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C9C00636363000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000CE000000FF0000009C00000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000009C9C9C00CECECE009C9C9C00000000000000
      000000000000000000000000000000000000000000000000000000000000CE63
      0000FFFFFF00FFFFFF00FF9C6300CE630000FF9C0000CE630000CE6300009C31
      0000000000000000000000000000000000000000000000000000000000009C9C
      9C00FFFFFF00FFFFFF00CECECE009C9C9C00CECECE009C9C9C009C9C9C006363
      6300000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000CE0000009C000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00CECECE009C9C9C009C9C9C009C9C9C000000
      000000000000000000000000000000000000000000000000000000000000CE63
      0000FF9C6300FF9C6300CE630000FFFFFF00FF9C6300FF9C0000CE6300009C31
      00009C3100009C3100009C310000000000000000000000000000000000009C9C
      9C00CECECE00CECECE009C9C9C00FFFFFF00CECECE00CECECE009C9C9C006363
      6300636363006363630063636300000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000CE000000
      9C00000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00CECECE009C9C9C0000000000000000009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      0000CE630000CE630000CE630000CE630000FFFFFF00FF9C63009C310000CE63
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      00009C9C9C009C9C9C009C9C9C009C9C9C00FFFFFF00CECECE00636363009C9C
      9C009C9C9C009C9C9C009C9C9C00636363000000000000000000000000000000
      CE000000FF000000FF0000009C00000000000000000000000000000000000000
      CE0000009C000000000000000000000000000000000000000000000000009C9C
      9C00CECECE00CECECE009C9C9C00000000000000000000000000000000009C9C
      9C009C9C9C000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE630000CE630000CE630000FF9C
      0000CE630000CE630000CE6300009C3100000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C009C9C9C009C9C9C00CECE
      CE009C9C9C009C9C9C009C9C9C006363630000000000000000000000CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      00000000CE0000009C00000000000000000000000000000000009C9C9C00E7E7
      E700CECECE009C9C9C0000000000000000000000000000000000000000000000
      00009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CE630000FF9C6300FF9C
      0000FF9C0000CE630000CE6300009C3100000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C009C9C9C0063636300000000000000000063639C000000
      CE0063639C000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE00000000000000000000000000CECECE009C9C
      9C00CECECE000000000000000000000000000000000000000000000000000000
      000000000000000000009C9C9C00000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CE630000FF9C6300FF9C
      6300FF9C0000CE630000CE630000FF9C00000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C009C9C9C00CECECE000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CE630000FFFFFF00FF9C
      6300CE630000CE630000FF9C0000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00FFFFFF00CECE
      CE009C9C9C009C9C9C00CECECE00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CE630000CE63
      0000CE630000FF9C000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C00CECECE0000000000000000000000000000000000000000000000
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
      0000000000000000000000000000000000000000000000000000735A4200634A
      3100634A3100634A3100634A3100634A3100634A31006B5239006B5239006B52
      39006B5239000000000000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C00000000000000000031313100313131009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000846B5A00E7CE
      BD00DEBDAD00DEBDAD00DEBDAD00DEBDAD00DEBDAD00DEBDAD00DEBDAD00DEBD
      AD006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C000000000000000000CECECE0063636300313131003131
      3100000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000947B6B00FFEF
      EF00FFEFE700F7E7DE00F7E7D600F7DED600F7DED600F7DED600F7DED600DEBD
      AD006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF009C310000FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000063636300636363006363
      6300313131009C9C9C0000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000094846B00FFF7
      EF00B59C9400AD948C00A58C84009C847300947B6B00947B6B00947B6B00DEBD
      AD006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF009C3100009C3100009C310000FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C009C9C9C009C9C9C00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C00000000000000000000000000CECECE00636363006363
      63006363630031313100009C9C00000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C847300FFF7
      F700FFF7EF00FFEFEF00FFEFE700F7E7DE00F7E7D600FFEFEF00F7DED600DEBD
      AD006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF009C3100009C3100009C3100009C3100009C310000FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C00CECECE00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000636363006363
      63009CFFFF009CCECE009CCECE00009C9C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000A58C7B00FFFF
      FF00BDA59C00B59C9400AD948400A58C7B009C847300947B6B00947B6B00DEBD
      AD006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF009C3100009C310000FFFFFF009C3100009C3100009C310000FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C009C9C9C00CECECE009C9C9C009C9C9C009C9C9C00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000CECECE008484
      8400CEFFFF009CFFFF009CCECE009CCECE00009C9C009CCECE00000000000000
      0000000000000000000000000000000000000000000000000000AD948400FFFF
      FF00FFFFFF00FFF7F700FFF7EF00FFEFEF00FFEFE700FFEFEF00F7DED600DEBD
      AD006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF009C310000FFFFFF00FFFFFF00FFFFFF009C3100009C3100009C310000FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C00CECECE00CECECE00CECECE009C9C9C009C9C9C009C9C9C00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000000000000063CE
      CE00FFFFFF00CEFFFF009CFFFF009CFFFF009CCECE0063CECE00009C9C000000
      0000000000000000000000000000000000000000000000000000AD9C8C00FFFF
      FF00C6AD9C00BDA59400B59C8C00AD948400A58C7B00947B6B00947B6B00DEBD
      AD006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C3100009C310000FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C9C00CECE
      CE00CECECE009C9C9C00000000000000000000000000000000000000000063CE
      CE00FFFFFF00CEFFFF00CEFFFF009CFFFF009CFFFF009CCECE009CCECE00009C
      9C0063CECE000000000000000000000000000000000000000000B5A59400FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFF7F700FFF7EF00FFEFEF00F7DED600DEBD
      AD006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C310000FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000000000000000
      00009CCECE00FFFFFF00CEFFFF00CEFFFF009CFFFF009CFFFF009CCECE00FFCE
      CE009C3100009C31000000000000000000000000000000000000BDA59C00FFFF
      FF00C6B5A500BDAD9C00BDA59400B59C8C00E7D6CE00FFF7EF00FFEFEF00DEBD
      AD006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00CECECE009C9C9C0000000000000000000000000000000000000000000000
      000063CECE00FFFFFF00CEFFFF00CEFFFF00FFCECE00CE630000CE6300009C31
      00009C3100009C3100009C310000000000000000000000000000BDAD9C00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00948473006B5239006B52
      39006B5239000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C
      6300CE9C6300CE9C6300000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      0000000000009CCECE00FFFFFF00CEFFFF00CE630000CE630000CE630000CE63
      00009C3100009C3100009C3100009C3100000000000000000000C6B5A500FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0094847300F7EFE7009484
      7300000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7
      E700CE9C630000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C00CECE
      CE009C9C9C000000000000000000000000000000000000000000000000000000
      00000000000063CECE00FFFFFF00FFCECE00CE630000CE630000CE630000CE63
      0000CE6300009C3100009C3100009C3100000000000000000000CEB5AD00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0094847300948473000000
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C
      63000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000FF9C0000FF9C0000CE630000CE630000CE630000CE63
      0000CE630000CE6300009C3100009C3100000000000000000000C6B5AD00CEB5
      AD00C6B5A500BDADA500BDAD9C00B5A59400AD9C8C0094847300000000000000
      0000000000000000000000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63000000
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
      0000000000000000000000000000000000000000000000000000635239006352
      4200634A3100735242007363520073524200634A3100634A3100634A3100634A
      3100634A31000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000C6ADA500F7F7F700E7DE
      D600E7D6C600E7CEC6009494B500D6C6B500E7BDA500D6B5A500D6B5A500D6AD
      9400D6A59400634A3100000000000000000000000000735A4A006B524200634A
      3900634A3100634A3100634A3100634A3100634A3100634A3100634A3100634A
      3100634A3100634A3100634A3100634A310000000000000000004A6363003952
      5200395252003952520039525200395252003952520039525200395252003952
      520039525200395252004A6363000000000000000000000000005A6B6B004A5A
      52004A5A52004A5A52004A5A52004A5A52004A5A52004A5A52004A5A52004A5A
      52004A5A520000000000000000000000000000000000C6ADA500FFF7F700F7F7
      F700F7EFE7003152C6001039B500737BC600E7D6D600F7D6C600E7D6C600E7CE
      B500D6AD9400634A31000000000000000000B5A59400EFDED600EFDECE00E7CE
      BD00E7C6B500DEBDAD00DEBDAD00DEBDAD00DEBDA500DEBDA500DEBDA500DEB5
      9C00DEB59400E7AD9400E7AD8C00634A3100000000001884B5001884B500187B
      B500107BAD00107BAD001073AD000873A5000873A500086BA500006B9C00006B
      9C00006B9C0000639C00293939004A636300000000000873A5000873A5000873
      A5000873A5000873A5000873A5000873A5000873A5000873A5000873A5000873
      A5000873A50042524A00000000000000000000000000C6ADA500FFF7F700D6D6
      E7003152C600315AF700214AE7001039B500A59CC600F7D6C600F7D6C600E7CE
      B500D6AD9400634A31000000000000000000BDA59400FFF7EF00ADB5C600085A
      C6001052AD000042940021528C00ADA5A500FFE7D600F7DECE00F7D6C600F7D6
      C600F7D6C600F7D6C600DEB59400634A31002184BD0063CEFF002184BD009CFF
      FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6
      FF0039A5D6009CFFFF0000639C0039524A00189CC600189CC6009CFFFF006BD6
      FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6FF006BD6
      FF00299CBD000873A5004A5A52000000000000000000C6B5A500FFFFF7002142
      C600315AF7006384FF00527BF7004263F7002142B500D6C6C600F7DED600E7CE
      C600D6B5A500634A31000000000000000000BDAD9C00E7EFF7001863C6006BA5
      F7004284DE000042A5001063CE0000399400FFEFDE00DEBDAD00C69C8C00C69C
      8400C6948400BD947B00DEB59C00634A3100218CBD0063CEFF00218CBD009CFF
      FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7
      FF0042ADDE009CFFFF00006B9C0039524A00189CC600189CC6007BE7EF009CFF
      FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BE7FF007BDE
      FF0042B5DE00187B9C0042524A000000000000000000C6B5A500FFFFF70084A5
      FF00849CFF008494F700D6D6E700849CF7004263E700425AB500F7DED600F7DE
      D600D6BDA500635242000000000000000000C6AD9C00EFEFF700316BC60073A5
      E700185AB5002173DE000852B5001852A500FFEFE700FFE7D600FFDECE00F7DE
      CE00F7DEC600F7D6C600DEBDA500634A3100298CC60063CEFF002994C6009CFF
      FF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EF
      FF004AB5E7009CFFFF00006B9C0039524A00189CC60021A5CE0042B5D6009CFF
      FF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084EFFF0084E7
      FF0042BDEF00189CC60042524A005A736B0000000000D6B5A500FFFFFF00E7EF
      FF00C6CEF700F7F7F700F7F7E700E7DEE7008494F700315AE700526BB500F7E7
      D600E7CEB500735A42000000000000000000C6B5A500FFFFFF00DEDEDE003152
      8C009C9C9400848C9C0029529400D6D6DE00FFF7EF00EFD6C600C69C8C00C69C
      8400BD948400BD947B00D6BDAD00634A3100298CC60063CEFF00319CCE009CFF
      FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7
      FF0052BDEF009CFFFF00006B9C0039524A00189CC60042B5E700219CCE00A5FF
      FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7
      FF0052BDE7005ABDCE000873A5004A5A5A0000000000D6BDA500FFFFFF00FFFF
      FF00FFFFF700FFFFF700FFF7F700F7F7E700F7E7E700738CF7002152D6009494
      C600E7D6C600847363000000000000000000C6B5A500FFFFFF00636363002929
      2100B5B5B5007B7B7B0063636B00FFFFFF00FFFFF700FFF7EF00FFEFE700FFEF
      E700FFEFDE00FFE7D600D6BDAD00634A31002994C6006BD6FF00319CCE009CFF
      FF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFF
      FF0063C6FF009CFFFF00086BA50039524A00189CC60073D6FF00189CC6008CEF
      F7009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFFFF009CFF
      FF005AC6FF0094FFFF00187B9C004A5A5A0000000000D6BDB500FFFFFF00FFFF
      FF00FFFFFF00FFFFF700FFFFF700F7F7F700F7E7E700F7EFE7008494F700214A
      D600A59CC600A59484000000000000000000CEB5AD00FFFFFF004A4A4A004A4A
      4A00E7E7E700C6C6C6007B7B7300DEDEDE00FFF7F700FFCEA500FFB58C00FFAD
      8400FFA57B00F79C7300D6C6B500634A31002994C6007BE7FF002994C600FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0084E7FF00FFFFFF000873A5004A635A00189CC60084D6FF00189CC6006BBD
      DE00FFFFFF00FFFFFF00F7FFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF0084E7FF00FFFFFF00187BA5006373730000000000D6C6B500FFFFFF00FFFF
      FF0084A5B500638C9400638C9400637B9400637B84007384940094A5B50094A5
      F7003152D600B59C94000000000000000000CEBDAD00FFFFFF006B6B6B007373
      73009C9C9C00949494007B7B7B00E7E7DE00FFFFFF00FFFFF700FFFFFF00FFFF
      F700FFF7EF00FFF7EF00D6C6BD00634A39003194CE0084EFFF0084E7FF002994
      C6002994C6002994C6002994C6002994C6002994C600298CC600218CBD002184
      BD001884B5001884B5001884B50000000000189CC60084EFFF0052C6E700189C
      C600189CC600189CC600189CC600189CC600189CC600189CC600189CC600189C
      C600189CC600189CC600188CB5000000000000000000D6C6B500FFFFFF00FFFF
      FF0084ADB50094DEE70094EFF70084DEF70063CEE700529CB50073849400F7EF
      E700E7DED600A59C94000000000000000000D6BDB500FFFFFF00E7E7E7007373
      73008484840073737300C6C6C600FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFF700FFFFF700CEC6C600735A4200319CCE0094F7FF008CF7FF008CF7
      FF008CF7FF008CF7FF008CF7FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00107BAD004A635A000000000000000000189CC6009CF7FF008CF7FF008CF7
      FF008CF7FF008CF7FF008CF7FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00189CC600187B9C00000000000000000000000000CEC6B500FFFFFF00FFFF
      FF00F7FFFF0084ADB500A5ADA5009484730084CED60052738400F7F7F700F7E7
      E700F7E7E700847363000000000000000000D6C6B500FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF007B635200319CCE00FFFFFF009CFFFF009CFF
      FF009CFFFF009CFFFF00FFFFFF00218CBD002184BD001884B5001884B5001884
      B500187BB500000000000000000000000000189CC600FFFFFF009CFFFF009CFF
      FF009CFFFF009CFFFF00FFFFFF00189CC600189CC600189CC600189CC600189C
      C600189CC6000000000000000000000000000000000000000000CEC6B500D6C6
      B500D6C6B50073ADB500A5EFF700A5EFF70094D6E700426B7300C6ADA500C6AD
      A500C6AD9400000000000000000000000000D6C6B500D6C6B500D6BDB500CEBD
      AD00CEBDAD00CEB5AD00C6B5A500C6B5A500C6AD9C00BDAD9C00BDA59C00BDA5
      9400B5A5940000000000000000000000000000000000319CCE00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00298CC600000000000000000000000000000000000000
      0000000000000000000000000000000000000000000021A5CE00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00189CC600000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000084B5C60084A5B5007394A50000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000319CCE00319C
      CE003194CE002994C60000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000021A5CE0021A5
      CE0021A5CE0021A5CE0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009C3100009C310000000000009C31
      00009C310000000000009C3100009C3100000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C009C9C9C00000000009C9C
      9C009C9C9C00000000009C9C9C009C9C9C00000000006BF76B006BF763006BEF
      630063EF630063EF630063EF5A005AEF5A005AEF5A005AE7520052E7520052E7
      520052E7520052E74A0052E7520039D639000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE6300009C31000000000000CE63
      00009C31000000000000CE6300009C3100000000000000000000000000000000
      000000000000000000000000000000000000B5B5B5009C9C9C0000000000B5B5
      B5009C9C9C0000000000B5B5B5009C9C9C0042B5390039B5390039AD390039AD
      390039AD310031A5310031A53100319C3100299C2900299C2900219421002194
      2100218C2100188C180021942100219C2100B5A59400634A3100634A3100634A
      3100634A4200634A3100634A3100634A3100634A3100634A3100634A3100634A
      3100634A3100634A3100634A3100634A31000000000000000000000000000000
      00000000000000000000000000000000FF000000840000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000B5B5B5009C9C9C0000000000000000000000
      000000000000000000000000000000000000299C290029942900299429002194
      2100218C2100218C2100218C2100188C180018841800107B100021842100398C
      310031843100298429002184210010841000C6ADA500D6BDA500C6A58400B58C
      7300E7BDA500D6AD9400B5947300E7BDA500C6A58400B58C7300D6BDA500C6A5
      8400B58C7300D6AD9400C69C8400634A31000000000000000000000000000000
      000000000000000000000000FF0000009C0000009C0000008400000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000002994290029942900298429002184
      2900218421002184210021842100217B210010731000317B31009CD69C009CD6
      9C0094D69400ADDEAD006BB56B0008840800C6ADA500FFFFFF00FFFFFF00C69C
      8400FFFFFF00FFFFF700C69C8400FFF7F700FFF7F700C69C8400FFEFE700FFEF
      E700C6A58400FFE7D600D6C6B500634A31000000000000000000000000000000
      000000000000000000000000FF0000009C000000840000009C00000084000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000002194210052AD5200A5D6A50094D6
      940094D6940094D6940094D694008CCE8C0094BD9400D6E7D600CEEFCE00BDE7
      BD00ADCEAD007BB57B0018841800108C1000C6ADA500FFFFFF00FFFFFF00D6AD
      9400FFFFFF00FFFFFF00D6A58400FFFFF700FFF7F700D6A58400FFEFE700FFEF
      E700D6A58400FFE7D600D6C6B500634A31000000000000000000000000000000
      000000000000000000000000FF0000009C0000009C000000840000009C000000
      8400000000000000000000000000000000000000000000000000000000000000
      00000000000000000000B5B5B5009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C000000000000000000000000000000000021942100218C210084BD8400ADD6
      AD008CC684008CC68C007BBD7B0094B59400DEEFDE00CEE7CE00BDDEBD00CEE7
      CE00CEEFCE0029842900087B0800188C1800C6B5A500D6B59400C69C8400B58C
      7300D6A58400C69C8400B58C7300D6A58400C69C84001042E7001039E7001039
      C6000031B500D6A58400C69C8400634A31000000000000000000000000000000
      000000000000FFFFFF00CE9C630000009C0000009C0000009C000000FF000000
      9C00000084000000000000000000000000000000000000000000000000000000
      000000000000FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00B5B5B5009C9C
      9C009C9C9C00000000000000000000000000218C2100218C2100188418007BB5
      7B00A5D6A50073B573008CB58C00DEEFDE00C6E7C600BDDEBD00D6E7D600C6DE
      C6009CD69C0094D69400298C2900108C1000C6B5A500FFFFFF00FFFFFF00C69C
      8400FFFFFF00FFFFFF00C69C8400FFFFFF00FFFFF7003163F700FFFFF700FFFF
      F7001039C600FFEFE700D6C6B500634A31000000000000000000000000000000
      000000000000FFFFFF00FFCE9C00FFCE9C0000009C000000FF000000FF000000
      FF0000009C000000840000000000000000000000000000000000000000000000
      000000000000FFFFFF00CECECE00CECECE009C9C9C00B5B5B500B5B5B500B5B5
      B5009C9C9C009C9C9C000000000000000000218C2100218C2100188418001884
      18006BAD6B00A5BDA500DEEFDE00C6DEBD00BDDEBD00D6E7D600B5D6B50094C6
      940094C694009CCE9C0052A54A00108C1000C6B5A500FFFFFF00FFFFFF00D6A5
      8400FFFFFF00FFFFFF00D6A58400FFFFFF00FFFFFF006384FF00FFFFFF00FFFF
      F7001039E700FFEFE700D6CEC600634A31000000000000000000000000000000
      0000FFFFFF00FFCE9C00FFCE9C00FFFFFF00FFFFFF000000FF00319CFF00319C
      FF00319CFF0000009C0000000000000000000000000000000000000000000000
      0000FFFFFF00CECECE00CECECE00FFFFFF00FFFFFF00B5B5B500CECECE00CECE
      CE00CECECE009C9C9C0000000000000000001884180018841800188418000873
      0800398C3900CEEFCE00D6E7D600B5D6B500D6EFD600B5DEB50018731800087B
      08001084100018841800188C210018941800D6B5A500D6B59400C69C8400B58C
      7300D6A58400C69C8400B58C7300D6A58400C69C8400849CFF006384FF003163
      F7001042E700D6A58400C69C8400634A3100000000000000000000000000FFFF
      FF00FFCE9C00FFCE9C00FFFFFF00FFFFFF00FFFFFF00FFFFFF0000009C000000
      9C0000009C00000000000000000000000000000000000000000000000000FFFF
      FF00CECECE00CECECE00FFFFFF00FFFFFF00FFFFFF00FFFFFF009C9C9C009C9C
      9C009C9C9C000000000000000000000000001884180018841800087308004294
      42009CDE9C0084BD8400ADCEAD00DEEFDE00B5D6B50094CE94007BC67B00187B
      180018841800218C2100218C2100219C2100D6BDA500FFFFFF00FFFFFF00C69C
      8400FFFFFF00FFFFFF00C69C8400FFFFFF00FFFFFF00C69C8400FFFFFF00FFFF
      F700C69C8400FFF7F700E7DED600635242000000000000000000FFFFFF00FFCE
      9C00FFCE9C00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C6300000000000000
      0000000000000000000000000000000000000000000000000000FFFFFF00CECE
      CE00CECECE00FFFFFF00FFFFFF00FFFFFF009C9C9C009C9C9C00000000000000
      0000000000000000000000000000000000001884180008730800429442009CDE
      9C0084BD84007BB57B009CC69C00B5D6AD009CC69C007BB57B009CD6940084CE
      840021842100188C180021942100219C2100D6BDA500FFFFFF00FFFFFF00D6A5
      8400FFFFFF00FFFFFF00D6A58400FFFFFF00FFFFFF00D6A58400FFFFFF00FFFF
      FF00D6A58400FFFFF700FFF7F700634A310000000000FFFFFF00FFCE9C00FFCE
      9C00FFFFFF00FFFFFF00FFFFFF00CE9C63000000000000000000000000000000
      00000000000000000000000000000000000000000000FFFFFF00CECECE00CECE
      CE00FFFFFF00FFFFFF00FFFFFF009C9C9C000000000000000000000000000000
      00000000000000000000000000000000000010731000429C42009CDE9C0084BD
      840084B58400A5CEA5007BB57B00107B100073B57300A5CEA50084BD84009CD6
      9C008CCE8C00298C29002194210021A52100F7AD9400F7AD9400F7AD8400F7AD
      8400F7A58400F7A57300E79C7300E7947300E7946300E78C6300E7845200E784
      5200E77B4200E77B4200E7734200BD633900FFFFFF00FFCE9C00FFCE9C00FFFF
      FF00FFFFFF00FFFFFF00CE9C63000000FF000000000000000000000000000000
      000000000000000000000000000000000000FFFFFF00CECECE00CECECE00FFFF
      FF00FFFFFF00FFFFFF009C9C9C00B5B5B5000000000000000000000000000000
      00000000000000000000000000000000000021842100A5D6A500B5DEBD00B5D6
      B500B5D6B5007BB57B00107B1000107B10001884180073B57300BDDEB500B5D6
      B500BDE7BD007BBD7B002194210021A52100F7AD9400FFEFE700FFEFE700FFEF
      E700FFEFE700FFEFE700FFEFE700FFB59400FFAD8400F7AD8400F7AD8400F7A5
      8400F7A58400F7A58400F7A57300CE633900CE9C6300FFCE9C00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000FF00000000000000000000000000000000000000
      0000000000000000000000000000000000009C9C9C00CECECE00FFFFFF00FFFF
      FF00FFFFFF009C9C9C00B5B5B500000000000000000000000000000000000000
      000000000000000000000000000000000000107B10002984290029842900298C
      290029842900107B10001884180018841800188418001884180031943100399C
      3900399C3900319C3100299C290029A52900F7AD9400F7AD9400F7AD8400E7A5
      8400E7A58400E79C7300E7947300E7946300E78C6300E7845200D6845200D67B
      5200D6734200D6734200D6734200D66B310000000000CE9C6300FFFFFF00FFFF
      FF00CE9C63000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C00FFFFFF00FFFF
      FF009C9C9C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000001884180010841000108410001884
      180018841800218C2100218C210021942100219421002994290021942100299C
      2900299C2900299C290031A5310031B531009CA5A500FFFFFF0094949400FFFF
      FF00848C8C00FFFFFF0084848400FFFFFF0084848400FFFFFF0073737300FFFF
      FF0063636300FFFFFF00635A6300000000000000000000000000CE9C6300CE9C
      6300000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000042B542004ABD4A004ABD4A0052BD
      4A0052C6520052C6520052C652005ACE5A005ACE5A005ACE5A005AD65A0063D6
      630063D6630063D663006BDE6B005AE752000000000021292100000000002129
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
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000009C3100009C31
      00009C3100009C3100009C3100009C3100009C3100009C3100009C3100009C31
      00009C31000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C000000000000000000000000000000000000000000000000000000
      9C000000FF000063FF000000CE00000000000000000000000000000000000000
      00000000FF000000FF0000000000000000000000000000000000000000000000
      0000B5B5B5009C9C9C009C9C9C00B5B5B5000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00CE9C
      6300CE9C63009C310000000000000000000000000000B5B5B500CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00B5B5
      B500B5B5B5009C9C9C0000000000000000000000000000000000000000000000
      000000009C000000CE000000FF000000CE000000000000000000000000000000
      CE000000FF0000009C0000000000000000000000000000000000000000009C9C
      9C009C9C9C00CECECE00CECECE009C9C9C000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      63009C310000CE9C63009C31000000000000B5B5B500B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5
      B5009C9C9C00B5B5B5009C9C9C00000000000000000000000000000000000000
      0000000000000000000000009C000000FF000000CE00000000000000CE000000
      FF0000009C0000000000000000000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C009C9C9C00B5B5B5000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE
      9C00CE9C63009C3100009C31000000000000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00B5B5B5009C9C9C009C9C9C000000000000000000000000002121B5001008
      A50010088400100873000000000000009C000000FF000000CE000000FF000000
      9C000000000000000000000000000000000000000000B5B5B5009C9C9C00CECE
      CE009C9C9C00B5B5B50000000000000000009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C0000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C0000CE0000009C0000FFCE9C000000FF000000CE00FFCE
      9C00CE9C6300CE9C63009C31000000000000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00B5B5B5009C9C9C00CECECE00B5B5B5009C9C9C00CECE
      CE00B5B5B500B5B5B5009C9C9C0000000000000000004239A5008473C6008473
      C6008473C60010087300000000000000000000009C000000FF0000009C000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C00B5B5B5000000000000000000000000009C9C9C00CECECE00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300CE9C6300CE9C63009C310000B5B5B50000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000B5B5B500B5B5B500B5B5B5009C9C9C00000000004231A500736BC600846B
      D6007363C60010087300524AC600000000000000FF0000009C000000CE000000
      000000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C0000000000000000000000000000000000000000009C9C9C00CECECE00CECE
      CE00CECECE00CECECE009C9C9C0000000000CE9C6300FFFFFF00FFCE9C00FFCE
      9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE9C00FFCE
      9C00CE9C6300CE9C6300CE9C63009C310000B5B5B50000000000CECECE00CECE
      CE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00B5B5B500B5B5B500B5B5B5009C9C9C00000000004231A5007363C6007363
      C600100894006352B500312184000000FF0000009C000000000000009C000000
      CE0000000000000000000000000000000000000000009C9C9C00CECECE009C9C
      9C00B5B5B50000000000000000000000000000000000B5B5B5009C9C9C00CECE
      CE00CECECE00CECECE009C9C9C000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300FFCE
      9C00FFCE9C00CE9C6300CE9C63009C31000000000000B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500CECE
      CE00CECECE00B5B5B500B5B5B5009C9C9C0000000000000000005242A5003129
      A500E7E7E700FFFFF7000000FF0000009C000000000000000000000000000000
      9C000000CE0000000000000000000000000000000000B5B5B5009C9C9C00CECE
      CE009C9C9C00B5B5B50000000000B5B5B5009C9C9C009C9C9C00CECECE009C9C
      9C00CECECE00CECECE009C9C9C00000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      6300FFCE9C00FFCE9C00CE9C63009C3100000000000000000000B5B5B5000000
      000000000000000000000000000000000000000000000000000000000000B5B5
      B500CECECE00CECECE00B5B5B5009C9C9C000000000000000000737394006363
      6300525A52000000FF0000009C00000000000000000000000000000000000000
      000000009C000000CE00000000000000000000000000000000009C9C9C00CECE
      CE00CECECE009C9C9C009C9C9C009C9C9C00CECECE00CECECE009C9C9C00B5B5
      B5009C9C9C00CECECE009C9C9C0000000000000000000000000000000000CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C
      6300CE9C6300CE9C63009C31000000000000000000000000000000000000B5B5
      B50000000000CECECE00CECECE00CECECE00CECECE00CECECE0000000000B5B5
      B500B5B5B500B5B5B5009C9C9C000000000000000000738C8C0000000000C6C6
      C6000000FF00848C8400525A52007B7B7B000000000000000000000000000000
      00000000000000009C0000000000000000000000000000000000000000009C9C
      9C009C9C9C00CECECE00CECECE00CECECE009C9C9C009C9C9C00000000000000
      0000000000009C9C9C009C9C9C0000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300000000000000000000000000000000000000000000000000B5B5
      B500000000000000000000000000000000000000000000000000000000000000
      0000B5B5B50000000000000000000000000000000000423942000000FF00D6DE
      D600C6C6C600A5A5A500848C8400636B63000000000000000000000000000000
      000000000000000000000000CE00000000000000000000000000000000000000
      0000B5B5B5009C9C9C009C9C9C009C9C9C00B5B5B50000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CE9C6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFF
      FF00CE9C63000000000000000000000000000000000000000000000000000000
      0000B5B5B50000000000CECECE00CECECE00CECECE00CECECE00CECECE000000
      0000B5B5B5000000000000000000000000000000000052525200524A5200B5BD
      B500D6DED600C6C6C600A5A5A500737B73000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000CE9C6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C630000000000000000000000000000000000000000000000
      0000B5B5B5000000000000000000000000000000000000000000000000000000
      000000000000B5B5B500000000000000000000000000737B7300636363006363
      630073737300635A6300C6C6C600848C84000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C630000000000000000000000000000000000000000000000
      000000000000B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5B500B5B5
      B500B5B5B500B5B5B5000000000000000000000000008C9C9C00737373008484
      8400A5A5A50094949400525A5200848C8C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000949C9C009494
      9400948C940084848400949C9C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000004239A5008473C6008473C6008473C6001008
      7300738CC6000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000A5522100A552
      3100000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000002121B5001008A5001008
      8400100873007394AD0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000004231A500736BC600846BD6007363C6001008
      7300524AC60094A5BD00A59C9C00000000000000000000000000000000000000
      00000000000000000000D6846300944A2100A54A2100A5522100B55A3100C66B
      4200A55231000000000000000000000000003131310000000000000000000000
      0000000000000000000000000000000000004239A5008473C6008473C6008473
      C60010087300738CC60000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C63004231A5007363C6007363C600100894006352
      B500312184005242C60021188400000000000000000000000000000000000000
      00000000000000000000D68C6300FFB59400F7946300F78C5200E7845200D67B
      5200C6734200A55A310000000000000000006363630031313100313131000000
      0000000000000000000000000000000000004231A500736BC600846BD6007363
      C60010087300524AC60094A5BD00A59C9C000000000000000000000000000000
      0000CE9C63009C3100009C310000CE9C63000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF005242A5003129A500E7E7E700FFFF
      F700100873001008630000000000000000000000000000000000000000000000
      00000000000000000000E7947300FFBD9400FFAD8400FF946300F7946300E78C
      5200E77B5200C6734200C6734200000000006363630063636300636363003131
      3100000000000000000000000000000000004231A5007363C6007363C6001008
      94006352B500312184005242C600211884000000000000000000000000009C31
      00009C310000CE630000CE6300009C3100000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E7007373940063636300525A52006363
      630031398C0000000000000000000000000000000000000000002121B5001008
      A5001008840010087300E79C7300FFC6A500FFC6A500FFB58400FFAD8400FFA5
      7300E7845200B55A310000000000000000000000000063636300636363006363
      630031313100009C9C000000000000000000000000005242A5003129A500E7E7
      E700FFFFF70010087300100863000000000000000000000000009C310000CE63
      0000CE6300009C3100009C310000CE9C63000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00738C8C0000000000C6C6C600A5A5A500848C
      8400525A52007B7B7B000000000000000000000000004239A5008473C6008473
      C6008473C60010087300F7A57300E79C7300E7947300D68C6300E7947300F79C
      7300B55A31000000000000000000000000000000000063636300636363009CFF
      FF009CCECE009CCECE00009C9C0000000000000000007373940063636300525A
      52006363630031398C00000000000000000000000000CE9C63009C310000CE63
      00009C310000CE9C630000000000000000009C3100009C3100009C3100009C31
      00009C3100009C3100009C3100000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E7004239420031313100D6DED600C6C6C600A5A5
      A500848C8400636B63000000000000000000000000004231A500736BC600846B
      D6007363C60010087300524AC60094A5BD00A59C9C0000000000E79C7300C67B
      520000000000000000000000000000000000000000000000000084848400CEFF
      FF009CFFFF009CCECE009CCECE00009C9C00738C8C0000000000C6C6C600A5A5
      A500848C8400525A52007B7B7B0000000000000000009C310000CE6300009C31
      0000CE9C63000000000000000000000000009C310000CE630000CE630000CE63
      0000CE630000CE6300009C3100000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF0052525200524A5200B5BDB500D6DED600C6C6
      C600A5A5A500737B73000000000000000000000000004231A5007363C6007363
      C600100894006352B500312184005242C6002118840000000000F7A573000000
      000000000000000000000000000000000000000000000000000063CECE00FFFF
      FF00CEFFFF009CFFFF009CFFFF009CCECE004239420031313100D6DED600C6C6
      C600A5A5A500848C8400636B630000000000000000009C310000CE6300009C31
      000000000000000000000000000000000000000000009C310000CE630000CE63
      0000CE630000CE6300009C3100000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700737B7300636363006363630073737300635A
      6300C6C6C600848C8400000000000000000000000000000000005242A5003129
      A500E7E7E700FFFFF70010087300100863000000000000000000000000000000
      000000000000000000000000000000000000000000000000000063CECE00FFFF
      FF00CEFFFF00CEFFFF009CFFFF009CFFFF0052525200524A5200B5BDB500D6DE
      D600C6C6C600A5A5A500737B730000000000000000009C310000CE6300009C31
      0000CE9C630000000000000000000000000000000000CE9C63009C310000CE63
      0000CE630000CE6300009C3100000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF008C9C9C007373730084848400A5A5A5009494
      9400525A5200848C8C0000000000000000000000000000000000737394006363
      6300525A52006363630031398C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000009CCE
      CE00FFFFFF00CEFFFF00CEFFFF009CFFFF00737B730063636300636363007373
      7300635A6300C6C6C600848C84000000000000000000CE9C63009C310000CE63
      00009C310000CE9C630000000000CE9C63009C3100009C310000CE6300009C31
      0000CE630000CE6300009C3100000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700949C9C0094949400948C94008484
      8400949C9C0000000000000000000000000000000000738C8C0000000000C6C6
      C600A5A5A500848C8400525A52007B7B7B000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000063CE
      CE00FFFFFF00CEFFFF00CEFFFF00FFCECE008C9C9C007373730084848400A5A5
      A50094949400525A5200848C8C000000000000000000000000009C310000CE63
      0000CE6300009C3100009C3100009C310000CE630000CE6300009C310000CE9C
      63009C310000CE6300009C3100000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300000000000000000000000000000000004239420031313100D6DE
      D600C6C6C600A5A5A500848C8400636B63000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00009CCECE00FFFFFF00CEFFFF00CE630000CE630000949C9C0094949400948C
      940084848400949C9C009C310000000000000000000000000000000000009C31
      00009C310000CE630000CE630000CE6300009C3100009C310000000000000000
      0000000000009C3100009C3100000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C6300CE9C
      6300CE9C63000000000000000000000000000000000052525200524A5200B5BD
      B500D6DED600C6C6C600A5A5A500737B73000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000063CECE00FFFFFF00FFCECE00CE630000CE630000CE630000CE630000CE63
      00009C3100009C3100009C310000000000000000000000000000000000000000
      0000CE9C63009C3100009C3100009C310000CE9C630000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7E700CE9C
      63000000000000000000000000000000000000000000737B7300636363006363
      630073737300635A6300C6C6C600848C84000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000FF9C0000FF9C0000CE630000CE630000CE630000CE630000CE63
      0000CE6300009C3100009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C63000000
      000000000000000000000000000000000000000000008C9C9C00737373008484
      8400A5A5A50094949400525A5200848C8C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000CE630000FF9C0000FF9C0000CE630000CE630000CE630000CE63
      0000CE630000CE6300009C310000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
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
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000E7EFF700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000944A21000000000000000000000000000000000000000000000000006321
      6300000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E7EF
      F700E7E7E700CECECE00E7E7E700E7EFF7000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000E7EF
      F70000000000CECECE00E7E7E700E7EFF7000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000A5522100A552310000000000000000000000000000000000632163006321
      6300000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000E7EFF700E7E7E700B5B5
      B500CE9C9C009C6363009C636300B5B5B500CECECE00E7E7E700E7EFF7000000
      00000000000000000000000000000000000000000000E7EFF70000000000B5B5
      B5009C9C9C009C9C9C009C9C9C00B5B5B500CECECE0000000000E7EFF7000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000D6846300944A2100A54A2100A552
      2100B55A3100C66B4200A5523100000000000000000073216300A54294006321
      6300632163006321630063216300632163000000000000000000000000000000
      000000000000000000000000000000000000E7E7E700CE9C9C009C636300CE9C
      9C00CE9C9C00FFFFFF009C6363009C9C9C009C9C9C00B5B5B500E7E7E7000000
      000000000000000000000000000000000000000000009C9C9C009C9C9C009C9C
      9C009C9C9C00FFFFFF009C9C9C009C9C9C009C9C9C00B5B5B500000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000D68C6300FFB59400F7946300F78C
      5200E7845200D67B5200C6734200A55A3100944A8400A552A500C65AB500B552
      A500B54AA5009442940084398400632163000000000000000000000000000000
      0000000000000000000000000000000000009C636300CE9C9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630031639C0031639C0031639C00E7EFF7000000
      0000000000000000000000000000000000009C9C9C009C9C9C00C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00E7EFF7000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000E7947300FFBD9400FFAD8400FF94
      6300F7946300E78C5200E77B5200C6734200D6A5D600D684C600C66BC600C65A
      B500B552B500B552A500A5429400732163000000000000000000000000000000
      0000000000000000000000000000000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630063CECE0063CECE00009CCE00FFFFFF00FFCE
      CE00000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00C6C6C600C6C6C6009C9C9C00FFFFFF00CECE
      CE00000000000000000000000000000000000000000000000000000000000000
      0000314A5200316B9400217BB500217BB500E79C7300FFC6A500FFC6A500FFB5
      8400FFAD8400FFA57300E7845200B55A3100C67BB500D6ADD600D69CD600D68C
      C600D684C600C684C600C67BB50073297300217BB500217BB500316B9400314A
      5200000000000000000000000000000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630063CECE0063CEFF00319CCE00FFCECE00CE63
      0000000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00C6C6C600CECECE009C9C9C00CECECE009C9C
      9C000000000000000000000000000000000000000000314A520021739400314A
      520031ADF70031C6FF0042D6FF00C6F7F700F7A57300E79C7300E7947300D68C
      6300E7947300F79C7300B55A31000000000000000000C67BB500D6A5D600A54A
      9400B56BB500B563B500B55AA500B54AA500C6F7F70042D6FF0031C6FF0031AD
      F700314A520021739400314A5200000000009C636300FFCE9C00CE9C9C00CE9C
      6300FFCECE00FFFFFF009C6363009CCECE009CCEFF00B5B5B500FF630000CE63
      0000000000000000000000000000000000009C9C9C00C6C6C6009C9C9C009C9C
      9C00CECECE00FFFFFF009C9C9C00CECECE00CECECE00B5B5B5009C9C9C009C9C
      9C0000000000000000000000000000000000425A730042BDF70042D6FF0073D6
      F7008484840094A5A500A5C6C600A5CED60094CEBD0031425200316B9400217B
      B500E79C7300C67B520000000000000000000000000000000000C673B500A542
      9400217BB500316B94003142520094CEBD00A5CED600A5C6C60094A5A5008484
      840073D6F70042D6FF0042BDF700425A73009C636300FFCE9C009C636300FFFF
      FF00FFCECE00FFFFFF009C6363009CCECE00C6C6C600CE630000CE630000CE63
      0000CE630000CE630000CE630000000000009C9C9C00C6C6C60063636300FFFF
      FF00CECECE00FFFFFF009C9C9C00CECECE00C6C6C6009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000021394200215A73001073
      A500107BB5000000000000000000000000001039520031B5F70031C6FF0042D6
      FF00F7A5730094B5C6000000000000000000000000000000000094B5C600B56B
      B50042D6FF0031C6FF0031B5F70010395200000000000000000000000000107B
      B5001073A500215A730021394200000000009C636300FFCE9C00CE9C9C009C63
      6300FFCECE00FFFFFF009C63630000000000CE630000CE630000CE630000CE63
      0000CE630000CE630000CE630000000000009C9C9C00C6C6C6009C9C9C006363
      6300CECECE00FFFFFF009C9C9C00E7E7E7009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C0000000000315A630042BDF70042D6FF0063DE
      FF00D6FFFF0094B5C600000000000000000000000000848C940094A5A500A5C6
      C60094B5C60000000000000000000000000000000000000000000000000094B5
      C600A5C6C60094A5A500848C940000000000000000000000000094B5C600D6FF
      FF0063DEFF0042D6FF0042BDF700315A63009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C63630000000000CE9C9C00CE630000CE630000CE63
      0000CE630000CE630000CE630000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00E7E7E7009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C00000000000000000021394200215A73001073
      A500106BA5000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000106B
      A5001073A500215A730021394200000000009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C636300CECECE00E7EFF700CE9C9C00FF630000CE63
      0000000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7EFF7009C9C9C009C9C9C009C9C
      9C0000000000000000000000000000000000214A630042BDF70042D6FF0063DE
      FF00D6FFFF0084C6D60000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000084C6D600D6FF
      FF0063DEFF0042D6FF0042BDF700214A63009C636300FFCE9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C6363009CCECE00000000009CCECE00FFCE9C00CE63
      0000000000000000000000000000000000009C9C9C00C6C6C600C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7E7E700CECECE00C6C6C6009C9C
      9C00000000000000000000000000000000000000000021314200215A73001073
      A500006BA5000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000006B
      A5001073A500215A730021314200000000009C636300CE9C9C00FFCE9C00FFCE
      9C00FFCECE00FFFFFF009C636300CECECE0000000000319CCE0000000000FFCE
      9C00000000000000000000000000000000009C9C9C009C9C9C00C6C6C600C6C6
      C600CECECE00FFFFFF009C9C9C00CECECE00E7E7E7009C9C9C0000000000C6C6
      C600000000000000000000000000000000002152730031ADF70031C6FF0042D6
      FF00C6F7F70084BDE70000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000084BDE700C6F7
      F70042D6FF0031C6FF0031ADF7002152730000000000C6C6C600CE9C6300CE9C
      9C00CECE9C00FFFFFF009C636300009CCE00009CCE00009CCE00000000000000
      00000000000000000000000000000000000000000000C6C6C6009C9C9C009C9C
      9C00C6C6C600FFFFFF009C9C9C009C9C9C009C9C9C009C9C9C00000000000000
      000000000000000000000000000000000000000000007384A500849CB500A5C6
      D60084B5E7000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000084B5
      E700A5C6D600849CB5007384A50000000000000000000000000000000000CECE
      CE00CE9C9C009C6363009C636300000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CECE
      CE009C9C9C009C9C9C009C9C9C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000217BB500217BB500316B9400314A5200000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000002121B5001008A50010088400100873007394
      AD00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000E7947300944A
      2100944A21008442210084422100844221008439210084392100844221008442
      2100944A2100944A2100D67B52000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300B5DEF700C6F7F70042D6FF0031C6FF0031ADF700314A52002173
      9400314A52000000000000000000000000000000000000000000000000000000
      000000000000000000004239A5008473C6008473C6008473C60010087300738C
      C6000000000000000000000000000000000000000000D67B5200944A2100944A
      2100944A21008442210084422100844221008439210084392100843921008442
      21008442210084422100944A2100944A2100CE9C6300CE9C6300E7947300C68C
      7300C6845200D6AD9400E7CEB500C6846300C6525200B56B3100E7CEB500D6AD
      9400B5947300C68C7300D67B52000000000000000000217BB500217BB500316B
      94003142520094CEBD00A5CED600A5C6C60094A5A5008484840073D6F70042D6
      FF0042BDF700425A730000000000000000000000000000000000000000000000
      000000000000000000004231A500736BC600846BD6007363C60010087300524A
      C60094A5BD00A59C9C00000000000000000000000000D67B5200C68C7300C684
      5200B5947300D6AD9400E7CEB500C6846300B56B3100C6525200B56B3100C684
      6300E7CEB500D6AD9400B5947300C6845200CE9C6300FFFFFF00E7947300B594
      8400D6C6B500D6B5A500E7CEC600B58C7300C6735200B5734200E7CEC600D6B5
      A500E7D6C600B5948400D68452000000000000000000C6F7F70042D6FF0031C6
      FF0031B5F70010395200E7E7E700E7E7E700E7E7E700107BB5001073A500215A
      73002139420000000000000000000000000000000000000000002121B5001008
      A50010088400100873004231A5007363C6007363C600100894006352B5003121
      84005242C60021188400000000000000000000000000D6845200B5948400D6C6
      B500E7D6C600D6B5A500E7CEC600B58C7300B5734200C6735200B5734200B58C
      7300E7CEC600D6B5A500E7D6C600D6C6B500CE9C6300FFFFFF00E7947300E7D6
      D600E7BDA500C6845200D6BDA500E7B59400B5735200B57B5200D6BDA500C684
      5200C68C6300E7D6C600D68C6300000000000000000094B5C600A5C6C60094A5
      A500848C9400FFFFFF00FFFFFF00FFFFFF0094B5C600D6FFFF0063DEFF0042D6
      FF0042BDF700315A63000000000000000000000000004239A5008473C6008473
      C6008473C60010087300738CC6005242A5003129A500E7E7E700FFFFF7001008
      730010086300000000000000000000000000944A2100D68C6300E7D6C600E7BD
      A500C68C6300C6845200D6BDA500E7B59400B57B5200B5735200B57B5200E7B5
      9400D6BDA500C6845200C68C6300E7BDA500CE9C6300FFFFFF00E7947300FFFF
      FF00D69C8400C68C6300E7DED600C69C8400B5735200C6845200E7DED600C68C
      6300D68C6300FFFFFF00E79473000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700106BA5001073A500215A
      730021394200000000000000000000000000000000004231A500736BC600846B
      D6007363C60010087300524AC6007373940063636300525A5200636363003139
      8C0000000000000000000000000000000000C6845200E7947300FFFFFF00D69C
      8400D68C6300C68C6300E7DED600C69C8400C6845200B5735200C6845200C69C
      8400E7DED600C68C6300D68C6300D69C8400CE9C6300FFFFFF00E7947300E7D6
      D600F7CEB500D68C6300F7DED600C69C8400B5845200C68C6300F7DED600D68C
      6300D69C7300E7D6D600E79C73000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0084C6D600D6FFFF0063DEFF0042D6
      FF0042BDF700214A63000000000000000000000000004231A5007363C6007363
      C600100894006352B500738C8C0000000000C6C6C600A5A5A500848C8400525A
      52007B7B7B00000000000000000000000000D6C6B500E79C7300E7D6D600F7CE
      B500D69C7300D68C6300F7DED600C69C8400C68C6300B5845200C68C6300C69C
      8400F7DED600D68C6300D69C7300F7CEB500CE9C6300FFFFFF00E7947300B5A5
      9400E7CEC600F7CEB500E7B5A500F7CEB500C69C8400D6AD9400E7B5A500F7CE
      B500F7E7E700B5A59400E7A584000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700006BA5001073A500215A
      73002131420000000000000000000000000000000000000000005242A5003129
      A500E7E7E700FFFFF7004239420031313100D6DED600C6C6C600A5A5A500848C
      8400636B6300000000000000000000000000E7BDA500E7A58400B5A59400E7CE
      C600F7E7E700F7CEB500E7B5A500F7CEB500D6AD9400C69C8400D6AD9400F7CE
      B500E7B5A500F7CEB500F7E7E700E7CEC600CE9C6300FFFFFF00E7947300A58C
      8400B5948400D6C6B500FFF7E700FFF7F700F7F7F700F7F7F700FFF7E700D6C6
      B500B5A59400A58C8400E7A584000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF0084BDE700C6F7F70042D6FF0031C6
      FF0031ADF7002152730000000000000000000000000000000000737394006363
      6300525A52006363630052525200524A5200B5BDB500D6DED600C6C6C600A5A5
      A500737B7300000000000000000000000000D69C8400E7A58400A58C8400B594
      8400B5A59400D6C6B500FFF7E700FFF7F700F7F7F700F7F7F700F7F7F700FFF7
      F700FFF7E700D6C6B500B5A59400B5948400CE9C6300FFFFFF00E7947300E7A5
      8400E7A58400E79C8400E79C7300D6947300C6846300D68C7300E79C7300E79C
      8400E7A58400E7A58400E7A584000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E70084B5E700A5C6D600849C
      B5007384A50000000000000000000000000000000000738C8C0000000000C6C6
      C600A5A5A500848C8400737B7300636363006363630073737300635A6300C6C6
      C600848C8400000000000000000000000000F7CEB500E7A58400E7A58400E7A5
      8400E7A58400E79C8400E79C7300D6947300D68C7300C6846300D68C7300D694
      7300E79C7300E79C8400E7A58400E7A58400CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C
      63000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300000000000000000000000000000000004239420031313100D6DE
      D600C6C6C600A5A5A5008C9C9C007373730084848400A5A5A50094949400525A
      5200848C8C00000000000000000000000000E7CEC600F7E7E700F7CEB500E7B5
      A500F7CEB500D6AD9400C69C8400D6AD9400F7CEB500E7B5A500F7CEB500F7E7
      E700E7CEC600B5A59400E7A5840000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C
      63000000000000000000000000000000000000000000CE9C6300FFFFFF00E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C6300CE9C
      6300CE9C63000000000000000000000000000000000052525200524A5200B5BD
      B500D6DED600C6C6C600A5A5A500949C9C0094949400948C940084848400949C
      9C0000000000000000000000000000000000B5948400B5A59400D6C6B500FFF7
      E700FFF7F700F7F7F700F7F7F700F7F7F700FFF7F700FFF7E700D6C6B500B5A5
      9400B5948400A58C8400E7A5840000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C6300CE9C6300CE9C
      63000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7E700CE9C
      63000000000000000000000000000000000000000000737B7300636363006363
      630073737300635A6300C6C6C600848C84000000000000000000000000000000
      000000000000000000000000000000000000E7A58400E7A58400E79C8400E79C
      7300D6947300D68C7300C6846300D68C7300D6947300E79C7300E79C8400E7A5
      8400E7A58400E7A58400E7A5840000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7E700CE9C63000000
      00000000000000000000000000000000000000000000CE9C6300FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C63000000
      000000000000000000000000000000000000000000008C9C9C00737373008484
      8400A5A5A50094949400525A5200848C8C000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C6300000000000000
      00000000000000000000000000000000000000000000CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300000000000000
      0000000000000000000000000000000000000000000000000000949C9C009494
      9400948C940084848400949C9C00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C630000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000008400000084000000840000008400000084
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000217BB500217BB500316B9400314A52000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000840000399442003994420039944200399442003994
      4200008400000000000000000000000000000000000000000000000000000000
      00000000000000000000B5DEF700C6F7F70042D6FF0031C6FF0031ADF700314A
      520021739400314A520000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      0000000000000084000039944200399442003994420039944200399442003994
      4A00399442000084000000000000000000000000000000000000217BB500217B
      B500316B94003142520094CEBD00A5CED600A5C6C60094A5A5008484840073D6
      F70042D6FF0042BDF700425A7300000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C0000000000000000000000000000000000000000000000
      000073D6F7003994420039944200399442003994420039944200399442003994
      4200399442003994420000840000000000000000000094B5C600C6F7F70042D6
      FF0031C6FF0031B5F70010395200000000000000000000000000107BB5001073
      A500215A73002139420000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C00000000000000000000000000000000000000000073D6
      F70073D6F7003994420039944200399442003994420084C68C00399442003994
      420039944200399442003994420000840000000000000000000094B5C600A5C6
      C60094A5A500848C940000000000000000000000000094B5C600D6FFFF0063DE
      FF0042D6FF0042BDF700315A6300000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00000000000000000000000000000000000084000073D6
      F70073D6F70039944200399442003994420084C68C0084C68C0084C68C003994
      4200399442003994420039944200399442000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000106BA5001073
      A500215A73002139420000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C00000000000000000000000000008400003994420073D6
      F70073D6F70039944200399442008CCE940084C68C0084C68C0084C68C0084C6
      8C00399442003994420039944200399442000000000000000000000000000000
      0000000000000000000000000000000000000000000084C6D600D6FFFF0063DE
      FF0042D6FF0042BDF700214A6300000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C00000000000000000000840000399442003994420073D6
      F700ADEFFF00ADDEB5008CCE94008CCE940094CE9C008CCE940084C68C0084C6
      8C0084C68C00399442003994420039944200D67B5200944A2100944A2100944A
      2100844221008442210084422100843921008439210084392100006BA5001073
      A500215A73002131420084392100842121000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C00000000000000000039944200399442003994420073D6
      F700B5EFFF00B5EFFF008CCE9400A5D6A5008CCE940094CE9C008CCE940084C6
      8C0084C68C0084C68C003994420039944200D67B5200C68C7300C6845200B594
      7300D6AD9400E7CEB500C6846300B56B3100C652520084BDE700C6F7F70042D6
      FF0031C6FF0031ADF70021527300842121000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000399442003994420039944200B5EF
      FF00B5EFFF00B5EFFF00B5EFFF00ADEFF700A5D6AD009CCE9C008CCE94008CCE
      94007BC6840073BD7B0084C68C0039944200D6845200B5948400D6C6B500E7D6
      C600D6B5A500E7CEC600B58C7300B5734200C6735200D6BDA50084B5E700A5C6
      D600849CB5007384A500D6BD9400842121000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C00000000000000000039944200399442008CCE94008CCE
      9400B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF00A5DEC60094CE9C008CCE
      940084C68C007BBD840073BD7B0000840000D68C6300E7D6C600E7BDA500C68C
      6300C6845200D6BDA500E7B59400B57B5200B5735200E7AD8400C69C9400945A
      3100A5634200B5A59400C69C8400842921000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C6300000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000399442008CCE94008CCE94008CCE
      94008CCE9400B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EF
      FF0094CE9C00008400000000000000000000E7947300FFFFFF00D69C8400D68C
      6300C68C6300E7DED600C69C8400C6845200B5735200C6947300C6BDB500A55A
      3100945A3100A5633100C6C6C600842921000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C
      6300CE9C6300CE9C6300000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00000000009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000008CCE94008CCE94008CCE94008CCE
      94008CCE94008CCE94008CCE9400B5EFFF00B5EFFF00B5EFFF00BDEFFF00B5EF
      FF0000000000000000000000000000000000E79C7300E7D6D600F7CEB500D69C
      7300D68C6300F7DED600C69C8400C68C6300B5845200C6947300D6C6B500A563
      3100A5633100B58C7300C6948400843121000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7
      E700CE9C630000000000000000000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C000000
      00009C9C9C00000000000000000000000000000000008CCE94008CCE94008CCE
      94008CCE94008CCE94008CCE94008CCE94008CCE9400B5EFFF00000000000000
      000000000000000000000000000000000000E7A58400B5A59400E7CEC600F7E7
      E700F7CEB500E7B5A500F7CEB500D6AD9400C69C8400E7BDA500C6948400C6A5
      9400D6BDB500B59C8400A5633100843121000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C
      63000000000000000000000000000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C00000000000000000000000000000000000000000000000000000000008CCE
      94008CCE94008CCE94008CCE94008CCE94008CCE940000000000000000000000
      000000000000000000000000000000000000E7A58400A58C8400B5948400B5A5
      9400D6C6B500FFF7E700FFF7F700F7F7F700F7F7F700F7E7E700F7DEC600C6AD
      9400A57B6300945A3100A55A2100843921000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C000000
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
      BD00FFEFDE000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000084000000840000008400000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C
      9C009C9C9C009C9C9C0000000000000000000000000000000000000000000000
      0000000000000000000000000000848C84005AA5630039944200396B42000000
      00000000000000000000000000000000000039DEFF0039DEFF0039DEFF0039DE
      FF0039DEFF0039DEFF0039DEFF00BDD6CE00F7D6A500FFE7B500FFDEB500FFDE
      B500F7DEBD00F7D6AD00F7D6B500000000000000000000000000000000000000
      0000000000000000000000000000008400003994420039944200399442000084
      00000000000000000000000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C0000000000000000000000000000000000000000000000
      00000000000000000000000000005AB563005AB563003994420039944A004294
      4A000000000000000000000000000000000039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0084C6BD00F7CE9400F7D6A500FFEFC600FFF7DE00FFF7
      E700FFD6AD00FFF7D600FFE7B500F7D6A5000000000000000000000000000000
      0000000000000000000000840000399442003994420039944200399442003994
      42000084000000000000000000000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C0000000000000000000000000000000000000000000000
      000000000000848C8C005AA563005AB563005AB563003994420039944A00429C
      4A00428C4A0000000000000000000000000039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF00BDC6A500F7CE9400F7D6A500FFE7B500FFE7B500FFEF
      C600FFE7CE00FFF7DE00FFE7B500F7D6A5000000000000000000000000000000
      000000000000000000003994420039944200399442003994420039944A003994
      42003994420000840000000000000000000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C0000000000000000000000000000000000000000000000
      000073D6F7006BCED6005AB563005AB5630063B56B0039944200399442004294
      4A004A9C520052A55A0052A55A000000000039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF00E7CE9C00FFDEA500F7CE9C00F7D6A500FFDEB500F7DE
      C600F7CE9C00F7CE9C00F7D6A500EFCE9C0000000000000000000000000073D6
      F70073D6F70073D6F70039944200399442003994420039944200399442003994
      42003994420039944200008400000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C00000000000000000000000000000000004263520073D6
      EF0073D6F7006BCECE005AB563005AB56B007BC6840039944200399442004294
      4A004A9C52004AA55A0052A55A00426B4A0039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0052CEF70042ADE700CEBD9C00F7DEAD00FFE7BD00F7D6
      A500EFCE9400F7D6A500F7EFDE000000000000000000000000000084000073D6
      EF0073D6F70073D6F70039944200399442003994420084C68C00399442004294
      4A003994420039944200399442000084000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000000000004A9452005AB5730073D6
      F70073D6F7006BCECE005AB563008CCE94008CCE940084C68C0052A55A004294
      4A004A9C52004AA55A0052A55A005273520039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0084FFFF0042B5F700219CE7007BBDBD00BDC6A500EFD6
      A500FFDEAD00EFD6AD00000000000000000000000000008400003994420073D6
      F70073D6F70073D6F700399442008CCE94008CCE940084C68C00399442004294
      4A003994420039944200399442000084000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C000000000000000000000000005AB5630063B57B0073D6
      F70073D6F7006BCEC6007BC6840094CE9C0094CE940084C68C007BC684007BC6
      84004A9C52004AA55A0052A55A005A735A0039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0042A5FF0031A5FF0042B5F70084FFFF0084FFFF0039DE
      FF00EFCE9C0000000000000000000000000000840000399442003994420073D6
      F70073D6F700ADEFFF008CCE94008CCE940094CE9C008CCE940084C68C003994
      42003994420039944200399442000084000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000525252005AB5630063BD7B0073D6
      F70073D6F700ADEFFF00ADDEB5009CD6A50094CE9C0084C68C0084C68C007BBD
      84006BB573004AA5520052A55A005A635A0039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0039A5FF0084FFFF0063C6FF0084FFFF0084FFFF0084FFFF0039DE
      FF000000000000000000000000000000000000840000399442003994420073D6
      F70073D6F700B5EFFF008CCE9400A5D6A5008CCE940094CE9C0084C68C007BC6
      84003994420039944200399442000084000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CECE
      CE00000000009C9C9C0000000000000000004A524A005AB5630063BD840073D6
      F700B5EFFF00B5EFFF00B5EFFF00A5D6A5009CCEA5008CCE940084C68C007BC6
      840073BD7B0073BD7B005AAD63005A5A5A0039DEFF0084FFFF0084FFFF0084FF
      FF0084FFFF0084FFFF0042A5FF004AADFF0052B5FF0084FFFF0084FFFF0039DE
      FF0000000000000000000000000000000000008400003994420039944200B5EF
      FF00B5EFFF00B5EFFF00B5EFFF00ADEFF700A5D6AD009CCE9C008CCE940084C6
      8C007BC6840073BD7B00399442000084000000000000000000009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000009C9C9C000000000000000000396342005AB563006BC69400ADEF
      FF00B5EFFF00B5EFFF00B5EFFF00ADEFF700A5D6AD0094CE9C008CCE940084C6
      8C0073BD7B006BBD730063B573006B6B6B0039DEFF0039DEFF0039DEFF0039DE
      FF0039DEFF0084FFFF0084FFFF004AADFF0084FFFF0084FFFF0084FFFF0039DE
      FF00000000000000000000000000000000000084000039944200399442008CCE
      9400B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF00A5DEC6008CCE94008CCE
      940084C68C007BBD8400008400000000000000000000000000009C9C9C000000
      0000CECECE00CECECE00CECECE00CECECE00CECECE00000000009C9C9C009C9C
      9C009C9C9C009C9C9C000000000000000000528C52008CCE8C00DEEFDE00CEEF
      E700B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF0094CE9C008CCE94008CC6
      94007BBD840073BD7B00639C6B00000000000000000039DEFF0084FFFF0084FF
      FF0039DEFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0039DE
      FF000000000000000000000000000000000000840000399442008CCE94008CCE
      94008CCE9400B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF0094CE9C008CCE
      94008CCE94008CCE9400000000000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C000000
      00009C9C9C00000000000000000000000000636B6300E7F7E700E7F7E700E7F7
      E700D6EFD600CEE7D600B5EFFF00B5EFFF00B5EFFF00B5EFFF00B5EFFF008CC6
      B5000000000000000000000000000000000000000000000000000000000084FF
      FF0039DEFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0039DE
      FF000000000000000000000000000000000000000000008400008CCE94008CCE
      94008CCE94008CCE94008CCE9400B5EFFF00B5EFFF00B5EFFF00B5EFFF000000
      00000000000000000000000000000000000000000000000000009C9C9C000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C0000000000000000000000000000000000000000006B736B00DEEFE700E7F7
      E700D6EFDE00D6EFD600CEE7CE00B5EFFF00B5EFFF00BDEFFF00000000000000
      00000000000000000000000000000000000000000000000000000000000039DE
      FF0039DEFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0084FFFF0039DE
      FF00000000000000000000000000000000000000000000000000008400000084
      00008CCE94008CCE94008CCE9400ADCEB5008CCE9400B5EFFF00000000000000
      00000000000000000000000000000000000000000000000000009C9C9C009C9C
      9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000008C94
      8C00DEEFDE00D6EFDE00CEEFD600ADCEB500BDCED60000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000039DEFF0039DEFF0039DEFF0039DEFF0039DEFF0039DEFF0039DEFF0039DE
      FF00000000000000000000000000000000000000000000000000000000000000
      000000840000008400008CCE94008CCE94000084000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000ADADA500DEEFDE00B5C6B500000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000840000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000C694
      8400C6949400C6948400C6848400B5848400B57B7300B57B7300B57B7300B573
      7300B5737300A5736300A56B6300A5636300000000000000000000000000C694
      8400C6949400C6948400C6848400B5848400B57B7300B57B7300B57B7300B573
      7300B5737300A5736300A56B6300A56363000000000000000000000000000000
      000000000000000000000000000000000000000000009CA58C00000000000000
      00000000000000000000000000000000000000000000000000000000000000FF
      FF0000FFFF0000FFFF0000FFFF000084840000848400000000000000000000FF
      FF0000FFFF00000000000000000000000000000000000000000000000000C694
      9400F7DEC600FFFFD600FFF7C600FFEFB500FFDEA500FFD6A500FFC69400F7B5
      8400F7AD7300E7946300C6846300A56B6300000000000000000000000000C694
      9400F7DEC600FFFFD600FFF7C600FFEFB500FFDEA500FFD6A500FFC69400F7B5
      8400F7AD7300E7946300C6846300A56B63000000000000000000000000000000
      00000000000000000000000000000000000094735200944A2100000000000000
      0000000000000000000000000000000000000000000000848400008484000000
      000000000000000000000000000000000000000000000000000000FFFF0000FF
      FF0000FFFF00008484000000000000000000000000000000000000000000C69C
      9400D6948400FFF7E700FFFFF700FFFFE700FFFFD600FFF7C600FFEFB500FFDE
      A500FFD69400F7B58400C6736300A56B6300000000000000000000000000C69C
      9400D6948400FFF7E700FFFFF700FFFFE700FFFFD600FFF7C600FFEFB500FFDE
      A500FFD69400F7B58400C6736300A56B63000000000000000000000000000000
      0000000000000000000000000000A56B4A00D67B5200D6734200B56331000000
      0000000000000000000000000000000000000000000000000000008484000084
      84000084840000848400008484000084840000FFFF0000FFFF0000FFFF000084
      840000FFFF0000FFFF0000FFFF0000000000C6948400C6949400C6948400D69C
      9400FFEFB500D6948400F7F7E700FFFFF700FFFFE700FFFFE700FFF7D600FFEF
      B500F7D6A500C6846300F7BD9400A5737300738C9400737B840063737300D69C
      9400FFEFB500D6948400F7F7E700FFFFF700FFFFE700FFFFE700FFF7D600FFEF
      B500F7D6A500C6846300F7BD9400A5737300000000002121B5001008A5001008
      8400100873007394AD00A5523100E7845200F7946300DE9C7300D68C6300AD6B
      4200000000000000000000000000000000000000000000848400008484000084
      84000084840000848400008484000084840000FFFF0000FFFF000084840000FF
      FF0000FFFF000084840000FFFF0000000000C6949400F7DEC600FFFFD600D6A5
      9400FFFFE700F7DEB500C6A5A500F7F7E700FFF7E700FFF7E700F7EFD600F7D6
      B500C67B7300F7D6B500F7D6A500A57B7300738C9400C6F7FF00C6F7FF00D6A5
      9400FFFFE700F7DEB500C6A5A500F7F7E700FFF7E700FFF7E700F7EFD600F7D6
      B500C67B7300F7D6B500F7D6A500A57B73004239A5008473C6008473C6008473
      C60010087300738CC600D6A59400F7AD9400DEAD8C0000000000DEAD8400D68C
      6300A57B630000000000000000000000000000848400000000000000000000FF
      FF0000FFFF0000FFFF00008484000084840000FFFF0000FFFF000084840000FF
      FF00000000000084840000FFFF0000000000C69C9400D6948400FFF7E700D6AD
      A500F7EFC600D69C9400A5FFFF00C6A59400C69C9400C68C8400C68C8400B594
      940073DEFF00B59C9400F7D6B500B5848400848C9400C6F7FF0094EFFF00D6AD
      A500F7EFC600D69C9400A5FFFF00C6A59400C69C9400C68C8400C68C8400B594
      940073DEFF00B59C9400F7D6B500B58484004231A500736BC600846BD6007363
      C60010087300524AC60094A5BD00A59C9C00000000000000000000000000D6AD
      8400D67B52009C94730000000000000000000084840000848400008484000084
      84000084840000848400008484000084840000FFFF00008484000084840000FF
      FF0000FFFF0000FFFF0000FFFF0000000000D69C9400FFEFB500D6948400D6AD
      A500D6B5A500C6FFFF00C6FFFF00B5FFFF00B5FFFF00A5F7FF0094EFFF0084E7
      FF0073DEFF0073DEFF00B5948400A57B73008494A500C6F7FF00A5EFFF00D6AD
      A500D6B5A500C6FFFF00C6FFFF00B5FFFF00B5FFFF00A5F7FF0094EFFF0084E7
      FF0073DEFF0073DEFF00B5948400A57B73004231A5007363C6007363C6001008
      94006352B500312184005242C600211884000000000000000000000000000000
      0000D6AD8400C67342009C9C8400000000000000000000000000008484000084
      840000000000000000000000000000000000000000000084840000FFFF000084
      84000084840000FFFF000000000000000000D6A59400FFFFE700F7DEB500D6AD
      A500A5EFFF00A5EFFF00A5EFFF00A5EFFF0094E7FF0084DEFF0084DEF70073D6
      F70073CEF70063CEF70063CEF700B57B84008494A500B5F7FF00B5F7FF00D6AD
      A500A5EFFF00A5EFFF00A5EFFF00A5EFFF0094E7FF0084DEFF0084DEF70073D6
      F70073CEF70063CEF70063CEF700B57B8400000000005242A5003129A500E7E7
      E700FFFFF7001008730010086300000000000000000000000000000000000000
      000000000000CEAD8C00C67342009C947B00000000000000000000FFFF0000FF
      FF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF000084840000FF
      FF0000FFFF00000000000000000000000000D6ADA500F7EFC600D69C9400D6DE
      DE00C6A59C00E7FFFF00E7FFFF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7
      FF0084EFFF0084E7FF00B58C8400D6DEDE00849CA500C6F7FF00B5F7F700C6F7
      FF00C6A59C00E7FFFF00E7FFFF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7
      FF0084EFFF0084E7FF00B58C840000000000000000007373940063636300525A
      52006363630031398C0000000000000000000000000000000000000000000000
      00000000000000000000DEB59C00C67352000000000000000000000000000000
      000000FFFF00C6C6C600C6C6C600C6C6C600C6C6C60000000000000000000000
      000000000000000000000000000000000000D6ADA500D6B5A500C6FFFF00C6FF
      FF00D6DEDE00C6A5A500F7FFFF00F7FFFF0084E7FF00F7FFFF00D6FFFF00B5FF
      FF0094EFFF00B57B8400D6DEE70000000000849CA500C6F7FF00B5F7FF00C6F7
      FF00C6F7FF00CEA5A500F7FFFF00F7FFFF00F7FFFF00F7FFFF00D6FFFF00B5FF
      FF0094EFFF00B57B84006373840000000000738C8C0000000000C6C6C600A5A5
      A500848C8400525A52007B7B7B00000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000848400C6C6
      C6000000000000FFFF0000FFFF0000FFFF0000FFFF0000FFFF0000FFFF000000
      000000000000000000000000000000000000D6ADA500A5EFFF00A5EFFF00A5EF
      FF00A5EFFF00D6DEDE00C6A5A500F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FF
      FF00B57B8400D6DEDE00000000000000000094A5A500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700C6F7FF00CEA5A500F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FF
      FF00B57B8400C6F7FF0063738400000000004239420031313100D6DED600C6C6
      C600A5A5A500848C8400636B6300000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000084
      840000848400FFFFFF00FFFFFF00FFFFFF000084840000848400008484000084
      840000848400000000000000000000000000D6DEDE00C6A59C00E7FFFF00E7FF
      FF00F7FFFF00F7FFFF00D6DEDE00C6A59C00C6A5A500C6A5A500C69C9400C69C
      9400D6D6D60000000000000000000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00C6F7FF00C6A59C00C6A5A500C6A5A500C69C9400C69C
      9400C6F7FF0063BDF700637384000000000052525200524A5200B5BDB500D6DE
      D600C6C6C600A5A5A500737B7300000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000008484000084840000FFFF0000FFFF0000FFFF0000FFFF0000FFFF000084
      84000000000000000000000000000000000000000000D6DEDE00C6A5A500F7FF
      FF00F7FFFF0000000000F7FFFF00D6FFFF00B5FFFF0094EFFF00B57B8400D6DE
      E7000000000000000000000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA500849CA500849CA500849C
      A500849CA5008494A5000000000000000000737B730063636300636363007373
      7300635A6300C6C6C600848C8400000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000084840000FFFF0000FFFF0000FFFF0000FFFF0000FFFF00008484000084
      8400000000000000000000000000000000000000000000000000D6DEDE00C6A5
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
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C63000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00CE9C6300000000000000000000000000C6AD
      9400735A420073524200634A3100634A3100634A3100634A3100634A3100634A
      3100634A3100634A3100634A3100634A31000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000C6948400C694
      9400C6948400C6848400B5848400B57B7300B57B7300B57B7300B5737300B573
      7300A5736300A56B6300A563630000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00CE9C6300000000000000000000000000C6AD
      9400FFFFF700F7E7E700F7DEC600E7D6C600E7CEB500E7C6B500E7BDA500E7B5
      A500D6AD9400D6A59400D6A58400634A31000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CE00000063
      0000FFFFD600FFF7C600FFEFB500FFDEA500FFD6A500FFC69400F7B58400F7AD
      7300E7946300C6846300A56B630000000000000000000000000000000000CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700E7E7E700E7E7E700FFFFFF00CE9C6300000000000000000000000000C6AD
      A500FFFFFF00FFFFF700FFFFF700F7F7E700F7EFE700F7E7D600F7DED600F7DE
      C600F7D6C600F7D6C600D6AD9400634A3100000000000000000000000000C694
      8400C6949400C6948400C6848400B5848400B57B7300B57B7300B57B7300B573
      7300B5737300A5736300A56B6300A5636300738C940000CE0000009C0000009C
      000000630000FFFFF700FFFFE700FFFFD600FFF7C600FFEFB500FFDEA500FFD6
      9400F7B58400C6736300A56B630000000000000000000000000000000000CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00CE9C6300738C9400737B840063737300C6AD
      A50000000000C6B5A500B5A59400B59C9400B59C8400A5948400F7E7D600F7DE
      D600F7DEC600F7D6C600E7B5A500634A310000000000000000000000000000CE
      000000630000FFFFD600FFF7C600FFEFB500FFDEA500FFD6A500FFC69400F7B5
      8400F7AD7300E7946300C6846300A56B630000CE0000009C0000009C0000009C
      0000009C000000630000FFFFF700FFFFE700FFFFE700FFF7D600FFEFB500F7D6
      A500C6846300F7BD9400A573730000000000CE9C6300CE9C6300CE9C6300CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700E7E7E700E7E7E700FFFFFF00CE9C6300738C9400A5E7F70073D6F700C6B5
      A50000000000D6C6B500C6B5A500C6ADA500C6AD9400B5A59400B5A59400F7E7
      D600F7DED600F7DEC600E7B5A500634A3100000000000000000000CE0000009C
      0000009C000000630000FFFFF700FFFFE700FFFFD600FFF7C600FFEFB500FFDE
      A500FFD69400F7B58400C6736300A56B6300009C0000009C0000009C0000009C
      0000009C0000009C000000630000C67B7300C67B7300C67B7300C67B7300C67B
      7300F7D6B500F7D6A500A57B730000000000CE9C6300FFFFFF00FFFFFF00CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00CE9C6300848C9400B5EFF70094EFFF00C6B5
      A5000000000000000000FFFFFF00FFFFF700FFFFF700FFF7F700F7EFE700F7EF
      E700F7E7D600F7DED600E7BDA500634A31000000000000CE0000009C0000009C
      0000009C0000009C000000630000FFFFF700FFFFE700FFFFE700FFF7D600FFEF
      B500F7D6A500C6846300F7BD9400A5737300009C0000009C00000063000000CE
      0000009C0000009C0000009C000000630000FFFFE700FFFFE700FFFFF700F7F7
      E700D6948400FFEFB500D69C940000000000CE9C6300FFFFFF00FFFFFF00CE9C
      6300FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00FFFF
      FF00CE9C6300CE9C6300CE9C6300CE9C63008494A500B5EFF700A5EFFF00D6B5
      A500000000000000000000000000FFFFFF00FFFFFF00FFFFF700FFF7F700FFEF
      E700214AD6002142A500E7C6B500634A310000CE0000009C0000009C0000009C
      0000009C0000009C0000009C000000630000C67B7300C67B7300C67B7300C67B
      7300C67B7300F7D6B500F7D6A500A57B7300009C000000630000A56B6300C673
      630000CE0000009C0000009C0000009C000000630000FFFFD600FFFFE700FFFF
      F700FFF7E700D6948400C69C940000000000CE9C6300FFFFFF00E7E7E700CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300E7E7E700CE9C6300000000008494A500B5F7FF00B5F7FF00D6BD
      A50000000000000000000000000000000000FFFFFF00FFFFFF00FFFFF700FFF7
      F7004263F700214AD600F7D6D6007352420000CE0000009C0000009C00000063
      000000CE0000009C0000009C0000009C000000630000FFFFE700FFFFE700FFFF
      F700F7F7E700D6948400FFEFB500D69C940000630000C6F7FF00A56B6300C684
      6300E794630000CE0000009C0000009C0000009C000000630000FFEFB500FFF7
      C600FFFFD600F7DEC600C694940000000000CE9C6300FFFFFF00FFFFFF00CE9C
      6300FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C6300CE9C6300CE9C630000000000849CA500C6F7FF00B5F7F700D6BD
      A500000000000000000000000000000000000000000000000000FFFFFF00FFFF
      F700FFFFF700FFF7F700F7EFE700735A420000CE0000009C000000630000A56B
      6300C673630000CE0000009C0000009C0000009C000000630000FFFFD600FFFF
      E700FFFFF700FFF7E700D6948400C69C9400849CA500C6F7FF00A5636300A56B
      6300A5736300B573730000CE0000009C0000009C0000009C000000630000C684
      8400C6948400C6949400C694840000000000CE9C6300FFFFFF00E7E7E700CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300000000000000000000000000849CA500C6F7FF00B5F7FF00D6BD
      A500D6BDA500D6BDA500C6B5A500C6B5A500C6B5A500C6ADA500C6ADA500C6AD
      A500C6AD9400C6AD9400C6AD9400C6AD940000CE00000063000000000000A56B
      6300C6846300E794630000CE0000009C0000009C0000009C000000630000FFEF
      B500FFF7C600FFFFD600F7DEC600C694940094A5A500C6F7FF00C6F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0000CE0000009C0000009C0000009C00000063
      000052BDF700219CD6006373840000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00CE9C630000000000000000000000000094A5A500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD6006373840000000000000000000000000000000000A563
      6300A56B6300A5736300B573730000CE0000009C0000009C0000009C00000063
      0000C6848400C6948400C6949400C694840094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00B5F7FF00A5EFFF0000CE0000009C0000009C00000063
      000073CEF70063BDF7006373840000000000CE9C6300FFFFFF00E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C6300CE9C
      6300CE9C630000000000000000000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00B5F7FF00A5EFFF0094EFFF0094E7FF0084DEFF0073D6
      FF0073CEF70063BDF70063738400000000000000000000000000000000000000
      00000000000000000000000000000000000000CE0000009C0000009C0000009C
      00000063000000000000000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA50000CE0000009C00000063
      0000849CA5008494A5000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7E700CE9C
      63000000000000000000000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA500849CA500849CA500849C
      A500849CA5008494A500EFEFF700000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000CE0000009C0000009C
      00000063000000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF00B5F7F70094E7F70094A5B50000000000000000000000000000CE00000063
      000000000000000000000000000000000000CE9C6300FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C63000000
      00000000000000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF00B5F7F70094E7F70094A5B500BDD6D6000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000CE0000009C
      0000006300000000000000000000000000000000000094ADB50094ADB50094AD
      B50094ADB50094ADB50000000000000000000000000000000000000000000000
      000000000000000000000000000000000000CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C630000000000000000000000
      000000000000000000000000000000000000E7F7F70094ADB50094ADB50094AD
      B50094ADB50094ADB500E7EFEF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000000CE
      0000006300000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      9C00000000000000000000000000000000000000000000000000000000000000
      00000000FF000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000008484840084848400848484000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000003131CE000000
      FF00000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000000000000000000084AD
      C6005273840042739400316B8400316B840031638400315A7300315A7300315A
      7300315A73003152630031526300314A63000000000000000000000000000000
      000084848400B5B5B5009C9C9C00B5B5B5008484840084848400000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000944A
      21000000000000000000000000000000000000000000000000003131CE00319C
      FF0000009C0094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE000000000000000000000000000000000084AD
      C600D6FFFF00A5EFFF0084E7F70084DEF70073D6F70073D6F70073CEF70073CE
      F70073CEF70063CEF70063C6F700315263000000000000000000000000008484
      8400B5B5B5009C9C9C00FFFFFF00FFFFFF00B5B5B500B5B5B500848484008484
      8400000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000000000000000A552
      2100A552310000000000000000000000000000000000000000003131CE00319C
      FF0000009C0094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE000000000000000000000000000000000084AD
      C600C6EFF700B5FFFF0094F7FF0094F7FF0094F7FF0094F7FF0094F7FF0094F7
      FF0094F7FF0084E7FF0063BDE700315263000000000000000000000000008484
      84009C9C9C00FFFFFF009C9C9C009C9C9C00FFFFFF00FFFFFF00B5B5B500B5B5
      B500848484008484840000000000000000000000000000000000000000000000
      0000000000000000000000000000D6846300944A2100A54A2100A5522100B55A
      3100C66B4200A552310000000000000000000000000000000000000000003131
      CE000000CE0094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE000000
      FF00BDC6CE00BDC6CE00BDC6CE0000000000738C9400737B84006373730084B5
      C60084BDD60094E7F70094FFFF0094F7FF0084EFFF0073E7FF0084EFFF0084EF
      FF0094F7FF0073DEF700428CB500425A6300000000000000000084848400B5B5
      B5009C9C9C00FFFFFF0084848400B5B5B5009C9C9C00FFFFFF00FFFFFF00FFFF
      FF00B5B5B500B5B5B5008484840000000000C6948400C6948400C6948400C68C
      8400C68C8400B58C8400C6A5A500D68C6300FFB59400F7946300F78C5200E784
      5200D67B5200C6734200A55A3100000000000000000000000000000000000000
      00000000FF0000009C00949494009494940094949400949494000000FF000000
      9C0094949400949494009494940000000000738C9400A5E7F70073D6F70094B5
      C600B5EFF70063BDD60084EFFF0073E7F70052B5E70031A5D6003194C60073D6
      F70073DEF700429CC60063C6E700425A73000000000000000000848484009C9C
      9C00FFFFFF00B5B5B50084848400B5B5B5009C9C9C00FFFFFF00848484008484
      8400FFFFFF00FFFFFF008484840000000000C6949400F7DEC600FFFFD600FFF7
      C600FFEFB500FFDEA500FFE7B500E7947300FFBD9400FFAD8400FF946300F794
      6300E78C5200E77B5200C6734200B55A31000000000000000000000000000000
      00000000CE000000FF0000009C0000000000000000000000FF0000009C000000
      000000000000000000000000000000000000848C9400B5EFF70094EFFF0094BD
      D600D6FFFF00A5EFF70073CEF70052B5E70084DEF70084EFFF0084EFF70042A5
      C60052C6E70084E7F70073CEF700426373000000000084848400B5B5B5009C9C
      9C00FFFFFF00B5B5B500E7E7E700B5B5B500FFFFFF00FFFFFF00FFFFFF00B5B5
      B50084848400FFFFFF008484840000000000C69C9400D6948400FFF7E700FFFF
      F700FFFFE700FFFFD600FFF7D600E79C7300FFC6A500FFC6A500FFB58400FFAD
      8400FFA57300E7845200B55A3100000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C000000FF0000009C00000000000000
      0000000000000000000000000000000000008494A500B5EFF700A5EFFF0094C6
      D600D6FFFF0094EFF70063BDE70084E7F700A5FFFF0094F7FF0094F7FF0094EF
      FF0052ADD60084E7F70073D6F7004263730000000000848484009C9C9C00FFFF
      FF00B5B5B500E7E7E700E7E7E700B5B5B500FFFFFF008484840084848400FFFF
      FF00FFFFFF00FFFFFF008484840000000000D69C9400FFEFB500D6948400F7F7
      E700FFFFF700FFFFE700FFFFE700F7A57300E79C7300E7947300D68C6300E794
      7300F79C7300B55A310000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C000000FF0000009C00000000000000
      0000000000000000000000000000000000008494A500B5F7FF00B5F7FF0094C6
      D600C6FFFF0063C6E70094E7F700A5FFFF00A5FFFF00A5FFFF00A5FFFF0094F7
      FF0094EFFF0052A5C60063C6E700526B730084848400B5B5B5009C9C9C00FFFF
      FF00FFFFFF00FFFFFF00B5B5B500FFFFFF00FFFFFF00FFFFFF00B5B5B5008484
      8400FFFFFF00848484000000000000000000D6A59400FFFFE700F7DEB500C6A5
      A500F7F7E700FFF7E700FFF7E700F7F7E700F7EFE700F7E7E700FFF7E700E79C
      7300C67B52000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C0000000000000000000000
      000000000000000000000000000000000000849CA500C6F7FF00B5F7F70094CE
      D600A5E7F700E7FFFF00E7FFFF00E7FFFF00E7FFFF00E7FFFF00E7FFFF00D6FF
      FF00D6FFFF00B5FFFF00429CC60052738400848484009C9C9C00FFFFFF00FFFF
      FF009C3100009C310000FFFFFF00FFFFFF008484840084848400FFFFFF00FFFF
      FF00FFFFFF00848484000000000000000000D6ADA500F7EFC600D69C9400A5FF
      FF00C6A59400C6949400C68C8400B5949400B59C9400C6ADB500E7C6C600F7A5
      7300D6B5A50000000000000000000000000094949400BDC6CE00BDC6CE00BDC6
      CE00BDC6CE000000CE000000FF0000009C000000CE0000009C00000000000000
      000000000000000000000000000000000000849CA500C6F7FF00B5F7FF0094CE
      D60094CED60094CED60094CED60094C6D60094C6D60094BDD60094BDC60084B5
      C60084B5C60084ADC60084ADC60084ADC600000000009C9C9C009C9C9C00FFFF
      FF00FFFFFF00B5B5B5009C3100009C310000FFFFFF00FFFFFF0084848400FFFF
      FF0084848400000000000000000000000000D6ADA500D6B5A500C6FFFF00C6FF
      FF00B5FFFF00B5FFFF00A5F7FF0094EFFF0084E7FF0084DEFF00A5E7FF00D6C6
      B500C6ADB50000000000000000000000000094949400BDC6CE00BDC6CE00BDC6
      CE000000CE000000FF0000009C00BDC6CE00BDC6CE000000CE0000009C000000
      00000000000000000000000000000000000094A5A500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD60063738400000000000000000000000000000000009C9C
      9C009C9C9C00FFFFFF00FFFFFF00B5B5B5009C3100009C310000FFFFFF00FFFF
      FF0084848400000000000000000000000000D6ADA500A5EFFF00A5EFFF00A5EF
      FF00A5EFFF0094E7FF0084DEFF0084DEF70073D6F70073CEF70063CEF70073CE
      F700B57B84000000000000000000000000009494940094949400949494000000
      CE000000FF0000009C00949494009494940094949400949494000000CE000000
      9C000000000000000000000000000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00B5F7FF00A5EFFF0094EFFF0094E7FF0084DEFF0073D6
      FF0073CEF70063BDF70063738400000000000000000000000000000000000000
      0000000000009C9C9C009C9C9C00FFFFFF00FFFFFF00B5B5B500FFFFFF008484
      84000000000000000000000000000000000000000000BDA59C00E7FFFF00E7FF
      FF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7FF0084EFFF0084E7FF00B58C
      8400000000000000000000000000000000009494940094949400949494000000
      CE000000FF0000009C00949494009494940094949400949494000000CE000000
      9C000000000000000000000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA500849CA500849CA500849C
      A500849CA5008494A500EFEFF700000000000000000000000000000000000000
      00000000000000000000000000009C9C9C009C9C9C00FFFFFF00FFFFFF008484
      8400000000000000000000000000000000000000000000000000BD9C9C00F7FF
      FF00F7FFFF0000000000F7FFFF00D6FFFF00B5FFFF0094EFFF00B57B84000000
      00000000000000000000000000000000000000000000000000000000CE00319C
      FF0000009C000000000000000000000000000000000000000000000000000000
      CE000000000000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF00B5F7F70094E7F70094A5B500BDD6D6000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000009C9C9C009C9C9C000000
      000000000000000000000000000000000000000000000000000000000000C6A5
      9C00F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FFFF00B57B8400000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      CE00000000000000000000000000000000000000000000000000000000000000
      00000000CE00000000000000000000000000E7F7F70094ADB50094ADB50094AD
      B50094ADB50094ADB500E7EFEF00000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000C6A59C00C6A5A500C6A5A500C69C9400C69C940000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000736352004231210042312100423121005239
      310063524A00ADA5940000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      9C00000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000FF00000000000000000000000000000000000000
      00000000000000000000B59C9400E7CEB500FFF7D600FFFFE700FFF7D600FFEF
      C600F7D6B500735A4A0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000084848400C6C6C600C6C6C600C6C6
      C600C6C6C600C6C6C600000000000000000000000000000000003131CE000000
      FF0000009C000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000A58C840000000000FFFFFF00FFFFF700FFF7E700FFF7
      D600FFE7C600846B5200BDADA500000000000000000000000000000000000000
      00000000000094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00000000000000000000000000000000000000
      00000000000000000000000000000000000084848400C6C6C600C6C6C600C6C6
      C600C6C6C600C6C6C600000000000000000000000000000000003131CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      0000000000000000FF0000000000000000000000000000000000000000000000
      000000000000D6CEC600B5ADA500F7FFE70073BD630000630000004A0000004A
      0000F7DEB500B5947300947B7300000000000000000000000000000000000000
      00000000000094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00000000000000000000000000848484008484
      8400848484008484840084848400000000008484840084848400848484008484
      8400848484008484840000000000000000000000000000000000000000003131
      CE000063FF000000CE0000000000000000000000000000000000000000000000
      00000000FF00000000000000000000000000738C9400737B8400637373005263
      630031394200BDADA500E7DED600D6F7D600219C2100FFFFF700FFFFF700FFFF
      F700C6CE9400E7BDA50063524A00000000000000000000000000000000000000
      00000000000094949400BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00000000000000000084848400000000000000
      000000000000C6C6C600000000000000000084848400C6C6C600C6C6C600C6C6
      C600C6C6C600C6C6C60000000000000000000000000000000000000000000000
      00000000CE000000FF0000009C00000000000000000000000000000000000000
      FF0000009C00000000000000000000000000738C9400A5E7F70073D6F70052BD
      E70031A5C600A58C8400F7F7F700F7FFF70084DE840000840000FFFFF7003184
      3100FFE7C600F7D6B500634A3100000000000000000000000000000000000000
      0000000000009494940094949400949494009494940094949400949494009494
      9400949494009494940094949400000000000000000084848400C6C6C600C6C6
      C600C6C6C600C6C6C600C6C6C600C6C6C60084848400C6C6C600C6C6C600C6C6
      C600C6C6C600C6C6C60000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000FF000000
      9C0000000000000000000000000000000000848C9400B5EFF70094EFFF0084E7
      FF00E7DED600B59C9400FFF7E700FFEFE700F7DEC60021C62100FFFFF7000063
      1000FFF7D600FFE7B50073635200000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000084848400000000000000
      000000000000C6C6C60000000000000000008484840084848400848484000000
      FF00848484008484840000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000FF0000009C000000
      0000000000000000000000000000000000008494A500B5EFF700A5EFFF0094EF
      FF00BDADA500C6B5B500FFFFF700FFF7F700FFEFE700E7FFD60010B5100094DE
      9400FFF7D600FFEFC600A58C730094847B000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000084848400C6C6C600C6C6
      C600C6C6C600C6C6C600C6C6C600C6C6C60084848400C6C6C6000000FF000000
      FF000000FF00C6C6C60000000000000000000000000000000000000000000000
      00000000000000000000000000000000CE000000FF0000009C00000000000000
      0000000000000000000000000000000000008494A500B5F7FF00B5F7FF00A5EF
      FF00A58C8400E7D6D60000000000FFFFF700FFF7F700FFEFE700FFFFF700FFFF
      F700FFF7E700FFF7D600D6B59400736352000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000084848400000000000000
      000000000000C6C6C6000000000000000000848484000000FF000000FF000000
      FF000000FF000000FF0000000000000000000000000000000000000000000000
      000000000000000000000000CE000000FF0000009C000000CE0000009C000000
      000000000000000000000000000000000000849CA500C6F7FF00B5F7F700A5F7
      FF00A58C8400F7F7F700FFFFFF0000000000FFFFF700FFF7E700FFFFF700FFFF
      F700FFF7E700FFF7E700F7D6B5005A4A39000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000084848400C6C6C600C6C6
      C600C6C6C600C6C6C600C6C6C600C6C6C6008484840084848400848484000000
      FF00848484008484840000000000000000000000000000000000000000000000
      0000000000000000CE000000FF0000009C0000000000000000000000CE000000
      9C0000000000000000000000000000000000849CA500C6F7FF00B5F7FF00B5F7
      FF00A58C8400A58C8400A5948400948C8400A5948400A5948400A5948400A594
      8400A58C8400A58C840073635200524231000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000084848400000000000000
      000000000000C6C6C600000000000000000000000000C6C6C600000000000000
      FF00000000000000000000000000000000000000000000000000000000000000
      CE000000FF000000FF0000009C00000000000000000000000000000000000000
      CE0000009C0000000000000000000000000094A5A500C6F7FF00B5F7FF00B5F7
      FF00A5F7FF008C7B730084736300B5A59400E7DED600F7F7F700FFFFF700FFFF
      F700F7F7F700D6CEC600E7D6D6007B6B630094949400BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00000000000000
      0000000000000000000000000000000000000000000084848400848484008484
      84008484840084848400848484008484840084848400848484000000FF008484
      84008484840000000000000000000000000000000000000000000000CE00319C
      FF000000FF0000009C0000000000000000000000000000000000000000000000
      00000000CE0000009C00000000000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00B5F7FF009C948400A5947B00C6C6C600F7F7F700FFFFFF00FFFFF700FFFF
      F700E7E7E700D6C6C60094846B000000000094949400BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00000000000000
      0000000000000000000000000000000000000000000084848400C6C6C600C6C6
      C600C6C6C600848484000000FF000000FF000000FF000000FF00C6C6C600C6C6
      C600C6C6C600000000000000000000000000000000000000000063639C000000
      CE0063639C000000000000000000000000000000000000000000000000000000
      000000000000000000000000CE000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5A500A5A5940094847B00947B730094847300947B7300947B
      7300735A420073635200000000000000000094949400BDC6CE00BDC6CE00BDC6
      CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00BDC6CE00000000000000
      0000000000000000000000000000000000000000000084848400C6C6C600C6C6
      C600C6C6C60084848400C6C6C600C6C6C600C6C6C60084848400C6C6C600C6C6
      C600C6C6C6000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF0094E7F70094A5B500BDD6D600000000000000000000000000000000000000
      0000000000000000000000000000000000009494940094949400949494009494
      9400949494009494940094949400949494009494940094949400000000000000
      0000000000000000000000000000000000000000000084848400848484008484
      8400848484008484840084848400848484008484840084848400848484008484
      8400848484000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000094ADB50094ADB50094AD
      B50094ADB500E7EFEF0000000000000000000000000000000000000000000000
      0000000000000000000000000000000000009494940094949400949494009494
      9400949494009494940094949400949494009494940094949400000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000F7F7F700000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000009C0000009C0000009C0000009C0000009C0000009C
      0000009C0000009C0000009C0000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000F7F7F700A59C8C005A42290052392100EFE7E7000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000009C000000CE000000CE000000CE000000CE000000CE0000009C
      0000009C0000009C0000009C0000009C00000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006321
      6300000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000BDB5AD005239210063523900C6947300E7AD9400845A42000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000063CE00009C000000FF000000CE000000CE000000CE000000CE000000CE
      000000CE0000009C0000009C0000009C00000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000632163006321
      6300000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000009C0000009C0000009C0000009C0000009C
      0000009C0000009C0000009C000000000000000000000000000000000000B5B5
      AD0052392100735A4A00D6AD9400FFD6B500FFD6B500FFD6B500735A5200DEDE
      D600000000000000000000000000000000000000000000000000000000000000
      0000009CFF00009C000000CE000000FF000000CE000000CE000000CE000000CE
      0000009C000000CE0000009C0000009C00000000000000000000000000000000
      0000000000000000000000000000000000000000000073216300A54294006321
      6300632163006321630063216300632163000000000000000000000000000000
      00000000000000000000009C000000FF000000CE000000CE000000CE000000CE
      000000CE0000009C000000CE0000009C000000000000B5ADA500523921005239
      2100E7D6C600FFEFD600FFE7D600FFDEC600FFDEC600FFD6B500F7C6B500B594
      840000000000000000000000000000000000000000000000000000000000009C
      9C0000CEFF00009C000000FF000000CE000000FF000000CE000000CE000000CE
      000000CE0000009C000000CE0000009C0000C6948400C6948400C6948400C68C
      8400C68C8400B58C8400C6949400C69CA500944A8400A552A500C65AB500B552
      A500B54AA5009442940084398400632163000000000000000000000000000000
      0000000000000063CE00009C000000CE000000FF000000CE000000CE000000CE
      000000CE000000CE0000009C0000009C00000000000052392100F7F7F700FFFF
      FF00FFFFF700FFF7E700FFEFE700FFEFD600FFEFD600FFE7D600FFE7D600D6B5
      A500E7DED6000000000000000000000000000000000000000000009C9C0000CE
      CE00009CFF00009C000000FF000000FF000000CE000000FF000000CE000000CE
      000000CE000000CE0000009C0000009C0000C6949400F7DEC600FFF7D600FFEF
      C600FFE7B500FFE7B500FFE7C600B56BA500D6A5D600D684C600C66BC600C65A
      B500B552B500B552A500A5429400732163000000000000000000000000000000
      00000063CE0000CEFF00009C000000FF000000CE000000FF000000CE000000CE
      000000CE000000CE000000CE0000009C0000000000008C737300000000000000
      0000FFFFFF00FFFFF700FFF7E700738C9400738C9400738C9400738C9400738C
      9400738C9400738C94003142520000000000000000009C006300009C9C0000FF
      FF0000CEFF00009C00009CFF9C0000FF000000FF000000CE000000FF000000CE
      000000CE000000CE000000CE0000009C0000C69C9400D6948400FFF7E700FFFF
      F700FFFFE700FFFFE700FFFFE700F7EFE700C67BB500D6ADD600D69CD600D68C
      C600D684C600C684C600C67BB50073297300000000000000000000000000009C
      9C000063CE00009CFF00009C000000FF000000FF000000CE000000FF000000CE
      000000CE000000CE000000CE0000009C000000000000A5949400E7E7E700F7F7
      F700F7F7F700FFFFF700FFFFF7008494A500FFF7F700D6C6B5000094D600526B
      7300D6B5A500D6B5A500425A6300000000009C0063009C316300009C9C0000CE
      CE0000CEFF00009C00009CFF9C009CFF9C0000FF000000FF000000CE000000FF
      000000CE000000CE000000CE0000009C0000D69C9400FFEFB500D69C9400F7F7
      E700FFFFF700FFFFE700FFFFE700FFFFE700FFEFE700C67BB500D6A5D600A54A
      9400B56BB500B563B500B55AA500B54AA5000000000000000000009C9C0000FF
      FF000063CE0000CEFF00009C00009CFF9C0000FF000000FF000000CE000000FF
      000000CE000000CE000000CE0000009C000000000000BDB5B500524A42002129
      210042394200B5BDB500FFFFF70094A5A500FFFFF700F7F7F70010B5F700424A
      5200F7DEC600D6B5A50052738400000000009C0063009C316300009C9C0000CE
      CE0000CEFF00009C00009CFF9C009CFF9C0000FF000000FF000000CE000000FF
      000000CE000000CE000000CE0000009C0000D6A59400FFFFE700F7DEB500D6A5
      A500F7F7E700FFFFE700FFFFF700FFF7F700F7EFE700E7C6C600C673B500A542
      9400D6BDB500000000000000000000000000000000009C006300009C9C0000CE
      CE000063CE0000CEFF00009C00009CFF9C009CFF9C0000FF000000FF000000CE
      000000FF000000CE000000CE0000009C0000BDBDBD0063636300E7D6C600F7CE
      B500D6B5A50084848400D6CED60094ADB50000000000F7FFF7001094C600216B
      9400FFE7D600D6B5A50063849400000000009C006300CE639C00009C9C0000FF
      FF009CCEFF0000CEFF00009C0000009C0000009C0000009C0000009C0000009C
      0000009C0000009C0000009C000000000000D6ADA500F7EFC600D69C9400A5F7
      F700D6A59400D6ADA500D6B5A500D6BDB500D6BDB500C6D6E700D6C6C600B56B
      B500D6BDB5000000000000000000000000009C006300CE639C00009C9C0000FF
      FF000063CE009CCEFF0000CEFF00009C0000009C0000009C0000009C0000009C
      0000009C0000009C0000009C00000000000084848400D6CEC600FFF7F700FFEF
      D600FFD6C600D6C6B5000094D6000094D60084C6D60000000000FFFFF700FFF7
      F700FFEFE700C6C6C60042526300217394009C0063009C316300009C9C0000FF
      FF009CCEFF009CCEFF0000CEFF0000CEFF00009CFF0000CEFF00009CFF00009C
      FF00009CFF000063CE000000000000000000D6ADA500D6B5A500C6FFFF00C6FF
      FF00B5FFFF00B5FFFF00B5F7FF00B5EFFF00A5EFFF00A5EFFF00B5EFFF00D6C6
      C600C6ADA5000000000000000000000000009C0063009C316300009C9C0000FF
      FF000063CE009CCEFF009CCEFF0000CEFF0000CEFF00009CFF0000CEFF00009C
      FF00009CFF00009CFF000063CE0000000000A5A5A500FFFFF700FFFFF7002129
      210021212100F7DEC60010B5F700A5EFF7000094D60084C6D60000000000FFFF
      F700C6CED60042526300A5EFF70000ADE7009C006300CE639C00009C9C0000FF
      FF000063CE000063CE000063CE000063CE000063CE000063CE000063CE000063
      CE000063CE00000000000000000000000000D6ADA500A5EFFF00A5EFFF00A5EF
      FF00A5EFFF0094E7FF0094E7FF0084DEF70084D6F70084D6F70084D6F70094D6
      F700BD9494000000000000000000000000009C006300CE639C00009C9C0000FF
      FF0000FFFF000063CE000063CE000063CE000063CE000063CE000063CE000063
      CE000063CE000063CE000000000000000000A59C9400F7F7F700000000004239
      4200FFFFF700D6C6C6006384940031C6F700A5EFF7000094D60084C6D600C6DE
      E70042526300A5EFF70000ADE700ADDEF7009C006300CE639C00009C9C0000FF
      FF0000FFFF0000FFFF0000CECE0000FFFF0000CECE0000CECE0000CECE0000CE
      CE000000000000000000000000000000000000000000BDA59C00E7FFFF00E7FF
      FF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7FF0084EFFF0084E7FF00B58C
      9400000000000000000000000000000000009C006300CE639C00009C9C0000FF
      FF0000FFFF0000FFFF0000FFFF0000CECE0000FFFF0000CECE0000CECE0000CE
      CE00009C9C00000000000000000000000000F7F7F70094949400F7F7F700FFFF
      F700E7D6D600424A4200D6CEC600C6DEE70031C6F700A5EFF7000094D6004252
      6300A5EFF7000084D60010299400000000009C006300FF9CCE00CE639C00009C
      9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C
      9C00000000000000000000000000000000000000000000000000BD9C9C00F7FF
      FF00F7FFFF0000000000F7FFFF00D6FFFF00B5FFFF0094EFFF00B57B84000000
      0000000000000000000000000000000000009C006300FF9CCE00CE639C00009C
      9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C9C00009C
      9C000000000000000000000000000000000000000000EFEFEF00949C9400948C
      940084848400CEC6C600F7EFEF0000000000D6F7FF0031C6F700A5F7FF00A5EF
      F70000ADE7001039C6001039B500000000009C006300FF9CCE00FF9CCE00CE63
      9C009C316300CE639C009C3163009C3163009C3163009C3163009C0063000000
      000000000000000000000000000000000000000000000000000000000000C6A5
      9C00F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FFFF00B57B8400000000000000
      0000000000000000000000000000000000009C006300FF9CCE00FF9CCE00CE63
      9C00CE639C009C316300CE639C009C3163009C3163009C3163009C0063000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000000000000000D6F7FF0021C6F70000AD
      E700BDE7F7001052FF00104AF70000000000000000009C0063009C0063009C00
      63009C0063009C0063009C0063009C0063009C0063009C006300000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000C6A59C00C6A5A500C6A5A500C69C9400C69C940000000000000000000000
      000000000000000000000000000000000000000000009C0063009C0063009C00
      63009C0063009C0063009C0063009C0063009C0063009C006300000000000000
      00000000000000000000000000000000000000000000FF9C0000CE630000CE63
      0000CE630000CE630000CE630000CE630000CE630000CE630000CE6300000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000FF9C0000CE630000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE63
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C
      6300CE9C6300CE9C630000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000006321
      630000000000000000000000000000000000FF9C0000CE630000E7E7E700E7E7
      E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700CE63
      00000000000000000000000000000000000000000000737B8400738C9400738C
      9400738C9400738C9400738C9400738C9400738C9400738C9400738C9400738C
      9400738C9400738C940000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C630000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000632163006321
      630000000000000000000000000000000000FF9C0000CE630000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE63
      000000000000000000000000000000000000738C9400A5E7F70073D6F700B5F7
      FF00B5EFF700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700429CC600738C9400000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C630000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000073216300A54294006321
      630063216300632163006321630063216300FF9C0000CE630000E7E7E700E7E7
      E700E7E7E700E7E7E700CECECE00CECECE00CECECE00CECECE00CECECE00CE63
      000000000000000000000000000000000000848C9400B5EFF70094EFFF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C9400000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000000000000000C6948400C6948400C6948400C68C
      8400C68C8400B58C8400C6949400C69CA500944A8400A552A500C65AB500B552
      A500B54AA500944294008439840063216300FF9C0000CE630000FFFFFF00FFFF
      FF00FFFFFF00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700CE63
      0000000000000000000000000000000000008494A500B5EFF700A5EFFF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C9400000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C63000000000000000000C6949400F7DEC600FFF7D600FFEF
      C600FFE7B500FFE7B500FFE7C600B56BA500D6A5D600D684C600C66BC600C65A
      B500B552B500B552A500A542940073216300FF9C0000CE630000E7E7E700E7E7
      E700E7E7E700CECECE00CECECE00CECECE00CECECE00CECECE00CECECE00CE63
      0000000000000000000000000000000000008494A500B5F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C9400000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000000000000000C69C9400D6948400FFF7E700FFFF
      F700FFFFE700FFFFE700FFFFE700F7EFE700C67BB500D6ADD600D69CD600D68C
      C600D684C600C684C600C67BB50073297300FF9C0000CE630000FFFFFF00FFFF
      FF00FFFFFF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700CE63
      000000000000000000000000000000000000849CA500C6F7FF00B5F7F700B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C9400000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C63000000000000000000D69C9400FFEFB500D69C9400F7F7
      E700FFFFF700FFFFE700FFFFE700FFFFE700FFEFE700C67BB500D6A5D600A54A
      9400B56BB500B563B500B55AA500B54AA500FF9C0000CE630000E7E7E700E7E7
      E700CECECE00CECECE00CE630000CE630000CE630000CE630000CE630000CE63
      0000CE630000CE630000CE630000CE630000849CA500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD600738C9400000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000000000000000D6A59400FFFFE700F7DEB500D6A5
      A500F7F7E700FFFFE700FFFFF700FFF7F700F7EFE700E7C6C600C673B500A542
      9400D6BDB500000000000000000000000000FF9C0000CE630000FFFFFF00FFFF
      FF00E7E7E700CE630000FF9C0000CE630000CE630000CE630000CE630000CE63
      0000CE630000CE630000CE630000CE63000094A5A500C6F7FF00B5F7FF00B5F7
      FF00B5F7F700A5F7FF0094EFFF0094E7FF0084E7FF0073D6FF0063D6F70052C6
      F70052BDF700219CD60063738400000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700E7E7
      E700FFFFFF00CE9C63000000000000000000D6ADA500F7EFC600D69C9400A5F7
      F700D6A59400D6ADA500D6B5A500D6BDB500D6BDB500C6D6E700D6C6C600B56B
      B500D6BDB500000000000000000000000000FF9C0000CE630000E7E7E700CECE
      CE00FF9C0000FF9C0000FF9C0000FF9C0000FF9C0000CE630000CE630000CE63
      0000CE630000CE630000CE6300000000000094A5B500C6F7FF00C6F7FF00C6F7
      FF00C6F7FF00B5F7FF00B5F7FF00A5EFFF0094EFFF0094E7FF0084DEFF0073D6
      FF0073CEF70063BDF70063738400000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFF
      FF00FFFFFF00CE9C63000000000000000000D6ADA500D6B5A500C6FFFF00C6FF
      FF00B5FFFF00B5FFFF00B5F7FF00B5EFFF00A5EFFF00A5EFFF00B5EFFF00D6C6
      C600C6ADA500000000000000000000000000FF9C0000CE630000FFFFFF00FF9C
      0000FF9C6300FF9C6300FF9C0000FF9C0000FF9C0000FF9C0000FF9C0000CE63
      0000CE630000CE630000000000000000000094A5B50094A5B50094A5B50094A5
      B50094A5B50094A5B50094A5A500949CA500849CA500849CA500849CA500849C
      A500849CA5008494A50000000000000000000000000000000000CE9C6300FFFF
      FF00E7E7E700E7E7E700E7E7E700E7E7E700E7E7E700FFFFFF00CE9C6300CE9C
      6300CE9C6300CE9C63000000000000000000D6ADA500A5EFFF00A5EFFF00A5EF
      FF00A5EFFF0094E7FF0094E7FF0084DEF70084D6F70084D6F70084D6F70094D6
      F700BD949400000000000000000000000000FF9C0000CE630000FF9C0000FF9C
      6300FF9C6300FF9C6300FF9C6300FF9C6300FF9C0000FF9C0000FF9C0000FF9C
      0000CE63000000000000000000000000000094ADB500B5EFF700B5F7FF00B5F7
      FF00B5F7F70094E7F70094A5B500000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300E7E7
      E700CE9C630000000000000000000000000000000000BDA59C00E7FFFF00E7FF
      FF00F7FFFF00F7FFFF00E7FFFF00C6FFFF00A5F7FF0084EFFF0084E7FF00B58C
      940000000000000000000000000000000000FF9C0000FF9C0000FF9C6300FF9C
      6300FF9C6300FF9C6300FF9C6300FF9C6300FF9C6300FF9C6300FF9C0000CE63
      0000000000000000000000000000000000000000000094ADB50094ADB50094AD
      B50094ADB50094ADB50000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CE9C6300FFFF
      FF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00FFFFFF00CE9C6300CE9C
      6300000000000000000000000000000000000000000000000000BD9C9C00F7FF
      FF00F7FFFF0000000000F7FFFF00D6FFFF00B5FFFF0094EFFF00B57B84000000
      00000000000000000000000000000000000000000000FF9C00009C9C9C00FFFF
      FF009C9C9C00FFFFFF009C9C9C00FFFFFF009C9C9C00FFFFFF009C9C9C00FFFF
      FF00000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000CE9C6300CE9C
      6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C6300CE9C63000000
      000000000000000000000000000000000000000000000000000000000000C6A5
      9C00F7FFFF00F7FFFF00F7FFFF00E7FFFF00B5FFFF00B57B8400000000000000
      00000000000000000000000000000000000000000000000000009C9C9C00CECE
      CE009C9C9C00CECECE009C9C9C00CECECE009C9C9C00CECECE009C9C9C000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000C6A59C00C6A5A500C6A5A500C69C9400C69C940000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000C00100000100010000000000000E00000000000000000000
      000000000000000000000000FFFFFF00FFFFFFFFFFFF0000F83FFEFFFEFF0000
      F83FFC7FFC7F0000F83FF83FF83F0000F83FF01FF01F0000F83FE00FE00F0000
      F83FC007C0070000C007C007C0070000C007C007C0070000C007F83FF83F0000
      E00FF83FF83F0000F01FF83FF83F0000F83FF83FF83F0000FC7FF83FF83F0000
      FEFFF83FF83F0000FFFFFFFFFFFF0000F00FF00F8001FFFFE007E0070000F83F
      C003C7C331C0F83F80018FE133C0F83F00000FF037C0F83F00001FF037C0F83F
      34481FD037FCF83F14AE1FD037C0C00724AA1BD003FCC0076E4E11400180C007
      000011400180E00F0000114000C0F01F8001814100C0F83FC003C1430080FC7F
      E007E0070000FEFFF00FF00F8001FFFFFFFFFFFFFFFFFFFFF01FF01FFFFFFFFF
      E00FE00FFFFFFFFFC007C007FFFFFFFF80038003E007E00700010001C003C003
      00010001C003C00300010001C003C00300010001C003C00300010001C003C003
      00010001C003C00300010001C003C00380038003E007E007C007C007FFFFFFFF
      E00FE00FFFFFFFFFF01FF01FFFFFFFFFFFFFFFFFFFFFFFFFFFDFFFDF80038003
      FFCFFFCF00010001E007E00700010001FFCFFFCF00010001FFDFFFDF00010001
      FFFFFFFF00010001018001808003800301807D808003800301807D80C007C007
      01807D80C007C00701807D80E00FE00F01806180E00FE00F03816381F01FF01F
      07836783F01FF01F0F870F87FC7FFC7FFFF8FFF8F83FF83F80008000F39FF39F
      8000BFE0F7DFF7DF8001A001F45FF45F8003BC03F55FF55F8007A007F55FF55F
      8007BC07F55FF55F8007A007F55FF55F8007BE07F55FF55F8007A007F55FF55F
      8007BFF7F55FF55F8007A087F55FF55F800FBF8FFDDFFDDF801FBF9FFDDFFDDF
      803F803FFDDFFDDFFFFFFFFFFE3FFE3FFFFFFFFFFFFFFFFFC007C007FFFFFFFF
      80038003F3FFF3FF00010001E1FFE1FF00014001C0FFC0FF00014001807F807F
      00007FF0803F803F000040008C1F8C1F800080009E0F9E0FC000DFE0FF07FF07
      E001E821FF83FF83E007EFF7FFC3FFC3F007F417FFE3FFE3F003F7FBFFF3FFF3
      F803F803FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FC3FFC3FFFFFFFFFFC3FFC3FFFFFFFFFFC3FFC3FFFFFFFFFFC3FFC3FFFFFFFFF
      C003C003C003C003C003C003C003C003C003C003C003C003C003C003C003C003
      FC3FFC3FFFFFFFFFFC3FFC3FFFFFFFFFFC3FFC3FFFFFFFFFFC3FFC3FFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF8FFF8FFF8FFF8FFF07FF07FF07FF07FF
      83FF83FF83FF83FF81FF81FF81FF81FFC0FFC0FFC0FFC0FFE003E003E003E003
      F001F001F001F001F800F800F800F800F800F800F800F800F800F800F800F800
      F800F800F800F800F800F800F800F800F800F800F800F800F800F800F800F800
      FC01FC01FC01FC01FE03FE03FE03FE03FDFFFDFFFFFFFFFFE0FFE8FFC001C001
      801FA05F80018001001F803F80018001001F001F80018001000F000F80018001
      000F000F80018001000F000F8001800100010001800180010101000180018001
      0101000180018001000F000F80018001008F000F8001800100AF002F80018001
      803F803F80018001E1FFE1FFFFFFFFFFFFFFFFFFFFFFFFFFEFFDEFFDBFFFBFFF
      C7FFC7FF9FFF9FFFC3FBC3FBCC3FCC3FE3F7E3F7E01FE01FF1E7F1E7F01FF01F
      F8CFF8CFE01FE01FFC1FFC1FE01FE01FFE3FFE3FE00FE00FFC1FFC1FE001E001
      F8CFF8CFF000F000E1E7E1E7FF00FF00C3F3C3F3FF80FF80C7FDC7FDFF80FF80
      FFFFFFFFFF81FF81FFFFFFFFFFC3FFC3FFFF801FFFFFFFFFC001000FC003C003
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
      FC00FFFFFFFFFFF0FE00FFFFFFFFFFF8FFFFFFFFFFFFFFFFC007C003C0031FFF
      C007C003C0030FFFC007C003C00383FFC007C003C00381FFC007C003C003C0FF
      C007C003C003C03FC007C003C003E01FC007C003C003E007C007C003C003F003
      C007C003C003F001C007C003C003F800C00FC007C007F800C01FC00FC00FFC00
      C03FC01FC01FFC00FFFFFFFFFFFFFE00FFFFFFFFFFFFFFFFC007FFFFFFFFFFFF
      80038000C001C007800300008000800380030000000000018003000000000001
      8003000000000000800300000000000080030000000000008003000000000000
      800300000001000180030000000300038003000000070007C007000781FF81FF
      FC7FFFFFC3FFC3FFFFFFFFFFFFFFFFFFFF24FF248000FFFFFF24FF2400000000
      FE7FFE7F00000000FC3FFC3F00000000FC1FFC1F00000000FC0FFC0F00000000
      F807F80700000000F803F80300000000F003F00300000000E007E00700000000
      C03FC03F0000000080FF80FF0000000000FF00FF0000000001FF01FF00000000
      87FF87FF00000001CFFFCFFF0000AAABFFFFFFFFFFFFC3F1FFFFC007C007E1F3
      F0FF80038003F0E3E0FF00010001FC47C0FF00014001C20F830100014001831F
      870100007FF0811F8F8100004000804F878180008000C0E78201C000DFE0C1F3
      C001E001E82180FBE039E007EFF780FDF07FF007F41780FFFFFFF003F7FB80FF
      FFFFF803F80380FFFFFFFFFFFFFFC1FFFE07FFCFFF83FFFFFE01FC077F03FFFF
      8001FC031F00F0FF8003FC010F00E0FF8007C0038381C0FF8003800781838301
      8003804FC00187018003805FC0018F818003C0FFC00187818003C1FFE0018201
      800780FFE001C001800780FFF001E039800780FFF001F07F800F80FFF801FFFF
      801F80FFF801FFFF803FC1FFFC01FFFFFFFFFFFFFDFFFDFFFFF7EFFFE0FFE8FF
      FFF3CFFF801FA05FFF0180FF001F803FFF0000FF001F001FFF0000FF000F000F
      F000000F000F000F80018001000F000F0003C000000100018703C0E101010001
      0387E1C00101000187FFFFE1000F000F03FFFFC0008F000F87FFFFE100AF002F
      03FFFFC0803F803F87FFFFE1E1FFE1FFFFFFFFFFFFFFFFFFFC3FFE0FFFFFC001
      8007FC0F800000018003FC03800000018007C003800000018003800700000001
      8007800F0000000180038007000000018007C007000000018003C00700000001
      800780070000000F800780070001000F8007800F0001000F800F80FF0001001F
      801F80FFFFFF003F803FC1FFFFFF007FFE0FFE1FFFFFFFFFFC07FC03C003C003
      F803C001C003DFFBF00181C3C003D00BE000C381C003DFFBC000FFC3C003D00B
      8000FF81C003DFFB00000000C003D00B00000000C003DFFB00000000C003D00B
      00000000C003DFFB00030000C003D043000F0000C007DFD7803F0000C00FDFCF
      E07F0000C01FC01FF9FF0000FFFFFFFFFFFFFFBFFF07FF1FC003FE1F0001FE0F
      DFFBFE0F0000FC07D00BF8070000FC03DFFBF0010000E001D00BC0000001C000
      DFFB800000038000D00B800000070000DFFB0000000F0000D00B0000000F0000
      DFFB0000000F0001D0430001800F0003DFD7000FE00F801FDFCF803FE00FC03F
      C01FE07FF00FF07FFFFFF1FFFFFFFDFFFFFFFFFFFFFFFFFFE000E000FFBFC003
      E000E000FF3F8001E000E000FE1F800100000000800F00010000000000470001
      0000000000E300010000000000F180010000000081F880030000000183FC800F
      0001000101FF800F0003000101FFC0070007000101FFE007840F000301FFE007
      C01F01FF01FFF81FE03F83FF83FFFFFFE000FFFFFFFFFFFFE000E000FFFFC001
      E000E000FFFFC001E000E000E0000001E0000800E000000100000800C0000001
      00000C008000000100000E000000000100010F000000000100010FC000000001
      000700002000000100070001E000000100070001FF070003000F0001FF8701CF
      001F00FFFFC783FF007F01FFFFE7FFFFEFF7FFFFF8FFFFFFC800E000F03FFFEF
      C000E000E00FFFE7C000E000E003FE03E0000000C0010001F0000000C0010000
      F11F000080010001F83F000080010003F83F000000030007001F000000030007
      001F000080070007001F0001E0070007000F0001F80F800F000F0001FE0FC41F
      C7EF00FFFF9FE03FEFF701FFFFFFF07FFFFFFFFFFE03F800FF01EFFDFC03F800
      FF01C7FFFD01F800FF01C3FBF801F800C001E3F70001F800BB01F1E70001F800
      8001F8CF0001FF7FBB01FC1F0000FF7F8001FE3F0200FEFFBB01FC1F0100FEFF
      8001F8CF0000001FBBABE1E70000001F8003C3F30001001F8003C7FD0003001F
      8003FFFF01FF001F8003FFFF83FF001FFFBFFC01FFFFFFFFFC1FF800FFEFFFFF
      F81FF000FFCFFE01E00FF000FF80FC00800FE0000000F8008007C0000000F000
      B00180000000E000800100000000C00080010000000780000081000100070001
      004000030007000100200007000700032000000F800F00070001000FC41F000F
      8101001FE03F001FFF81803FF07F803F801FFFFFFFFFFFFF000FFFFFC003FFEF
      000F8003C003FFCF000F0001C003FF80000F0001C0030000000F0001C0030000
      000F0001C0030000000F0001C003000000000001C003000700000001C0030007
      00010001C003000700030003C0030007000701FFC007800F000F83FFC00FC41F
      800FFFFFC01FE03FC01FFFFFFFFFF07F00000000000000000000000000000000
      000000000000}
  end
end
