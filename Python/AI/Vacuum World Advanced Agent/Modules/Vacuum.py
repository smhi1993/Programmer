import numpy as np
import Environs
import Agency


def f_scoring(scores, agents, state):
    for i, agent in enumerate(agents):
        if agent.action != 'Power Down':
            scores[i] -= 1
        if agent.action == 'Suck' and state[agent.loc[0], agent.loc[1]] == 1:
            scores[i] += 100
        if agent.action == 'Power Down' and (agent.loc-agent.home_loc).sum()!=0:
            scores[i] -= 1000
    return scores


def f_homeless(scores, agents, state):
    for i, agent in enumerate(agents):
        if agent.action != 'Power Down':
            scores[i] -= 1
        if agent.action == 'Suck' and state[agent.loc[0], agent.loc[1]] == 1:
            scores[i] += 100
    return scores

def f_action(agents, state):
    for agent in agents:
        if agent.action == 'Suck':
            state[agent.loc[0], agent.loc[1]] = 0
        elif (agent.action == 'Move'
                and min(agent.loc + agent.bearing) >= 0
                and min(state.shape - agent.loc - agent.bearing) > 0
                and state[agent.loc[0] + agent.bearing[0],
                            agent.loc[1] + agent.bearing[1]] != 2):
            agent.loc += agent.bearing
        elif agent.action == 'Right Turn':
            agent.bearing = [agent.bearing[1], -agent.bearing[0]]
        elif agent.action == 'Left Turn':
            agent.bearing = [-agent.bearing[1], agent.bearing[0]]
    return state

def run_eval_environment(state, update, agents, performance):
    scores = [0 for _ in range(len(agents))]
    while any([agent.action != 'Power Down' for agent in agents]):
        for agent in agents:
            agent.get_percept(state)
            agent.program()
        scores = performance(scores, agents, state)
        state = update(agents, state)
    return scores

if __name__ == '__main__':

    for S in Environs.MiniMax2Package():
        environment1 = S.grid
        agents = [Agency.TrivialTableLookupAgent(np.array([0,0]), np.array([0,0]), 'N')]
        print(environment1)
        print('The Environment Scale Is :' , np.shape(environment1))
        print(run_eval_environment(environment1, f_action, agents, f_scoring))

        environment2 = S.grid
        agents = [Agency.TrivialTableLookupAgent(np.array([0,0]), np.array([0,0]), 'S')]
        print(environment2)
        print('The Environment Scale Is :' , np.shape(environment2))
        print(run_eval_environment(environment2, f_action, agents, f_scoring))

        environment3 = S.grid
        agents = [Agency.TrivialTableLookupAgent(np.array([0,0]), np.array([0,0]), 'E')]
        print(environment3)
        print('The Environment Scale Is :' , np.shape(environment3))
        print(run_eval_environment(environment3, f_action, agents, f_scoring))

        environment4 = S.grid
        agents = [Agency.TrivialTableLookupAgent(np.array([0,0]), np.array([0,0]), 'W')]
        print(environment4)
        print('The Environment Scale Is :' , np.shape(environment4))
        print(run_eval_environment(environment4, f_action, agents, f_scoring))

    environment5 = Environs.LimitedRandom().grid
    agents = [Agency.EmptyRoomInternalStateReflexAgent(np.array([0,0]), np.array([0,0]), 'N')]
    print(environment5)
    print('The Environment Scale Is :' , np.shape(environment5))
    print(run_eval_environment(environment5, f_action, agents, f_scoring))

    environment6 = Environs.LimitedRandom().grid
    agents = [Agency.EmptyRoomInternalStateReflexAgent(np.array([0,0]), np.array([0,0]), 'S')]
    print(environment6)
    print('The Environment Scale Is :' , np.shape(environment6))
    print(run_eval_environment(environment6, f_action, agents, f_scoring))

    environment7 = Environs.LimitedRandom().grid
    agents = [Agency.EmptyRoomInternalStateReflexAgent(np.array([0,0]), np.array([0,0]), 'E')]
    print(environment7)
    print('The Environment Scale Is :' , np.shape(environment7))
    print(run_eval_environment(environment7, f_action, agents, f_scoring))

    environment8 = Environs.LimitedRandom().grid
    agents = [Agency.EmptyRoomInternalStateReflexAgent(np.array([0,0]), np.array([0,0]), 'W')]
    print(environment8)
    print('The Environment Scale Is :' , np.shape(environment8))
    print(run_eval_environment(environment8, f_action, agents, f_scoring))

    environment9 = Environs.LimitedRandom().grid
    agents = [Agency.BasicReflexAgent(np.array([0,0]), np.array([0,0]), 'N')]
    print(environment5)
    print('The Environment Scale Is :' , np.shape(environment5))
    print(run_eval_environment(environment5, f_action, agents, f_homeless))

    environment10 = Environs.LimitedRandom().grid
    agents = [Agency.BasicReflexAgent(np.array([0,0]), np.array([0,0]), 'S')]
    print(environment6)
    print('The Environment Scale Is :' , np.shape(environment6))
    print(run_eval_environment(environment6, f_action, agents, f_homeless))

    environment11 = Environs.LimitedRandom().grid
    agents = [Agency.BasicReflexAgent(np.array([0,0]), np.array([-1,-1]), 'E')]
    print(environment7)
    print('The Environment Scale Is :' , np.shape(environment7))
    print(run_eval_environment(environment7, f_action, agents, f_homeless))

    environment12 = Environs.LimitedRandom().grid
    agents = [Agency.BasicReflexAgent(np.array([0,0]), np.array([-1,-1]), 'W')]
    print(environment8)
    print('The Environment Scale Is :' , np.shape(environment8))
    print(run_eval_environment(environment8, f_action, agents, f_homeless))
