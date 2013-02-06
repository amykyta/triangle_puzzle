require_relative 'board'
require_relative 'node'

[0, 10, 14, 1, 2, 6, 11, 13, 9, 4, 7, 8, 3, 5, 12].each do |peg|

  # Start with the 0 peg being open
  board = Board.new(peg)

  def play(board)
    if board.moves.any?
      count = 0
      board.moves.each do |move|
        board.move(move[0], move[1], move[2])
        count += play(board)
        board.rewind(move[0], move[1], move[2])
      end
      count
    else
      if board.remaining == 1
        1
      else
        0
      end
    end

  end

  puts "#{play(board)} solutions for opening peg: #{peg}"

end

