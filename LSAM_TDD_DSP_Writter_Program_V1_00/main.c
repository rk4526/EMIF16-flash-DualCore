
#include <stdio.h>
#include <string.h>

#include "User_Define_HeaderFile.h"
#include "LSAM_TDD_DSP_Initialization_HeaderFile.h"
#include "LSAM_TDD_Operation_Function_HeaderFile.h"

void    EMIF16_TEST_FUCTION         (void);
int main(void)
{

   LSAM_TDD_Initializatoin();
   EMIF16_TEST_FUCTION();
   //boot_core1();
   Write_NOR_Flash_App_Code();
   boot_core1();
	return 0;
}


void EMIF16_TEST_FUCTION(void)
{
    // For test
    uInt16      Device_ID           = 0x0;
    Device_ID                       = S29GL256P_NOR_Flash_Read_Device_ID();
    printf("\nNOR FLASH Device ID: 0x%x .\n", Device_ID);

    uInt16      Manufacture_ID      = 0x0;
    Manufacture_ID                  = S29GL256P_NOR_Flash_Read_Manufacturer_ID();
    printf("NOR FLASH Manufacture ID: 0x%x .\n", Manufacture_ID);
}
