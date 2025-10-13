float euro = 4.075, dolar = 3.305;
float *moedaPtr;

moedaPtr = &euro;
printf("Cotacao do euro: %f\n", *moedaPtr);
moedaPtr = &dolar;
printf("Cotacao do dolar: %f\n", *moedaPtr);
