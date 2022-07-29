cout<<endl;
    cout<<"rotation example"<<endl;
    UINT_32 u2("00000000000011011001000000111001"); // 888889
    toInt(u2);
    u2.RotateClockwise(4);
    toInt(u2);
    u2.RotateAntiClockwise(4);
    toInt(u2);