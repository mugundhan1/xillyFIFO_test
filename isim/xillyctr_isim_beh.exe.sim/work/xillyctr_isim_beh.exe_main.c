/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    unisims_ver_m_13701390776532775226_2297623829_init();
    unisims_ver_m_02760857255181855774_2593380106_init();
    unisims_ver_m_10756824001551653569_4007306260_init();
    work_m_05676273507967502174_0981570457_init();
    work_m_04601750621129801466_2582214024_init();
    unisims_ver_m_03367362533346577578_2449448540_init();
    xilinxcorelib_ver_m_03971639830285338144_2080938666_init();
    xilinxcorelib_ver_m_03971639830285338144_0860425325_init();
    xilinxcorelib_ver_m_11349598242136268160_0589607335_init();
    xilinxcorelib_ver_m_16593082313569287316_2827302974_init();
    xilinxcorelib_ver_m_14518455072116702019_2306231578_init();
    work_m_08839392297756554087_1734178260_init();
    work_m_02982935898287974598_1787258478_init();
    work_m_00047370130185118434_3866568230_init();
    work_m_04601750621129801466_2806086298_init();
    work_m_02286326989109282242_0204903951_init();
    work_m_10601911995574613704_4020928423_init();
    xilinxcorelib_ver_m_16971754672448907676_3681968906_init();
    xilinxcorelib_ver_m_07126858663298141595_2504906480_init();
    xilinxcorelib_ver_m_14518455072116702019_0512873243_init();
    work_m_18219643850453676170_0005553800_init();
    work_m_01195557739075029155_4060554000_init();
    work_m_02874869732654168577_1690408536_init();
    work_m_02534979520643326740_0947190598_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_02534979520643326740_0947190598");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
