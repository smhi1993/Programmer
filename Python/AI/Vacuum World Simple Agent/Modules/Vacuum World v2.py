#INSTRUCTIONS
#Enter LOCATION A/B in captial letters
#Enter Status O/1 accordingly where 0 means CLEAN and 1 means DIRTY

def vacuum_world():
    #initializing goal_state
    #0 indicates Clean and 1 indicates Dirty
    goal_state = {'A': '0', 'B': '0'}
    costList = []
    with open("input.txt" , "r") as f:
        lines = f.readlines()
        lineCount = 0
        for line in lines:
            lineCount += 1
            location_input , status_input , status_input_complement = line.split(",")
            #Removing White Spaces
            location_input = location_input.strip()
            status_input = status_input.strip()
            status_input_complement = status_input_complement.strip()
            print("Initial Location Condition is: " + str(goal_state))
            cost = 0
            if location_input == 'A':
                current_state = {'A': status_input , 'B': status_input_complement}
                print("Current World State is: " + str(current_state))
                print("Vacuum is placed in Location A.")
                #Location A is Dirty.
                if status_input == '1':
                    print("Location A is Dirty.")
                    #Suck the dirt and mark it as Clean
                    current_state['A'] = '0'
                    cost += 1                      #Cost for Suck
                    print("COST for CLEANING Location A is: " + str(cost))
                    print("Location A has been Cleaned.")
                    print("Current World State is: " + str(current_state))
                    if status_input_complement == '1':
                        #If B is Dirty
                        print("Location B is Dirty.")
                        print("Moving Right to the Location B.")
                        cost += 1                       #Cost for Moving Right
                        print("COST for Moving RIGHT to the Location B is: " + str(cost))
                        #Suck the dirt and mark it as Clean
                        current_state['B'] = '0'
                        cost += 1                       #Cost for Suck
                        print("COST for CLEANING Location B is: " + str(cost))
                        print("Location B has been Cleaned.")
                        print("Current World State is: " + str(current_state))
                    else:
                        #Mark it as Clean
                        print("Location B is already Clean.")
                        print("No action, so Total COST is: " + str(cost))
                        print("Current World State is: " + str(current_state))
                else:
                    #Mark it as Clean
                    print("Location A is already Clean.")
                    print("No action, so Total COST is: " + str(cost))
                    print("Current World State is: " + str(current_state))
                    if status_input_complement == '1':
                        #If B is Dirty
                        print("Location B is Dirty.")
                        print("Moving RIGHT to the Location B.")
                        cost += 1                       #Cost for Moving Right
                        print("COST for Moving RIGHT is: " + str(cost))
                        #Suck the dirt and mark it as Clean
                        current_state['B'] = '0'
                        cost += 1                       #Cost for Suck
                        print("COST for CLEANING Location B is: " + str(cost))
                        print("Location B has been Cleaned.")
                        print("Current World State is: " + str(current_state))
                    else:
                        #Mark it as Clean
                        print("Location B is already Clean.")
                        print("No action, so Total COST is: " + str(cost))
                        print("Current World State is: " + str(current_state))
            else:
                current_state = {'A': status_input_complement , 'B': status_input}
                print("Current World State is: " + str(current_state))
                print("Vacuum is placed in Location B.")
                #Location B is Dirty.
                if status_input == '1':
                    print("Location B is Dirty.")
                    #Suck the dirt and mark it as Clean
                    current_state['B'] = '0'
                    cost += 1                           #Cost for Suck
                    print("COST for CLEANING Location B is: " + str(cost))
                    print("Location B has been Cleaned.")
                    print("Current World State is: " + str(current_state))
                    if status_input_complement == '1':
                        #If A is Dirty
                        print("Location A is Dirty.")
                        print("Moving LEFT to the Location A.")
                        cost += 1                       #Cost for Moving Right
                        print("COST for Moving LEFT is: " + str(cost))
                        #Suck the dirt and mark it as Clean
                        current_state['A'] = '0'
                        cost += 1                       #Cost for Suck
                        print("COST for CLEANING Location A is: " + str(cost))
                        print("Location A has been Cleaned.")
                        print("Current World State is: " + str(current_state))
                    else:
                        #Mark it as Clean
                        print("Location A is already Clean.")
                        print("No action, so Total COST is: " + str(cost))
                        print("Current World State is: " + str(current_state))
                else:
                    #Mark it as Clean
                    print("Location B is already Clean.")
                    print("No action, so Total COST is: " + str(cost))
                    print("Current World State is: " + str(current_state))
                    if status_input_complement == '1':
                        #If A is Dirty
                        print("Location A is Dirty.")
                        print("Moving LEFT to the Location A.")
                        cost += 1                       #Cost for Moving Right
                        print("COST for Moving LEFT is: " + str(cost))
                        #Suck the dirt and mark it as Clean
                        current_state['A'] = '0'
                        cost += 1                       #Cost for Suck
                        print("Cost for CLEANING Location A is: " + str(cost))
                        print("Location A has been Cleaned.")
                        print("Current World State is: " + str(current_state))
                    else:
                        #Mark it as Clean
                        print("Location A is already Clean.")
                        print("No action, so Total COST is: " + str(cost))
                        print("Current World State is: " + str(current_state))
            #Done Cleaning
            print("GOAL STATE:")
            print(goal_state)
            print("Performance Measurement is: " + str(cost) + "\n")
            cost = float(cost)
            costList += [cost]
        score = sum(costList) / lineCount
        print("Average Performance Score is: " + str(score))

if __name__ == '__main__':
    vacuum_world()
