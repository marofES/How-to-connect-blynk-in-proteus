
#include <BlynkSimpleStream.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).

#define BLYNK_TEMPLATE_ID "TMPLPsOKmb84"
#define BLYNK_DEVICE_NAME "Proteus"
#define BLYNK_AUTH_TOKEN "1cKKyxjr513Ypgc28nnz31EIbdH3rSja"
char auth[] = "1cKKyxjr513Ypgc28nnz31EIbdH3rSja";


void setup()
{
 
  // Blynk will work through Serial
  // Do not read or write this serial manually in your sketch
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
}

void loop()
{
  Blynk.run();
}
