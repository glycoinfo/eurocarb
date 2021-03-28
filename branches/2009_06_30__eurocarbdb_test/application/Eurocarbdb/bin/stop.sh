#!/bin/sh

if [ -z $ECDB_HOME ]; then
    ECDB_HOME=`pwd`
fi
if [ -z $TOMCAT_BIN ]; then
    CATALINA_LOC=`find /usr/ -name 'catalina.sh' 2> /dev/null | grep 'bin/catalina.sh'`
    TOMCAT_BIN=`dirname "$CATALINA_LOC"`
fi

export CATALINA_BASE="$ECDB_HOME"
export CATALINA_PID="$CATALINA_BASE/run/catalina.pid"
$TOMCAT_BIN/shutdown.sh
