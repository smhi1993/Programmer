# Program that gets the price of renting house and prints what kind of house is needed.
def real_estate():
    houses_list = ['Suite House' , 'Apartment House' , 'Villa House' , 'Garden House']
    options_list = ['Adequate Facilities' , 'Furnished Facilities']
    price_list = [1000 , 1500 , 2000 , 3000 , 3500 , 4000]
    for price in price_list:
        for options in options_list:
            for house in houses_list:
                if options == options_list[0] and price <= 2000:
                    selected_house = []
                    selected_house += [house , options , price]
                    print('Your considered Price is' , price , '$.')
                    print('Your considered House is' , house , '.')
                    print('Your considered Options are' , options , '.')
                    print(selected_house)
                    print('\n')
                elif options == options_list[1] and price >= 3000:
                    selected_house = []
                    selected_house += [house , options , price]
                    print('Your considered Price is' , price , '$.')
                    print('Your considered House is' , house , '.')
                    print('Your considered Options are' , options , '.')
                    print(selected_house)
                    print('\n')
                else:
                    continue


if __name__ == '__main__':
    real_estate()