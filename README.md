# Si5351
## A Simple Arduino Nano based controller for the Si5351 chip

This sketch has been designed for use with the Si5351 mo0dule and Arduino Nano controller produced by Makis, SV1AFN. The code has been reduced to the bare minimum and relies heavily on Jason Milldrum's excellent Si5351 library.
The three output frequencies are set in lines 11 to 13, whilst the output levels are set in lines 16 to 18
In the test model, the three output levels were measured as: -0.7dBm, +5.3dBm and +11.1dBm. All measurements were with the output terminated in a 50R load.
