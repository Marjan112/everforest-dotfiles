return {
  'nvim-telescope/telescope.nvim', version = '*',
  dependencies = {
    'nvim-lua/plenary.nvim',
  },
  cmd = "Telescope",
  keys = {
    { '<leader>ff', "<cmd>Telescope find_files<cr>", desc = 'Telescope find files' },
    { '<leader>fg', "<cmd>Telescope live_grep<cr>", desc = 'Telescope live grep' }
  }
}
