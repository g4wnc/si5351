
#include "si5351.h"  
#include "Wire.h"
Si5351 si5351;

void setup()
{
  // Initialize the Si5351
  si5351.init(SI5351_CRYSTAL_LOAD_8PF, 27000000UL, 0);
  
  si5351.set_freq(1000000000ULL, SI5351_CLK0); // set clock 0 to 10MHz
  si5351.set_freq(100000000ULL, SI5351_CLK1); //set clock 1 to 1MHz
  si5351.set_freq(50000000ULL, SI5351_CLK2); // set clock 2 to 500kHz

  //SET OUTPUT STRENGTH FOR OUTPUTS
  si5351.drive_strength(SI5351_CLK0, SI5351_DRIVE_8MA);
  si5351.drive_strength(SI5351_CLK1, SI5351_DRIVE_8MA); 
  si5351.drive_strength(SI5351_CLK2, SI5351_DRIVE_8MA); 
  //ENABLE OR DISABLE OUTPUTS
  si5351.output_enable(SI5351_CLK0, 1);
  si5351.output_enable(SI5351_CLK1, 1);
  si5351.output_enable(SI5351_CLK2, 1);
  si5351.update_status();
  delay(500);
}

void loop()
{
// Nothing to do here repeatedly  
}
