#!/bin/sh

if [ -z $ECDB_HOME ]; then
    ECDB_HOME=`pwd`
fi
if [ -z $TOMCAT_BIN ]; then
    CATALINA_LOC=`find /usr/ -name 'catalina.sh' 2> /dev/null | grep 'bin/catalina.sh'`
    TOMCAT_BIN=`dirname "$CATALINA_LOC"`
fi

export CATALINA_OPTS="-Djava.awt.headless=true"
export CATALINA_BASE="$ECDB_HOME"
export CATALINA_PID="$CATALINA_BASE/logs/catalina.pid"
$TOMCAT_BIN/startup.sh
echo [2J >> $ECDB_HOME/logs/catalina.out
