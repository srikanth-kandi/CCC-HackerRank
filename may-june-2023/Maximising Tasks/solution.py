def find_max_tasks(start_times, end_times):
    tasks = list(zip(start_times, end_times))

    tasks.sort(key=lambda x: x[1])

    max_tasks = 0
    current_time = 0

    for task in tasks:
        if task[0] >= current_time:
            max_tasks += 1
            current_time = task[1]

    return max_tasks


t = int(input())

for i in range(t):
    n = int(input())

    start_times = list(map(int, input().split()))

    end_times = list(map(int, input().split()))

    max_tasks = find_max_tasks(start_times, end_times)

    print(max_tasks)
