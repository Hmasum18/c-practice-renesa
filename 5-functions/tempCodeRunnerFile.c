int isPrime = 1;
    for(int i = 2; i<x; i++){
        if(x%i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1)