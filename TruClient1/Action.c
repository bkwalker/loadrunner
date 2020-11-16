//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to 'http://www.advantageonl...shopping.com/#/'", "snapshot=Action_1.inf");
	lr_start_transaction("Login");
	truclient_step("2", "Click on element (1)", "snapshot=Action_2.inf");
	truclient_step("3", "Type aidemo in username textbox", "snapshot=Action_3.inf");
	truclient_step("4", "Type ******* in Password passwordbox", "snapshot=Action_4.inf");
	truclient_step("5", "Press key Enter on Password passwordbox", "snapshot=Action_5.inf");
	lr_end_transaction("Login",0);
	lr_start_transaction("Logout");
	truclient_step("7", "Click on MenuUserLink link", "snapshot=Action_7.inf");
	truclient_step("9", "Click on Sign out link", "snapshot=Action_9.inf");
	lr_end_transaction("Logout",0);
	lr_start_transaction("Shop");
	truclient_step("10", "Click on Shop Now label", "snapshot=Action_10.inf");
	truclient_step("11", "Click on image (1) image", "snapshot=Action_11.inf");
	truclient_step("12", "Click on ADD TO CART button", "snapshot=Action_12.inf");
	truclient_step("13", "Click on HOME link", "snapshot=Action_13.inf");
	truclient_step("14", "Click on Special offer link", "snapshot=Action_14.inf");
	truclient_step("15", "Click on View Details label", "snapshot=Action_15.inf");
	truclient_step("16", "Click on ADD TO CART button", "snapshot=Action_16.inf");
	lr_end_transaction("Shop",0);

	return 0;
}
