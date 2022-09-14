/*************************************************************
 ******                 Environmental page              ******
 ************************************************************/
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

/*************************************************************
 ******        Air Quality page: Instant values         ******
 ************************************************************/
const char* _SENSUS_191_2_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff\",\"&\",\"manufacturerdata\",\"index\",50,\"02\"],\"properties\":{\"tvoc\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,false]},\"co2\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,true,false]},\"co\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"no2\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false]},\"nh3\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,false]},\"ch2o\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,false]},\"o3\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,true,false]},\"so2\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,4,true,false]},\"c6h6\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,4,true,false]},\"gases_aqi\":{\"condition\":[\"manufacturerdata\",50,\"02\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff", "&", "manufacturerdata", "index", 50, "02"],
   "properties":{
      "tvoc":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, false]
      },
      "co2":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false]
      },
      "co":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "no2":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false]
      },
      "nh3":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, false]
      },
      "ch2o":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, false]
      },
      "o3":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, true, false]
      },
      "so2":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 4, true, false]
      },
      "c6h6":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 4, true, false]
      },
      "gases_aqi":{
         "condition":["manufacturerdata", 50, "02"],
         "decoder":["value_from_hex_data", "manufacturerdata", 48, 2, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_2_json_props = "{\"properties\":{\"tvoc\":{\"unit\":\"ppb\",\"name\":\"Total Volatile Organic Compounds\"},\"co2\":{\"unit\":\"mg/m3\",\"name\":\"Carbon Dioxide\"},\"co\":{\"unit\":\"mg/m3\",\"name\":\"Carbon Monixide\"},\"no2\":{\"unit\":\"µg/m3\",\"name\":\"Nitrogen Dioxide\"},\"nh3\":{\"unit\":\"µg/m3\",\"name\":\"Ammonia\"},\"ch2o\":{\"unit\":\"µg/m3\",\"name\":\"Formaldehyde\"},\"o3\":{\"unit\":\"µg/m3\",\"name\":\"Ozone\"},\"so2\":{\"unit\":\"µg/m3\",\"name\":\"Sulphur Dioxide\"},\"c6h6\":{\"unit\":\"µg/m3\",\"name\":\"Benzene\"},\"gases_aqi\":{\"unit\":\"\",\"name\":\"Gaseous pollutants AQI\"}}}";
/*R""""(
{
   "properties":{
      "tvoc":{
         "unit":"ppb",
         "name":"Total Volatile Organic Compounds"
      },
      "co2":{
         "unit":"mg/m3",
         "name":"Carbon Dioxide"
      },
      "co":{
         "unit":"mg/m3",
         "name":"Carbon Monixide"
      },
      "no2":{
         "unit":"µg/m3",
         "name":"Nitrogen Dioxide"
      },
      "nh3":{
         "unit":"µg/m3",
         "name":"Ammonia"
      },
      "ch2o":{
         "unit":"µg/m3",
         "name":"Formaldehyde"
      },
      "o3":{
         "unit":"µg/m3",
         "name":"Ozone"
      },
      "so2":{
         "unit":"µg/m3",
         "name":"Sulphur Dioxide"
      },
      "c6h6":{
         "unit":"µg/m3",
         "name":"Benzene"
      },
      "gases_aqi":{
         "unit":"",
         "name":"Gaseous pollutants AQI"
      }
   }
})"""";*/

/*************************************************************
 ******        Air Quality page: Average values         ******
 ************************************************************/
const char* _SENSUS_191_3_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff\",\"&\",\"manufacturerdata\",\"index\",50,\"03\"],\"properties\":{\"1h_avg_tvoc\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,false]},\"8h_avg_co2\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,true,false]},\"8h_avg_co\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"1h_avg_no2\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false]},\"8h_avg_nh3\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,false]},\"8h_avg_ch2o\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,false]},\"8h_avg_o3\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,true,false]},\"1h_avg_so2\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,4,true,false]},\"24h_avg_c6h6\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,4,true,false]},\"gases_avg_aqi\":{\"condition\":[\"manufacturerdata\",50,\"03\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",48,2,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff", "&", "manufacturerdata", "index", 50, "03"],
   "properties":{
      "1h_avg_tvoc":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, false]
      },
      "8h_avg_co2":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false]
      },
      "8h_avg_co":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "1h_avg_no2":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false]
      },
      "8h_avg_nh3":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, false]
      },
      "8h_avg_ch2o":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, false]
      },
      "8h_avg_o3":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, true, false]
      },
      "1h_avg_so2":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 4, true, false]
      },
      "24h_avg_c6h6":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 4, true, false]
      },
      "gases_avg_aqi":{
         "condition":["manufacturerdata", 50, "03"],
         "decoder":["value_from_hex_data", "manufacturerdata", 48, 2, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_3_json_props = "{\"properties\":{\"1h_avg_tvoc\":{\"unit\":\"ppb\",\"name\":\"Total Volatile Organic Compounds, 1h average\"},\"8h_avg_co2\":{\"unit\":\"mg/m3\",\"name\":\"Carbon Dioxide, 8h average\"},\"8h_avg_co\":{\"unit\":\"mg/m3\",\"name\":\"Carbon Monixide, 8h average\"},\"1h_avg_no2\":{\"unit\":\"µg/m3\",\"name\":\"Nitrogen Dioxide, 1h average\"},\"8h_avg_nh3\":{\"unit\":\"µg/m3\",\"name\":\"Ammonia, 8h average\"},\"8h_avg_ch2o\":{\"unit\":\"µg/m3\",\"name\":\"Formaldehyde, 8h average\"},\"8h_avg_o3\":{\"unit\":\"µg/m3\",\"name\":\"Ozone, 8h average\"},\"1h_avg_so2\":{\"unit\":\"µg/m3\",\"name\":\"Sulphur Dioxide, 1h average\"},\"24h_avg_c6h6\":{\"unit\":\"µg/m3\",\"name\":\"Benzene, 24h average\"},\"gases_avg_aqi\":{\"unit\":\"\",\"name\":\"Gaseous pollutants average AQI\"}}}";
/*R""""(
{
   "properties":{
      "1h_avg_tvoc":{
         "unit":"ppb",
         "name":"Total Volatile Organic Compounds, 1h average"
      },
      "8h_avg_co2":{
         "unit":"mg/m3",
         "name":"Carbon Dioxide, 8h average"
      },
      "8h_avg_co":{
         "unit":"mg/m3",
         "name":"Carbon Monixide, 8h average"
      },
      "1h_avg_no2":{
         "unit":"µg/m3",
         "name":"Nitrogen Dioxide, 1h average"
      },
      "8h_avg_nh3":{
         "unit":"µg/m3",
         "name":"Ammonia, 8h average"
      },
      "8h_avg_ch2o":{
         "unit":"µg/m3",
         "name":"Formaldehyde, 8h average"
      },
      "8h_avg_o3":{
         "unit":"µg/m3",
         "name":"Ozone, 8h average"
      },
      "1h_avg_so2":{
         "unit":"µg/m3",
         "name":"Sulphur Dioxide, 1h average"
      },
      "24h_avg_c6h6":{
         "unit":"µg/m3",
         "name":"Benzene, 24h average"
      },
      "gases_avg_aqi":{
         "unit":"",
         "name":"Gaseous pollutants average AQI"
      }
   }
})"""";*/

/*************************************************************
 ******  Air Pollution page: Instant and Average values ******
 ************************************************************/
const char* _SENSUS_191_4_json = "{\"brand\":\"ALGOL\",\"model\":\"PEMS\",\"model_id\":\"Sensus191\",\"cidc\":false,\"condition\":[\"manufacturerdata\",\"=\",52,\"index\",0,\"ffff\",\"&\",\"manufacturerdata\",\"index\",50,\"04\"],\"properties\":{\"pm1_0\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",6,4,true,false]},\"pm2_5\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",10,4,true,false]},\"pm4_0\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",14,4,true,false]},\"pm10\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",18,4,true,false]},\"np_05\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",22,4,true,false]},\"24h_avg_pm1_0\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",26,4,true,false]},\"24h_avg_pm2_5\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",30,4,true,false]},\"24h_avg_pm4_0\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",34,4,true,false]},\"24h_avg_pm10\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",38,4,true,false]},\"pmx_aqi\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",46,2,true,false]},\"avg_pmx_aqi\":{\"condition\":[\"manufacturerdata\",50,\"04\"],\"decoder\":[\"value_from_hex_data\",\"manufacturerdata\",46,2,true,false]}}}";
/*R""""(
{
   "brand":"ALGOL",
   "model":"PEMS",
   "model_id":"Sensus191",
   "cidc":false,
   "condition":["manufacturerdata", "=" ,52 ,"index", 0, "ffff", "&", "manufacturerdata", "index", 50, "04"],
   "properties":{
      "pm1_0":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 6, 4, true, false]
      },
      "pm2_5":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 10, 4, true, false]
      },
      "pm4_0":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 14, 4, true, false]
      },
      "pm10":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 18, 4, true, false]
      },
      "np_05":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 22, 4, true, false]
      },
      "24h_avg_pm1_0":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 26, 4, true, false]
      },
      "24h_avg_pm2_5":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 30, 4, true, false]
      },
      "24h_avg_pm4_0":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 34, 4, true, false]
      },
      "24h_avg_pm10":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 38, 4, true, false]
      },
      "pmx_aqi":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 46, 2, true, false]
      },
      "avg_pmx_aqi":{
         "condition":["manufacturerdata", 50, "04"],
         "decoder":["value_from_hex_data", "manufacturerdata", 46, 2, true, false]
      }
   }
})""""*/

