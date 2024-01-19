
team1 = {'name': 'Zags', 'rank': 1, 'score': 0}
team2 = {'name': 'Arizona', 'rank': 2, 'score': 0}
matchup0 = {'home': team1,'away': team2}
matchup1 = {'home': team2,'away': team1}
round = [matchup0, matchup1]
print(round[0], '\n', round[1])
print(round[0]['home']['score'])