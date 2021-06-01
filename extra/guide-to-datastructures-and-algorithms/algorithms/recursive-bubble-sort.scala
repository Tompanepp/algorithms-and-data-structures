object bubblesort {
  def apply[A <% Ordered[A]](list: List[A]): List[A] = {
      def sort(highest_numbers: List[A], sorted: List[A]): List[A] =
        if (highest_numbers.isEmpty) sorted
        else bubble(highest_numbers, Nil, sorted)
        
      def bubble(highest_numbers: List[A], unsorted: List[A], sorted: List[A]): List[A] = highest_numbers match {
        case first_num :: second_num :: remaining_list =>
          if (first_num > second_num) bubble(first_num :: remaining_list, second_num :: unsorted, sorted)
          else bubble(second_num :: remaining_list, first_num :: unsorted, sorted)
        case first_num :: Nil => sort(unsorted, first_num :: sorted)
        case Nil => Nil
      }
      sort(list, Nil)
    }
}

println(bubblesort(List(1,5,2,3)))