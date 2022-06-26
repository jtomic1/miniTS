interface Car {
    brand: string;
    horsePower: number;
    type: string;

    (): void;
    getPrice: (numOne: number, numTwo: number, insured: boolean) => number;

    owner: string;
}

interface emptyInterface {

}
