s = input('Do you agree?')

if s == 'Y' or s == 'y':
    print('Agree')
elif s == 'N' or s == 'n':
    print('Not agreed')


# another way to aproach

if s in ['Y', 'y']:
    print('Agreed')
elif s in ['N', 'n']:
    print('Not agreed')



