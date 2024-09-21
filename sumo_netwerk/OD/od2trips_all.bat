"C:\Program Files (x86)\Sumo\bin\od2trips" --taz-files ..\G5.add.xml --prefix mvt -d AS-mvt.txt -o trips_mvt_AS.xml
"C:\Program Files (x86)\Sumo\bin\od2trips" --taz-files ..\G5.add.xml --prefix fts -d AS-fts.txt -o trips_fts_AS.xml
"C:\Program Files (x86)\Sumo\bin\od2trips" --taz-files ..\G5.add.xml --prefix vtg -d AS-vtg.txt -o trips_vtg_AS.xml
#"C:\Program Files (x86)\Sumo\bin\od2trips" --taz-files ..\G5.add.xml --prefix bus -d od_ochtend_bus.txt -o trips_bus_ochtend.xml
del ..\trips_mvt_AS.xml
del ..\trips_fts_AS.xml
del ..\trips_vtg_AS.xml
#del ..\trips_bus_ochtend.xml
copy trips_mvt_AS.xml ..\trips_mvt_AS.xml
copy trips_fts_AS.xml ..\trips_fts_AS.xml
copy trips_vtg_AS.xml ..\trips_vtg_AS.xml
#copy trips_bus_ochtend.xml ..\trips_bus_ochtend.xml
pause