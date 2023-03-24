/*************************************************************
 ******                 Environmental page              ******
 ************************************************************/
const char* _SENSUS_191_1_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff55\",\"&\",\"manufacturerdata\",\"index\",50,\"01\"],\"properties\":{\"tempc\":{\"condition\":[\"manufacturerdata\",6,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,true],\"post_proc\":[\"/\",10]},\"pres\":{\"condition\":[\"manufacturerdata\",10,\"!\",\"ffffffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,8,true,false],\"post_proc\":[\"/\",100]},\"hum\":{\"condition\":[\"manufacturerdata\",18,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false],\"post_proc\":[\"/\",10]},\"tempc2_dp\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,true],\"post_proc\":[\"/\",10]},\"tempc3_hi\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,true],\"post_proc\":[\"/\",10]},\"pres_abs\":{\"condition\":[\"manufacturerdata\",30,\"!\",\"ffffffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,8,true,false],\"post_proc\":[\"/\",100]},\"forecast\":{\"condition\":[\"manufacturerdata\",38,\"!\",\"ff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,2,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff55", "&", "manufacturerdata", "index", 50, "01"],
   "properties":{
      "tempc":{
         "condition":["manufacturerdata", 6, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, true],
         "post_proc":["/", 10]
      },
      "pres":{
         "condition":["manufacturerdata", 10, "!", "ffffffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 8, true, false],
         "post_proc":["/", 100]
      },
      "hum":{
         "condition":["manufacturerdata", 18, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false],
         "post_proc":["/", 10]
      },
      "tempc2_dp":{
         "condition":["manufacturerdata", 22, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, true],
         "post_proc":["/", 10]
      },
      "tempc3_hi":{
         "condition":["manufacturerdata", 26, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, true],
         "post_proc":["/", 10]
      },
      "pres_abs":{
         "condition":["manufacturerdata", 30, "!", "ffffffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 8, true, false],
         "post_proc":["/", 100]
      },
      "forecast":{
         "condition":["manufacturerdata", 38, "!", "ff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 2, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_1_json_props = "{\"properties\":{\"tempc\":{\"unit\":\"°C\",\"name\":\"temperature\"},\"pres\":{\"unit\":\"hPa\",\"name\":\"pressure_abs\"},\"hum\":{\"unit\":\"%\",\"name\":\"humidity\"},\"tempc2_dp\":{\"unit\":\"°C\",\"name\":\"temperature_dp\"},\"tempc3_hi\":{\"unit\":\"°C\",\"name\":\"temperature_hi\"},\"pres_abs\":{\"unit\":\"hPa\",\"name\":\"pressure\"},\"forecast\":{\"unit\":\"\",\"name\":\"weather_forecast\"}}}";
/*R""""(
{
   "properties":{
      "tempc":{
         "unit":"°C",
         "name":"temperature"
      },
      "pres":{
         "unit":"hPa",
         "name":"pressure_abs"
      },
      "hum":{
         "unit":"%",
         "name":"humidity"
      },
      "tempc2_dp":{
         "unit":"°C",
         "name":"temperature_dp"
      },
      "tempc3_hi":{
         "unit":"°C",
         "name":"temperature_hi"
      },
      "pres_abs":{
         "unit":"hPa",
         "name":"pressure"
      },
      "forecast":{
         "unit":"",
         "name":"weather_forecast"
      }
   }
})"""";*/

/*************************************************************
 ******        Air Quality page: Instant values         ******
 ************************************************************/
const char* _SENSUS_191_2_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff55\",\"&\",\"manufacturerdata\",\"index\",50,\"02\"],\"properties\":{\"tvoc\":{\"condition\":[\"manufacturerdata\",6,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,false]},\"co2\":{\"condition\":[\"manufacturerdata\",10,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,true,false]},\"co\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"no2\":{\"condition\":[\"manufacturerdata\",18,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false]},\"nh3\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,false]},\"ch2o\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,false]},\"o3\":{\"condition\":[\"manufacturerdata\",30,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,true,false]},\"so2\":{\"condition\":[\"manufacturerdata\",34,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,4,true,false]},\"c6h6\":{\"condition\":[\"manufacturerdata\",38,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,4,true,false]},\"gases_aqi\":{\"condition\":[\"manufacturerdata\",48,\"!\",\"ff\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",48,2,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff55", "&", "manufacturerdata", "index", 50, "02"],
   "properties":{
      "tvoc":{
         "condition":["manufacturerdata", 6, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, false]
      },
      "co2":{
         "condition":["manufacturerdata", 10, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false]
      },
      "co":{
         "condition":["manufacturerdata", 14, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "no2":{
         "condition":["manufacturerdata", 18, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false]
      },
      "nh3":{
         "condition":["manufacturerdata", 22, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, false]
      },
      "ch2o":{
         "condition":["manufacturerdata", 26, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, false]
      },
      "o3":{
         "condition":["manufacturerdata", 30, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, true, false]
      },
      "so2":{
         "condition":["manufacturerdata", 34, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 4, true, false]
      },
      "c6h6":{
         "condition":["manufacturerdata", 38, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 4, true, false]
      },
      "gases_aqi":{
         "condition":["manufacturerdata", 48, "!", "ff"],
         "decoder":["string_from_hex_data, "manufacturerdata", 48, 2, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_2_json_props = "{\"properties\":{\"tvoc\":{\"unit\":\"ppb\",\"name\":\"volatile_organic_compounds\"},\"co2\":{\"unit\":\"ppm\",\"name\":\"carbon_dioxide\"},\"co\":{\"unit\":\"mg/m³\",\"name\":\"carbon_monoxide\"},\"no2\":{\"unit\":\"µg/m³\",\"name\":\"nitrogen_dioxide\"},\"nh3\":{\"unit\":\"µg/m³\",\"name\":\"ammonia\"},\"ch2o\":{\"unit\":\"µg/m³\",\"name\":\"formaldehyde\"},\"o3\":{\"unit\":\"µg/m³\",\"name\":\"ozone\"},\"so2\":{\"unit\":\"µg/m³\",\"name\":\"sulphur_dioxide\"},\"c6h6\":{\"unit\":\"µg/m³\",\"name\":\"benzene\"},\"gases_aqi\":{\"unit\":\"\",\"name\":\"aqi\"}}}";
/*R""""(
{
   "properties":{
      "tvoc":{
         "unit":"ppb",
         "name":"volatile_organic_compounds"
      },
      "co2":{
         "unit":"ppm",
         "name":"carbon_dioxide"
      },
      "co":{
         "unit":"mg/m³",
         "name":"carbon_monoxide"
      },
      "no2":{
         "unit":"µg/m³",
         "name":"nitrogen_dioxide"
      },
      "nh3":{
         "unit":"µg/m³",
         "name":"ammonia"
      },
      "ch2o":{
         "unit":"µg/m³",
         "name":"formaldehyde"
      },
      "o3":{
         "unit":"µg/m³",
         "name":"ozone"
      },
      "so2":{
         "unit":"µg/m³",
         "name":"sulphur_dioxide"
      },
      "c6h6":{
         "unit":"µg/m³",
         "name":"benzene"
      },
      "gases_aqi":{
         "unit":"",
         "name":"aqi"
      }
   }
})"""";*/

/*************************************************************
 ******        Air Quality page: Average values         ******
 ************************************************************/
const char* _SENSUS_191_3_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff55\",\"&\",\"manufacturerdata\",\"index\",50,\"03\"],\"properties\":{\"tvoc_1h_avg\":{\"condition\":[\"manufacturerdata\",6,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,false]},\"co2_8h_avg\":{\"condition\":[\"manufacturerdata\",10,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,true,false]},\"co_8h_avg\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"no2_1h_avg\":{\"condition\":[\"manufacturerdata\",18,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false]},\"nh3_8h_avg\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,false]},\"ch2o_8h_avg\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,false]},\"o3_8h_avg\":{\"condition\":[\"manufacturerdata\",30,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,true,false]},\"so2_1h_avg\":{\"condition\":[\"manufacturerdata\",34,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,4,true,false]},\"c6h6_24h_avg\":{\"condition\":[\"manufacturerdata\",38,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,4,true,false]},\"gases_t_avg_aqi\":{\"condition\":[\"manufacturerdata\",46,\"!\",\"ff\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",46,2,true,false]},\"gases_avg_aqi\":{\"condition\":[\"manufacturerdata\",48,\"!\",\"ff\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",48,2,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff55", "&", "manufacturerdata", "index", 50, "03"],
   "properties":{
      "tvoc_1h_avg":{
         "condition":["manufacturerdata", 6, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, false]
      },
      "co2_8h_avg":{
         "condition":["manufacturerdata", 10, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false]
      },
      "co_8h_avg":{
         "condition":["manufacturerdata", 14, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "no2_1h_avg":{
         "condition":["manufacturerdata", 18, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false]
      },
      "nh3_8h_avg":{
         "condition":["manufacturerdata", 22, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, false]
      },
      "ch2o_8h_avg":{
         "condition":["manufacturerdata", 26, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, false]
      },
      "o3_8h_avg":{
         "condition":["manufacturerdata", 30, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, true, false]
      },
      "so2_1h_avg":{
         "condition":["manufacturerdata", 34, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 4, true, false]
      },
      "c6h6_24h_avg":{
         "condition":["manufacturerdata", 38, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 4, true, false]
      },
      "gases_t_avg_aqi":{
         "condition":["manufacturerdata", 46, "!", "ff"],
         "decoder":["string_from_hex_data", "manufacturerdata", 46, 2, true, false]
      },
      "gases_avg_aqi":{
         "condition":["manufacturerdata", 48, "!", "ff"],
         "decoder":["string_from_hex_data", "manufacturerdata", 48, 2, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_3_json_props = "{\"properties\":{\"tvoc_1h_avg\":{\"unit\":\"ppb\",\"name\":\"volatile_organic_compounds_avg\"},\"co2_8h_avg\":{\"unit\":\"ppm\",\"name\":\"carbon_dioxide_avg\"},\"co_8h_avg\":{\"unit\":\"mg/m³\",\"name\":\"carbon_monoxide_avg\"},\"no2_1h_avg\":{\"unit\":\"µg/m³\",\"name\":\"nitrogen_dioxide_avg\"},\"nh3_8h_avg\":{\"unit\":\"µg/m³\",\"name\":\"ammonia_avg\"},\"ch2o_8h_avg\":{\"unit\":\"µg/m³\",\"name\":\"formaldehyde_avg\"},\"o3_8h_avg\":{\"unit\":\"µg/m³\",\"name\":\"ozone_avg\"},\"so2_1h_avg\":{\"unit\":\"µg/m³\",\"name\":\"sulphur_dioxide_avg\"},\"c6h6_24h_avg\":{\"unit\":\"µg/m³\",\"name\":\"benzene_avg\"},\"gases_t_avg_aqi\":{\"unit\":\"\",\"name\":\"aqi_gas_t_avg\"},\"gases_avg_aqi\":{\"unit\":\"\",\"name\":\"aqi_gas_avg\"}}}";
/*R""""(
{
   "properties":{
      "tvoc_1h_avg":{
         "unit":"ppb",
         "name":"volatile_organic_compounds_avg"
      },
      "co2_8h_avg":{
         "unit":"ppm",
         "name":"carbon_dioxide_avg"
      },
      "co_8h_avg":{
         "unit":"mg/m³",
         "name":"carbon_monoxide_avg"
      },
      "no2_1h_avg":{
         "unit":"µg/m³",
         "name":"nitrogen_dioxide_avg"
      },
      "nh3_8h_avg":{
         "unit":"µg/m³",
         "name":"ammonia_avg"
      },
      "ch2o_8h_avg":{
         "unit":"µg/m³",
         "name":"formaldehyde_avg"
      },
      "o3_8h_avg":{
         "unit":"µg/m³",
         "name":"ozone_avg"
      },
      "so2_1h_avg":{
         "unit":"µg/m³",
         "name":"sulphur_dioxide_avg"
      },
      "c6h6_24h_avg":{
         "unit":"µg/m³",
         "name":"benzene_avg"
      },
      "gases_t_avg_aqi":{
         "unit":"",
         "name":"aqi_gas_t_avg"
      },
      "gases_avg_aqi":{
         "unit":"",
         "name":"aqi_gas_avg"
      }
   }
})"""";*/

/*************************************************************
 ******  Air Pollution page: Instant and Average values ******
 ************************************************************/
const char* _SENSUS_191_4_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff55\",\"&\",\"manufacturerdata\",\"index\",50,\"04\"],\"properties\":{\"pm1_0\":{\"condition\":[\"manufacturerdata\",6,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,false]},\"pm2_5\":{\"condition\":[\"manufacturerdata\",10,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,true,false]},\"pm4_0\":{\"condition\":[\"manufacturerdata\",14,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"pm10\":{\"condition\":[\"manufacturerdata\",18,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false]},\"np_05\":{\"condition\":[\"manufacturerdata\",22,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,false]},\"pm1_0_24h_avg\":{\"condition\":[\"manufacturerdata\",26,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,false]},\"pm2_5_24h_avg\":{\"condition\":[\"manufacturerdata\",30,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,true,false]},\"pm4_0_24h_avg\":{\"condition\":[\"manufacturerdata\",34,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,4,true,false]},\"pm10_24h_avg\":{\"condition\":[\"manufacturerdata\",38,\"!\",\"ffff\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,4,true,false]},\"pmx_t_avg_aqi\":{\"condition\":[\"manufacturerdata\",44,\"!\",\"ff\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",44,2,true,false]},\"pmx_aqi\":{\"condition\":[\"manufacturerdata\",46,\"!\",\"ff\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",46,2,true,false]},\"avg_pmx_aqi\":{\"condition\":[\"manufacturerdata\",48,\"!\",\"ff\"],\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",48,2,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff55", "&", "manufacturerdata", "index", 50, "04"],
   "properties":{
      "pm1_0":{
         "condition":["manufacturerdata", 6, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, false]
      },
      "pm2_5":{
         "condition":["manufacturerdata", 10, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false]
      },
      "pm4_0":{
         "condition":["manufacturerdata", 14, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "pm10":{
         "condition":["manufacturerdata", 18, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false]
      },
      "np_05":{
         "condition":["manufacturerdata", 22, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, false]
      },
      "pm1_0_24h_avg":{
         "condition":["manufacturerdata", 26, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, false]
      },
      "pm2_5_24h_avg":{
         "condition":["manufacturerdata", 30, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, true, false]
      },
      "pm4_0_24h_avg":{
         "condition":["manufacturerdata", 34, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 4, true, false]
      },
      "pm10_24h_avg":{
         "condition":["manufacturerdata", 38, "!", "ffff"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 4, true, false]
      },
      "pmx_t_avg_aqi":{
         "condition":["manufacturerdata", 44, "!", "ff"],
         "decoder":["string_from_hex_data", "manufacturerdata", 44, 2, true, false]
      },
      "pmx_aqi":{
         "condition":["manufacturerdata", 46, "!", "ff"],
         "decoder":["string_from_hex_data", "manufacturerdata", 46, 2, true, false]
      },
      "avg_pmx_aqi":{
         "condition":["manufacturerdata", 48, "!", "ff"],
         "decoder":["string_from_hex_data", "manufacturerdata", 48, 2, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_4_json_props = "{\"properties\":{\"pm1_0\":{\"unit\":\"µg/m³\",\"name\":\"pm1\"},\"pm2_5\":{\"unit\":\"µg/m³\",\"name\":\"pm25\"},\"pm4_0\":{\"unit\":\"µg/m³\",\"name\":\"pm40\"},\"pm10\":{\"unit\":\"µg/m³\",\"name\":\"pm10\"},\"np_05\":{\"unit\":\"\",\"name\":\"pm05\"},\"pm1_0_24h_avg\":{\"unit\":\"µg/m³\",\"name\":\"pm1_avg\"},\"pm2_5_24h_avg\":{\"unit\":\"µg/m³\",\"name\":\"pm25_avg\"},\"pm4_0_24h_avg\":{\"unit\":\"µg/m³\",\"name\":\"pm40_avg\"},\"pm10_24h_avg\":{\"unit\":\"µg/m³\",\"name\":\"pm10_avg\"},\"pmx_t_avg_aqi\":{\"unit\":\"\",\"name\":\"aqi_pmx_t_avg\"},\"pmx_aqi\":{\"unit\":\"\",\"name\":\"aqi_pmx\"},\"avg_pmx_aqi\":{\"unit\":\"\",\"name\":\"aqi_pmx_avg\"}}}";
/*R""""(
{
   "properties":{
      "pm1_0":{
         "unit":"µg/m³",
         "name":"pm1"
      },
      "pm2_5":{
         "unit":"µg/m³",
         "name":"pm25"
      },
      "pm4_0":{
         "unit":"µg/m³",
         "name":"pm40"
      },
      "pm10":{
         "unit":"µg/m³",
         "name":"pm10"
      },
      "np_05":{
         "unit":"",
         "name":"pm05"
      },
      "pm1_0_24h_avg":{
         "unit":"µg/m³",
         "name":"pm1_avg"
      },
      "pm2_5_24h_avg":{
         "unit":"µg/m³",
         "name":"pm25_avg"
      },
      "pm4_0_24h_avg":{
         "unit":"µg/m³",
         "name":"pm40_avg"
      },
      "pm10_24h_avg":{
         "unit":"µg/m³",
         "name":"pm10_avg"
      },
      "pmx_t_avg_aqi":{
         "unit":"",
         "name":"aqi_pmx_t_avg"
      },
      "pmx_aqi":{
         "unit":"",
         "name":"aqi_pmx"
      },
      "avg_pmx_aqi":{
         "unit":"",
         "name":"aqi_pmx_avg"
      }
   }
})"""";*/

/*************************************************************
 ******               Status Report page                ******
 ************************************************************/
const char* _SENSUS_191_5_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff55\",\"&\",\"manufacturerdata\",\"index\",50,\"80\"],\"properties\":{\"sensor_status_reg\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",6,8,true,false]},\"local_time\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",14,8,true,false]},\"sys_status_reg\":{\"decoder\":[\"string_from_hex_data\",\"manufacturerdata\",22,8,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff55", "&", "manufacturerdata", "index", 50, "80"],
   "properties":{
      "sensor_status_reg":{
         "decoder":["string_from_hex_data", "manufacturerdata", 6, 8, true, false]
      },
      "local_time":{
         "decoder":["string_from_hex_data", "manufacturerdata", 14, 8, true, false]
      },
      "sys_status_reg":{
         "decoder":["string_from_hex_data", "manufacturerdata", 22, 8, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_5_json_props = "{\"properties\":{\"sensor_status_reg\":{\"unit\":\"\",\"name\":\"status_reg\"},\"local_time\":{\"unit\":\"\",\"name\":\"local_time\"},\"sys_status_reg\":{\"unit\":\"\",\"name\":\"sys_reg\"}}}";
/*R""""(
{
   "properties":{
      "sensor_status_reg":{
         "unit":"",
         "name":"status_reg"
      },
      "local_time":{
         "unit":"",
         "name":"local_time"
      },
      "sys_status_reg":{
         "unit":"",
         "name":"sys_reg"
      }
   }
})"""";*/
