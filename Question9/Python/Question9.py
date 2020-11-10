def organizingContainers(kontener):
    size_box = [0] * len(kontener)
    transaction_count_type = [0] * len(kontener)

    for i, kont_out in enumerate(kontener):
        for j, kont_in in enumerate(kont_out):
            size_box[j] += kont_in
            transaction_count_type[i] += kont_in

    sorted(size_box)
    sorted(transaction_count_type)
    for i, j in zip(size_box, transaction_count_type):
        if i != j:
            return "Impossible"
    return "Possible"


if __name__ == "__main__":
    q = int(input().strip())
    answer = ""
    for a0 in range(q):
        n = int(input().strip())
        container = []
        for container_i in range(n):
            container_t = [int(container_temp) for container_temp in input().strip().split(' ')]
            container.append(container_t)
        result = organizingContainers(container)
        if (answer == ""):
            answer = str(result)
        else:
            answer = answer + "," + str(result)
    # Do not remove below line
    print(answer)
    # Do not print anything after this line
