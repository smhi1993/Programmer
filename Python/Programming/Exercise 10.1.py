# Program that gets the price of renting house and prints what kind of house is needed.
def real_estate():
    houses_list = [('Suite House' , '50m' , 'Adequate Facilities' , 1500) , ('Suite House' , '75m' , 'Furnished Facilities'
                    , 2200) , ('Apartment House', '150m' , 'Adequate Facilities' , 2500) , ('Apartment House', '180m'
                    , 'Furnished Facilities' , 3200) , ('Villa House', '250m' , 'Adequate Facilities' , 3500)
                    , ('Villa House', '300m' , 'Furnished Facilities' , 4800) , ('Garden House', '500m'
                    , 'Adequate Facilities' , 5600) , ('Garden House', '600m' , 'Furnished Facilities' , 7500)]
    print(houses_list)
    options_list = ['Adequate Facilities' , 'Furnished Facilities']
    print('Available Facilities are:')
    print('0 =' , options_list[0])
    print('1 =' , options_list[1])
    print('\n')
    j = 0
    for i in houses_list:
        if houses_list[j][3] < 2000:
            if houses_list[j][2] == options_list[0]:
                selected_house = houses_list[j]
                print('Your considered Price is' , houses_list[j][3] , '$.')
                print('Your considered Options are' , options_list[0] , '.')
                print('Your considered House is' , selected_house , '.')
                print('\n')
                j += 1
            else:
                j += 1
        elif 3000 <= houses_list[j][3]:
            if houses_list[j][2] == options_list[1]:
                selected_house = houses_list[j]
                print('Your considered Price is' , houses_list[j][3] , '$.')
                print('Your considered Options are' , options_list[1] , '.')
                print('Your considered House is' , selected_house , '.')
                print('\n')
                j += 1
            else:
                j += 1
        else:
            j += 1


if __name__ == '__main__':
    real_estate()