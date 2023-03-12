#include <stdio.h>

int main() {
    int base_addr, num_segments, segment_size, memory_limit;
    int i, seg_num, displacement, real_addr;
    
    // Step 2: read inputs
    printf("Enter base address: ");
    scanf("%d", &base_addr);
    printf("Enter number of segments: ");
    scanf("%d", &num_segments);
    printf("Enter size of each segment: ");
    scanf("%d", &segment_size);
    printf("Enter memory limit: ");
    scanf("%d", &memory_limit);
    
    // Step 3: check memory limit
    if (memory_limit < base_addr) {
        printf("Invalid memory limit.\n");
        return 0;
    }
    
    // Step 4: create segment table
    printf("Segment Table:\n");
    printf("--------------\n");
    for (i = 0; i < num_segments; i++) {
        printf("Segment %d: Address %d\n", i, base_addr + i * segment_size);
    }
    
    // Step 5: read segment number and displacement
    printf("Enter segment number: ");
    scanf("%d", &seg_num);
    printf("Enter displacement: ");
    scanf("%d", &displacement);
    
    // Step 6: compute real address
    if (seg_num >= num_segments || displacement >= segment_size) {
        printf("Invalid segment number or displacement.\n");
    } else {
        real_addr = base_addr + seg_num * segment_size + displacement;
        printf("Real address = %d\n", real_addr);
    }
    
    // Step 7: end program
    return 0;
}
