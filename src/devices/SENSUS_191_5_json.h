const char* _SENSUS_191_5_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff\",\"&\",\"manufacturerdata\",\"index\",50,\"80\"],\"properties\":{\"sensor_status_reg\":{\"condition\":[\"manufacturerdata\",50,\"80\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",6,8,true,false]},\"anlg_ovfl_status_reg\":{\"condition\":[\"manufacturerdata\",50,\"80\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",14,8,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff", "&", "manufacturerdata", "index", 50, "80"],
   "properties":{
      "sensor_status_reg":{
         "condition":["manufacturerdata", 50, "80"],
         "decoder":["string_from_hex_data", "manufacturerdata", 6, 8, true, false]
      },
      "anlg_ovfl_status_reg":{
         "condition":["manufacturerdata", 50, "80"],
         "decoder":["string_from_hex_data", "manufacturerdata", 14, 8, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_5_json_props = "{\"properties\":{\"sensor_status_reg\":{\"unit\":\"\",\"name\":\"Status Register\"},\"anlg_ovfl_status_reg\":{\"unit\":\"\",\"name\":Analog Inputs Overflow Status\"}}}";
/*R""""(
{
   "properties":{
      "sensor_status_reg":{
         "unit":"",
         "name":"Status Register"
      },
      "anlg_ovfl_status_reg":{
         "unit":"",
         "name":Analog Inputs Overflow Status"
      }
   }
})"""";*/
