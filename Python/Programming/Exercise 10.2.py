# Program that gets the price of renting house and prints what kind of house is needed.
def real_estate():
    houses_list = [['Suite House' , 'Adequate Facilities' , 1500] , ['Suite House' , 'Furnished Facilities' , 2200] ,
                   ['Apartment House', 'Adequate Facilities' , 2500] , ['Apartment House' , 'Furnished Facilities' , 3200] ,
                   ['Villa House', 'Adequate Facilities' , 3500] , ['Villa House' , 'Furnished Facilities' , 4800] ,
                   ['Garden House' , 'Adequate Facilities' , 5600] , ['Garden House' , 'Furnished Facilities' , 7500]]
    print('Available Houses list is:')
    print(houses_list)
    print('\n')
    houses_type = ['Suite House' , 'Apartment House' , 'Villa House' , 'Garden House']
    options_list = ['Adequate Facilities' , 'Furnished Facilities']
    price_list = [1000 , 1500 , 2000 , 2200 , 2500 , 3000 , 3200 , 3500 , 4000 , 4500 , 4800 , 5000 , 5600 , 7500]
    for price in price_list:
        for options in options_list:
            for house in houses_type:
                if options == options_list[0] and price <= 2000:
                    wished_house = []
                    wished_house += [house , options , price]
                    print('Your considered Price is' , price , '$.')
                    print('Your considered House is' , house , '.')
                    print('Your considered Options are' , options , '.')
                    print('Your Wished House is:')
                    print(wished_house)
                    if wished_house in houses_list:
                        print('Nice! Your Wished House is available!')
                        print('\n')
                        print('---------------------------------------------------------------')
                        print('\n')
                    else:
                        print('Unlucky! Your Wished House is not available!')
                        print('\n')
                        print('---------------------------------------------------------------')
                        print('\n')
                elif options == options_list[1] and price >= 3000:
                    wished_house = []
                    wished_house += [house , options , price]
                    print('Your considered Price is' , price , '$.')
                    print('Your considered House is' , house , '.')
                    print('Your considered Options are' , options , '.')
                    print('Your Wished House is:')
                    print(wished_house)
                    if wished_house in houses_list:
                        print('Nice! Your Wished House is available!')
                        print('\n')
                        print('---------------------------------------------------------------')
                        print('\n')
                    else:
                         print('Unlucky! Your Wished House is not available!')
                         print('\n')
                         print('---------------------------------------------------------------')
                         print('\n')
                else:
                    print('Unfortunately Available Houses didn\'t match your requirements!')
                    print('\n')
                    print('---------------------------------------------------------------')
                    print('\n')


if __name__ == '__main__':
    real_estate()