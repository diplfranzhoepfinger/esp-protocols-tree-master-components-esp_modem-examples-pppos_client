#include <stdio.h>
#include "modem_pwkey.h"

extern void pppos_client_main(void);

void app_main(void)
{



    init_modem_pwkey();

    power_down_modem_pwkey();

    // power Up does work now. .
    power_up_modem_pwkey();



    pppos_client_main();



}