const char* _SENSUS_191_4_json_props = "{\"properties\":{\"pm1_0\":{\"unit\":\"µg/m3\",\"name\":\"PM1.0 concentration\"},\"pm2_5\":{\"unit\":\"µg/m3\",\"name\":\"PM2.5 concentration\"},\"pm4_0\":{\"unit\":\"µg/m3\",\"name\":\"PM4.0 concentration\"},\"pm10\":{\"unit\":\"µg/m3\",\"name\":\"PM10 concentration\"},\"np_05\":{\"unit\":\"\",\"name\":\"Numberofparticles<=0.5µm\"},\"24h_avg_pm1_0\":{\"unit\":\"µg/m3\",\"name\":\"PM1.0 concentration, 24h average\"},\"24h_avg_pm2_5\":{\"unit\":\"µg/m3\",\"name\":\"PM2.5 concentration, 24h average\"},\"24h_avg_pm4_0\":{\"unit\":\"µg/m3\",\"name\":\"PM4.0 concentration, 24h average\"},\"24h_avg_pm10\":{\"unit\":\"µg/m3\",\"name\":\"PM10 concentration, 24h average\"},\"pmx_aqi\":{\"unit\":\"\",\"name\":\"PMx pollutants AQI\"},\"avg_pmx_aqi\":{\"unit\":\"\",\"name\":\"PMx pollutants average AQI\"}}}";
/*R""""(
{
   "properties":{
      "pm1_0":{
         "unit":"µg/m3",
         "name":"PM1.0 concentration"
      },
      "pm2_5":{
         "unit":"µg/m3",
         "name":"PM2.5 concentration"
      },
      "pm4_0":{
         "unit":"µg/m3",
         "name":"PM4.0 concentration"
      },
      "pm10":{
         "unit":"µg/m3",
         "name":"PM10 concentration"
      },
      "np_05":{
         "unit":"",
         "name":"Number of particles <= 0.5µm"
      },
      "24h_avg_pm1_0":{
         "unit":"µg/m3",
         "name":"PM1.0 concentration, 24h average"
      },
      "24h_avg_pm2_5":{
         "unit":"µg/m3",
         "name":"PM2.5 concentration, 24h average"
      },
      "24h_avg_pm4_0":{
         "unit":"µg/m3",
         "name":"PM4.0 concentration, 24h average"
      },
      "24h_avg_pm10":{
         "unit":"µg/m3",
         "name":"PM10 concentration, 24h average"
      },
      "pmx_aqi":{
         "unit":"",
         "name":"PMx pollutants AQI"
      },
      "avg_pmx_aqi":{
         "unit":"",
         "name":"PMx pollutants average AQI"
      }
   }
})"""";*/

/*************************************************************
 ******               Status Report page                ******
 ************************************************************/
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
