#include "drivers/serial_port.h"
#include "drivers/frame_buffer.h"



    
    int main(){

               char dlg[] = "Hello Everyone! welcome to zipOS";
   
    
    serial_write(0x3F8, dlg, sizeof(dlg));
    fb_write(dlg, sizeof(dlg));
    
    }
