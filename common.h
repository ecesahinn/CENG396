#ifndef COMMON_H
#define COMMON_H

#define MAX_RECORDS 1000
#define NODE_LEN 16          /* 15 karakter + '\0' */

#define BATTERY_MIN_V 2.50
#define BATTERY_MAX_V 4.30
#define RSSI_MIN_DBM  -120
#define RSSI_MAX_DBM  0
#define TOLERANCE     0.0001

typedef struct {
    int round;
    char node[NODE_LEN];
    double battery_V;
    int rssi_dBm;
    int sent;
    int received;
} SensorRecord;

#endif
