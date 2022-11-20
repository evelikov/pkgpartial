#include <xf86drm.h>
#include <stdbool.h>

bool
is_valid_device(drmDevice *dev)
{
    return !!dev;
}
