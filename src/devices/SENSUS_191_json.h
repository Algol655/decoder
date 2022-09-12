const char* _SENSUS_191_json = "{\"brand\":\"ALGOL\",\"model\":\"PersonalEnvironmentalMonitoringStation\",\"model_id\":\"SENSUS_191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"index\",0,\"ffff\"],\"properties\":{\"t_out\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",3,2,true,true],\"post_proc\":[\"/\",10]},\"p0_out\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",5,4,true,true],\"post_proc\":[\"/\",100]},\"hum_out\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",9,2,true,false],\"post_proc\":[\"/\",10]},\"t2_out\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",11,2,true,true],\"post_proc\":[\"/\",10]},\"t3_out\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",13,2,true,true],\"post_proc\":[\"/\",10]},\"p_out\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",15,4,true,true],\"post_proc\":[\"/\",100]},\"forecast\":{\"condition\":[\"manufacturerdata\",25,\"01\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",19,1,true,false],}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"Personal Environmental Monitoring Station",
   "model_id":"SENSUS_191",
   "cidc":false,
   "condition":["manufacturerdata", "index", 0, "ffff"],
   "properties":{
      "t_out":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 3, 2, true, true],
         "post_proc":["/", 10]
      },
      "p0_out":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 5, 4, true, true],
         "post_proc":["/", 100]
      },
      "hum_out":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 9, 2, true, false],
         "post_proc":["/", 10]
      },
      "t2_out":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 11, 2, true, true],
         "post_proc":["/", 10]
      },
      "t3_out":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 13, 2, true, true],
         "post_proc":["/", 10]
      },
      "p_out":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 15, 4, true, true],
         "post_proc":["/", 100]
      },
      "forecast":{
         "condition":["manufacturerdata", 25, "01"],
         "decoder":["value_from_hex_data", "manufacturerdata", 19, 1, true, false],
      }
   }
})""""*/

const char* _SENSUS_191_json_props = "{\"properties\":{\"t_out\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"p0_out\":{\"unit\":\"mBar\",\"name\":\"SeaLevelPressure\"},\"hum_out\":{\"unit\":\"%\",\"name\":\"humidity\"},\"t2_out\":{\"unit\":\"°C\",\"name\":\"DewPoint\"},\"t3_out\":{\"unit\":\"°C\",\"name\":\"HeatIndex\"},\"p_out\":{\"unit\":\"mBar\",\"name\":\"AbsolutePressure\"},\"forecast\":{\"unit\":\"\",\"name\":\"WeatherForecast\"}}}";
/*R""""(
{
   "properties":{
      "t_out":{
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
      "t2_out":{
         "unit":"°C",
         "name":"Dew Point"
      },
      "t3_out":{
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
