object Form2: TForm2
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Add Your Product'
  ClientHeight = 444
  ClientWidth = 709
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnShow = FormShow
  TextHeight = 15
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 690
    Height = 117
    Caption = 'Add Products'
    TabOrder = 0
    object Label1: TLabel
      Left = 16
      Top = 40
      Width = 11
      Height = 15
      Caption = 'ID'
    end
    object Label2: TLabel
      Left = 96
      Top = 40
      Width = 60
      Height = 15
      Caption = 'Description'
    end
    object Label3: TLabel
      Left = 312
      Top = 40
      Width = 55
      Height = 15
      Caption = 'Trademark'
    end
    object Label4: TLabel
      Left = 516
      Top = 40
      Width = 26
      Height = 15
      Caption = 'Price'
    end
    object edID: TEdit
      Left = 33
      Top = 37
      Width = 57
      Height = 23
      NumbersOnly = True
      TabOrder = 0
    end
    object edDesc: TEdit
      Left = 162
      Top = 37
      Width = 121
      Height = 23
      TabOrder = 1
    end
    object edTrade: TEdit
      Left = 373
      Top = 37
      Width = 121
      Height = 23
      TabOrder = 2
    end
    object edPrice: TEdit
      Left = 548
      Top = 37
      Width = 121
      Height = 23
      TabOrder = 3
    end
    object btnSave: TButton
      Left = 594
      Top = 72
      Width = 75
      Height = 25
      Caption = 'Save'
      TabOrder = 4
      OnClick = btnSaveClick
    end
  end
  object GroupBox2: TGroupBox
    Left = 8
    Top = 157
    Width = 690
    Height = 276
    Caption = 'Search Products'
    TabOrder = 1
    object Label5: TLabel
      Left = 460
      Top = 44
      Width = 63
      Height = 15
      Caption = 'Search Here'
    end
    object Search: TSearchBox
      Left = 529
      Top = 40
      Width = 140
      Height = 23
      TabOrder = 0
      TextHint = 'Search products'
      OnChange = SearchChange
    end
    object DBGrid1: TDBGrid
      Left = 12
      Top = 69
      Width = 657
      Height = 161
      DataSource = DataSource1
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -12
      TitleFont.Name = 'Segoe UI'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'ID'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'DESCRIPTION'
          Title.Caption = 'Description'
          Width = 215
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'TRADEMARK'
          Title.Caption = 'Trademark'
          Width = 183
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'PRICE'
          Title.Caption = 'Price'
          Width = 135
          Visible = True
        end>
    end
    object DBNavigator1: TDBNavigator
      Left = 429
      Top = 236
      Width = 240
      Height = 25
      DataSource = DataSource1
      VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbDelete]
      TabOrder = 2
      OnClick = DBNavigator1Click
    end
  end
  object DataSource1: TDataSource
    DataSet = dmConexao.query
    Left = 640
    Top = 144
  end
end
