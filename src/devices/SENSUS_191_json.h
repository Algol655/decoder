const char* _SENSUS_191_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"SENSUS_191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"index\",0,\"ffff\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,true],\"post_proc\":[\"/\",10]},\"p0_out\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,8,true,true],\"post_proc\":[\"/\",100]},\"hum_out\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,true],\"post_proc\":[\"/\",10]},\"tempc3\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,true],\"post_proc\":[\"/\",10]},\"p_out\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,8,true,true],\"post_proc\":[\"/\",100]},\"forecast\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,2,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"SENSUS_191",
   "cidc":false,
   "condition":["manufacturerdata", "index", 0, "ffff"],
   "properties":{
      "tempc":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, true],
         "post_proc":["/", 10]
      },
      "p0_out":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 8, true, true],
         "post_proc":["/", 100]
      },
      "hum_out":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc2":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, true],
         "post_proc":["/", 10]
      },
      "tempc3":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, true],
         "post_proc":["/", 10]
      },
      "p_out":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 8, true, true],
         "post_proc":["/", 100]
      },
      "forecast":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 2, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"p0_out\":{\"unit\":\"mBar\",\"name\":\"SeaLevelPressure\"},\"hum_out\":{\"unit\":\"%\",\"name\":\"humidity\"},\"tempc2\":{\"unit\":\"°C\",\"name\":\"DewPoint\"},\"tempc3\":{\"unit\":\"°C\",\"name\":\"HeatIndex\"},\"p_out\":{\"unit\":\"mBar\",\"name\":\"AbsolutePressure\"},\"forecast\":{\"unit\":\"\",\"name\":\"WeatherForecast\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "p0_out":{
         "unit":"mBar",
         "name":"Sea Level Pressure"
      },
      "hum_out":{
         "unit":"%",
         "name":"humidity"
      },
      "tempc2":{
         "unit":"°C",
         "name":"Dew Point"
      },
      "tempc3":{
         "unit":"°C",
         "name":"Heat Index"
      },
      "p_out":{
         "unit":"mBar",
         "name":"Absolute Pressure"
      },
      "forecast":{
         "unit":"",
         "name":" Weather Forecast"
      }
   }
})"""";*/
