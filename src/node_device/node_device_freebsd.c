#include "node_device_driver.h"

int check_fc_host_freebsd(union _virNodeDevCapData *d ATTRIBUTE_UNUSED)
{

    return -1;
}

int check_vport_capable_freebsd(union _virNodeDevCapData *d ATTRIBUTE_UNUSED)
{

    return -1;
}

int read_wwn_freebsd(int host ATTRIBUTE_UNUSED,
    const char *file ATTRIBUTE_UNUSED, char **wwn ATTRIBUTE_UNUSED)
{

    return -1;
}
