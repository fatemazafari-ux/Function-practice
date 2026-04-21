int tempAdvisor(int temp, int fan) {

    if (temp < 20 && fan == 0)
        return 1;

    else if (temp < 20 && fan == 1)
        return 4;

    else if (temp >= 20 && temp <= 30)
        return 2;

    else if (temp > 30 && fan == 0)
        return 3;

    else
        return 0;
}
