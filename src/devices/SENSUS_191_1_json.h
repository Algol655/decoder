const char* _SENSUS_191_1_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff\",\"&\",\"manufacturerdata\",\"index\",50,\"01\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",50,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,true],\"post_proc\":[\"/\",10]},\"pres\":{\"condition\":[\"manufacturerdata\",50,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,8,true,true],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"manufacturerdata\",50,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2_dp\":{\"condition\":[\"manufacturerdata\",50,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,true],\"post_proc\":[\"/\",10]},\"tempc3_hi\":{\"condition\":[\"manufacturerdata\",50,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,true],\"post_proc\":[\"/\",10]},\"pres_abs\":{\"condition\":[\"manufacturerdata\",50,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,8,true,true],\"post_proc\":[\"/\",100]},\"forecast\":{\"condition\":[\"manufacturerdata\",50,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,2,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff", "&", "manufacturerdata", "index", 50, "01"],
   "properties":{
      "tempc":{
         "condition":["manufacturerdata", 50, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, true],
         "post_proc":["/", 10]
      },
      "pres":{
         "condition":["manufacturerdata", 50, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 8, true, true],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["manufacturerdata", 50, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc2_dp":{
         "condition":["manufacturerdata", 50, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, true],
         "post_proc":["/", 10]
      },
      "tempc3_hi":{
         "condition":["manufacturerdata", 50, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, true],
         "post_proc":["/", 10]
      },
      "pres_abs":{
         "condition":["manufacturerdata", 50, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 8, true, true],
         "post_proc":["/", 100]
      },
      "forecast":{
         "condition":["manufacturerdata", 50, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 2, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_1_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"Sea Level Pressure\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"tempc2_dp\":{\"unit\":\"°C\",\"name\":\"Dew Point\"},\"tempc3_hi\":{\"unit\":\"°C\",\"name\":\"Heat Index\"},\"pres_abs\":{\"unit\":\"hPa\",\"name\":\"Absolute Pressure\"},\"forecast\":{\"unit\":\"\",\"name\":\"Weather Forecast\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "pres":{
         "unit":"hPa",
         "name":"Sea Level Pressure"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "tempc2_dp":{
         "unit":"°C",
         "name":"Dew Point"
      },
      "tempc3_hi":{
         "unit":"°C",
         "name":"Heat Index"
      },
      "pres_abs":{
         "unit":"hPa",
         "name":"Absolute Pressure"
      },
      "forecast":{
         "unit":"",
         "name":"Weather Forecast"
      }
   }
})"""";*/
