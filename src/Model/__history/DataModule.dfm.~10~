object dmConexao: TdmConexao
  Height = 134
  Width = 389
  object Connection: TFDConnection
    Params.Strings = (
      'Database=C:\Joao\Projetos\C++\ConnectDB\src\DB\DB.fdb'
      'Port=3050'
      'Server=localhost'
      'Password=masterkey'
      'User_Name=sysdba'
      'DriverID=FB')
    ResourceOptions.AssignedValues = [rvAutoReconnect]
    ResourceOptions.AutoReconnect = True
    LoginPrompt = False
    Left = 72
    Top = 32
  end
  object query: TFDQuery
    Connection = Connection
    SQL.Strings = (
      'SELECT'
      '  ID,'
      '  DESCRIPTION,'
      '  TRADEMARK,'
      '  PRICE'
      'FROM PRODUCTS'
      '')
    Left = 160
    Top = 32
  end
  object Commands: TFDCommand
    Connection = Connection
    CommandText.Strings = (
      'INSERT INTO PRODUCTS (ID,DESCRIPTION,TRADEMARK,PRICE)'
      'VALUES(:ID,:DESCRIPTION,:TRADEMARK,:PRICE)')
    ParamData = <
      item
        Name = 'ID'
        ParamType = ptInput
      end
      item
        Name = 'DESCRIPTION'
        ParamType = ptInput
      end
      item
        Name = 'TRADEMARK'
        ParamType = ptInput
      end
      item
        Name = 'PRICE'
        ParamType = ptInput
      end>
    Left = 240
    Top = 34
  end
end
