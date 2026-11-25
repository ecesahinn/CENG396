#include <stdio.h>
#include "common.h"
#include "input.h"

int main(int argc, char *argv[])
{
    static SensorRecord records[MAX_RECORDS];
    int count = 0;

    if (argc != 3) {
        fprintf(stderr, "Usage: %s input.csv output.txt\n", argv[0]);
        return 1;
    }

    if (read_records(argv[1], records, &count) != 0)
        return 1;

    /* analyse_records(records, count);           Modül 2 */
    /* control_records(...); build_rounds(...);   Modül 3 */
    /* write_report(argv[2], ...);                Modül 4 */

    return 0;
}
